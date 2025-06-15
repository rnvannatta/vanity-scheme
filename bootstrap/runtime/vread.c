/*
 * Copyright 2023-2024 Richard N Van Natta
 *
 * This file is part of the Vanity Scheme Runtime.
 *
 * The Vanity Scheme Runtime is free software: you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, either version
 * 2.1 of the License, or (at your option) any later version.
 * 
 * The Vanity Scheme Runtime is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with the Vanity Scheme Runtime.
 *
 * If not, see <https://www.gnu.org/licenses/>.
 *
 * This work is published with additional permission, the Vanity Scheme
 * Runtime Library Exceptions, which should have been included with the
 * Vanity Scheme Compiler.
 *
 * If not, visit <https://github.com/rnvannatta>
 */

#include <errno.h>
#include <assert.h>
#include <math.h>

#include "vscheme/vruntime.h"
#include "vruntime_private.h"
#include "vport_private.h"

enum lex_t {
  LEX_START,
  LEX_SIGN,
  LEX_EOF,
  LEX_ERROR,
  LEX_COMMENT,
  LEX_OPEN_PAREN,
  LEX_CLOSE_PAREN,
  LEX_TRUE,
  LEX_FALSE,
  LEX_INT,
  LEX_CHAR,
  LEX_NAMED_CHAR,
  LEX_NUMBER,
  LEX_DOUBLE,
  LEX_SYMBOL,
  LEX_STRING,
  LEX_STRING_ESCAPE,
  LEX_DOT,
  LEX_2DOT,
  LEX_SHARP,
  LEX_SHARP_TF,
  LEX_SHARP_WORD,
  LEX_VECTOR,
  LEX_CODE_COMMENT,
  LEX_QUOTE,
  LEX_QUASIQUOTE,
  LEX_UNQUOTE,
  LEX_UNQUOTE_SPLICING,
  NUM_LEX_T };


// TODO in lexer:
//   fancy numbers
//   bar symbols

SYSV_CALL static int VLexStart(int c, bool * satisfied, bool * unget) {
  switch(c) {
    case '(':
      *satisfied = true;
      return LEX_OPEN_PAREN;
    case ')':
      *satisfied = true;
      return LEX_CLOSE_PAREN;
    case ';':
      return LEX_COMMENT;
    case ' ':
    case '\n':
    case '\r':
    case '\t':
      return LEX_START;
    case '+':
    case '-':
      return LEX_SIGN;
    case '!':
    case '$':
    case '%':
    case '&':
    case '*':
    case '/':
    case ':':
    case '<':
    case '=':
    case '>':
    case '?':
    case '^':
    case '_':
    case '~':
      return LEX_SYMBOL;
    case '"':
      return LEX_STRING;
    case '.':
      return LEX_DOT;
    case '\'':
      *satisfied = true;
      return LEX_QUOTE;
    case '`':
      *satisfied = true;
      return LEX_QUASIQUOTE;
    case ',':
      return LEX_UNQUOTE;
    case '#':
      return LEX_SHARP;
    default:
      if('0' <= c && c <= '9') return LEX_NUMBER;
      if('a' <= c && c <= 'z') return LEX_SYMBOL;
      if('A' <= c && c <= 'Z') return LEX_SYMBOL;

      *satisfied = true;
      return LEX_ERROR;
  }
}

SYSV_CALL static int VLexDot(int c, bool * satisfied, bool * unget) {
  if('0' <= c && c <= '9') {
    return LEX_NUMBER;
  }
  switch(c) {
    case '(':
    case ')':
    case '"':
    case ';':
    case ' ':
    case '\r':
    case '\t':
    case '\n':
      *satisfied = true;
      *unget = true;
      return LEX_DOT;
    case '.':
      return LEX_2DOT;
    default:
      *satisfied = true;
      return LEX_ERROR;
  }
}
SYSV_CALL static int VLex2Dot(int c, bool * satisfied, bool * unget) {
  switch(c) {
    case '.':
      *satisfied = true;
      return LEX_SYMBOL;
    default:
      *satisfied = true;
      return LEX_ERROR;
  }
}

SYSV_CALL static int VLexSharp(int c, bool * satisfied, bool * unget) {
  switch(c) {
    //case 't':
      //*satisfied = true;
      //return LEX_TRUE;
    case 't':
    case 'f':
      //*satisfied = true;
      //return LEX_FALSE;
      return LEX_SHARP_TF;
    case ';':
      *satisfied = true;
      return LEX_CODE_COMMENT;
    case '(':
      *satisfied = true;
      return LEX_VECTOR;
    case '\\':
      return LEX_CHAR;
    case '#':
      return LEX_SYMBOL;
    default:
      if('0' <= c && c <= '9') return LEX_SHARP_WORD;
      if('a' <= c && c <= 'z') return LEX_SHARP_WORD;
      if('A' <= c && c <= 'Z') return LEX_SHARP_WORD;

      *satisfied = true;
      return LEX_ERROR;
  }
}

SYSV_CALL static int VLexSharpTF(int c, bool * satisfied, bool * unget) {
  if('0' <= c && c <= '9') return LEX_SHARP_WORD;
  if('a' <= c && c <= 'z') return LEX_SHARP_WORD;
  if('A' <= c && c <= 'Z') return LEX_SHARP_WORD;

  *satisfied = true;
  *unget = true;
  return LEX_SHARP_WORD;
}

SYSV_CALL static int VLexSharpWord(int c, bool * satisfied, bool * unget) {
  if('0' <= c && c <= '9') return LEX_SHARP_WORD;
  if('a' <= c && c <= 'z') return LEX_SHARP_WORD;
  if('A' <= c && c <= 'Z') return LEX_SHARP_WORD;
  switch(c) {
    case '(':
      *satisfied = true;
      return LEX_SHARP_WORD;
    default:
      *satisfied = true;
      *unget = true;
      return LEX_SHARP_WORD;
  }
}

SYSV_CALL static int VLexUnquote(int c, bool * satisfied, bool * unget) {
  switch(c) {
    case '@':
      *satisfied = true;
      return LEX_UNQUOTE_SPLICING;
    default:
      *satisfied = true;
      *unget = true;
      return LEX_UNQUOTE;
  }
}

SYSV_CALL static int VLexComment(int c, bool * satisfied, bool * unget) {
  switch(c) {
    case '\n':
      return LEX_START;
    default:
      return LEX_COMMENT;
  }
}

SYSV_CALL static int VLexSign(int c, bool * satisfied, bool * unget) {
  if('0' <= c && c <= '9') return LEX_NUMBER;
  switch(c) {
    case '(':
    case ')':
    case '"':
    case ';':
    case ' ':
    case '\r':
    case '\t':
    case '\n':
      *satisfied = true;
      *unget = true;
      return LEX_SYMBOL;
    case '.':
      return LEX_DOUBLE;
    default:
      *satisfied = true;
      return LEX_ERROR;
  }
}

SYSV_CALL static int VLexNumber(int c, bool * satisfied, bool * unget) {
  if('0' <= c && c <= '9') {
    return LEX_NUMBER;
  }
  // TODO add doubles & add fancy number decoding
  switch(c) {
    case '.':
      return LEX_DOUBLE;
      break;
    case '(':
    case ')':
    case '"':
    case ';':
    case ' ':
    case '\r':
    case '\t':
    case '\n':
      *satisfied = true;
      *unget = true;
      return LEX_NUMBER;
      break;
    default:
      *satisfied = true;
      return LEX_ERROR;
  }
}

SYSV_CALL static int VLexDouble(int c, bool * satisfied, bool * unget) {
  if('0' <= c && c <= '9') {
    return LEX_DOUBLE;
  }
  switch(c) {
    case '(':
    case ')':
    case '"':
    case ';':
    case ' ':
    case '\r':
    case '\t':
    case '\n':
      *satisfied = true;
      *unget = true;
      return LEX_DOUBLE;
      break;
    default:
      *satisfied = true;
      return LEX_ERROR;
  }
  
}

SYSV_CALL static int VLexSymbol(int c, bool * satisfied, bool * unget) {
  if('0' <= c && c <= '9') return LEX_SYMBOL;
  if('a' <= c && c <= 'z') return LEX_SYMBOL;
  if('A' <= c && c <= 'Z') return LEX_SYMBOL;

  switch(c) {
    case '!':
    case '$':
    case '%':
    case '&':
    case '*':
    case '/':
    case ':':
    case '<':
    case '=':
    case '>':
    case '?':
    case '^':
    case '_':
    case '~':
    case '+':
    case '-':
    case '.':
    case '@':
    // this last one is a hax, I don't like it here, it permits cons#car
    // need to rename my symbols
    case '#':
      return LEX_SYMBOL;
    case '(':
    case ')':
    case '"':
    case ';':
    case ' ':
    case '\r':
    case '\t':
    case '\n':
      *satisfied = true;
      *unget = true;
      return LEX_SYMBOL;
    default:
      return LEX_ERROR;
  }
}

SYSV_CALL static int VLexString(int c, bool * satisfied, bool * unget) {
  switch(c) {
    case '"':
      *satisfied = true;
      return LEX_STRING;
    case '\\':
      return LEX_STRING_ESCAPE;
    default:
      return LEX_STRING;
  }
}

SYSV_CALL static int VLexStringEscape(int c, bool * satisfied, bool * unget) {
  return LEX_STRING;
}

SYSV_CALL static int VLexChar(int c, bool * satisfied, bool * unget) {
  if('a' <= c && c <= 'z') {
    return LEX_NAMED_CHAR;
  } else {
    *satisfied = true;
    return LEX_CHAR;
  }
}

SYSV_CALL static int VLexNamedChar(int c, bool *satisfied, bool *unget) {
  if('a' <= c && c <= 'z') return LEX_NAMED_CHAR;
  if('A' <= c && c <= 'F') return LEX_NAMED_CHAR;
  if('0' <= c && c <= '9') return LEX_NAMED_CHAR;
  switch(c) {
    case '(':
    case ')':
    case '"':
    case ';':
    case ' ':
    case '\r':
    case '\t':
    case '\n':
      *satisfied = true;
      *unget = true;
      return LEX_CHAR;
    default:
      *satisfied = true;
      return LEX_ERROR;
  }
}

SYSV_CALL static int VLex(VRuntime * runtime, VPort * port) {
  bool satisfied = false;
  bool unget = false;
  int c;

  int lex_state = LEX_START;

  size_t buf_cursor = 0;
  while(!satisfied && (c = port_fgetc(port)) >= 0) {
    switch(lex_state) {
      case LEX_START:
        lex_state = VLexStart(c, &satisfied, &unget);
        break;
      case LEX_COMMENT:
        lex_state = VLexComment(c, &satisfied, &unget);
        break;
      case LEX_SIGN:
        lex_state = VLexSign(c, &satisfied, &unget);
        break;
      case LEX_NUMBER:
        lex_state = VLexNumber(c, &satisfied, &unget);
        break;
      case LEX_DOUBLE:
        lex_state = VLexDouble(c, &satisfied, &unget);
        break;
      case LEX_SYMBOL:
        lex_state = VLexSymbol(c, &satisfied, &unget);
        break;
      case LEX_DOT:
        lex_state = VLexDot(c, &satisfied, &unget);
        break;
      case LEX_2DOT:
        lex_state = VLex2Dot(c, &satisfied, &unget);
        break;
      case LEX_UNQUOTE:
        lex_state = VLexUnquote(c, &satisfied, &unget);
        break;
      case LEX_SHARP:
        lex_state = VLexSharp(c, &satisfied, &unget);
        break;
      case LEX_SHARP_TF:
        lex_state = VLexSharpTF(c, &satisfied, &unget);
        break;
      case LEX_SHARP_WORD:
        lex_state = VLexSharpWord(c, &satisfied, &unget);
        break;
      case LEX_CHAR:
        lex_state = VLexChar(c, &satisfied, &unget);
        break;
      case LEX_STRING:
        lex_state = VLexString(c, &satisfied, &unget);
        break;
      case LEX_STRING_ESCAPE:
        lex_state = VLexStringEscape(c, &satisfied, &unget);
        break;
      case LEX_NAMED_CHAR:
        lex_state = VLexNamedChar(c, &satisfied, &unget);
        break;
      default:
        if(c == '\n' && port->line) {
          port->line++;
        }
        return LEX_ERROR;
    }
    if(lex_state != LEX_START && lex_state != LEX_COMMENT && !unget) {
      // account for null terminal at end
      if(buf_cursor+1 >= runtime->lex_size) {
        runtime->lex_size = runtime->lex_size ? 2*runtime->lex_size : 2;
        runtime->lex_buf = realloc(runtime->lex_buf, runtime->lex_size);
      }
      runtime->lex_buf[buf_cursor++] = c;
    }
    if(c == '\n' && !unget && port->line) {
      port->line++;
    }
  }
  if(unget) port_ungetc(c, port);
  switch(lex_state) {
    case LEX_START:
    case LEX_COMMENT:
      return LEX_EOF;
    default:
      runtime->lex_buf[buf_cursor++] = '\0';
      return lex_state;
  }
}


V_DECLARE_FUNC(VRead2, k, port);
static V_BEGIN_FUNC(VTreeify, "##sys.treeify", 4, k, _port, _root, _cur)
  // cur's first value is a pointer to the list we are CONSing to
  // for example if we're treeifying (a b c d e f) and we've alreay consed on f an de
  // then cur->first is (e f)
  VPort * port = VCheckedDecodePort2(runtime, _port, "read");
  VPair * root = VDecodePair(_root);
  VPair * cur = VDecodePair(_cur);
  char * alloced = (char*)&argc;
  while(VBits(root->rest) != VBits(VNULL)) {
    VPair * p = (VPair*)VDecodePointer(root->rest);

  /* ugly ass macro because we alloca */
#define VTreeifyBuffer(Prefix, prefix, ctype, Decode, MIN, MAX) { \
  /* we drop p, don't need it */ \
  /* but we do need to find cur's parent */ \
  VPair * parent = root; \
  VWORD curword = VEncodePair(cur); \
  while(VBits(parent->first) != VBits(curword)) { \
    parent = (VPair*)VDecodePointer(parent->first); \
  } \
  /* if we were doing ((* a b c) x y z) */ \
  /* where * indicates where we were consing to */ \
  /* now we are doing (* #(a b c) x y z) */ \
  VPair * new_cur = parent; \
  VPair * vecpair = (VPair*)VDecodePair(new_cur->first); \
  VWORD list = vecpair->first; \
  int len = 0; \
  VWORD iter = list; \
  while(VWordType(iter) == VPOINTER_PAIR) { \
    iter = VDecodePair(iter)->rest; \
    len++; \
  } \
  if(!VIsToken(iter, VTOK_NULL)) \
    VErrorC(runtime, "read: line ~d: vector literal contains dot syntax\n", port->line ? port->line : -1); \
  size_t size = sizeof(ctype[len+1]); \
  VBlob * blob = V_ALLOCA_BLOB2(alloced, runtime, size); \
  alloced = (char*)blob; \
  if(!blob) { \
    VTrackMutation(runtime, root, &root->rest, root->rest); \
    VGarbageCollect2Args((VFunc)VTreeify, runtime, statics, 4, argc, k, _port, VEncodePair(root), VEncodePair(cur)); \
  } \
  root->rest = p->rest; \
  cur = new_cur; \
  *blob = (VBlob){ .base = { .tag = VBUFFER }, .len = size }; \
  blob->buf[0] = BUF_ ## Prefix; \
  int i = 0; \
  iter = list; \
  while(VWordType(iter) == VPOINTER_PAIR) { \
    VPair * p = VDecodePair(iter); \
    double x = Decode(runtime, p->first, "read-" #prefix "vector"); \
    /* specifically chosen so NaNs can be used, as comparison with a NaN is always false */ \
    if(x < MIN || x > MAX) \
      VErrorC(runtime, "read-" #prefix "vector: line ~d: element ~d out of bounds", port->line ? port->line : -1, x); \
    ctype casted = x; \
    memcpy(&blob->buf[sizeof(ctype) * ++i], &casted, sizeof casted); \
    iter = p->rest; \
  } \
  assert(i == len); \
  VSetFirst(runtime, vecpair, VEncodePointer(blob, VPOINTER_OTHER)); \
} while(0)

    if(p->base.tag == VCONST_PAIR) {
      // open paren or close paren
      VWORD token = p->first;
      //if(VIsToken(token, VTOK_LEX_OPENPAREN))
      if(VWordType(token) == VIMM_INT) {
        root->rest = p->rest;
        // we drop p, don't need it
        // but we do need to find cur's parent
        VPair * parent = root;
        VWORD curword = VEncodePair(cur);
        while(VBits(parent->first) != VBits(curword)) {
          parent = (VPair*)VDecodePointer(parent->first);
        }
        // if we were doing ((* a b c) x y z)
        // where * indicates where we were consing to
        // now we are doing (* (a b c) x y z)
        cur = parent;
      } else if(VIsToken(token, VTOK_LEX_VECTOR)) {
        // we drop p, don't need it
        // but we do need to find cur's parent
        VPair * parent = root;
        VWORD curword = VEncodePair(cur);
        while(VBits(parent->first) != VBits(curword)) {
          parent = (VPair*)VDecodePointer(parent->first);
        }
        // if we were doing ((* a b c) x y z)
        // where * indicates where we were consing to
        // now we are doing (* #(a b c) x y z)
        VPair * new_cur = parent;

        VPair * vecpair = (VPair*)VDecodePair(new_cur->first);
        VWORD list = vecpair->first;

        int len = 0;
        VWORD iter = list;
        while(VWordType(iter) == VPOINTER_PAIR) {
          iter = VDecodePair(iter)->rest;
          len++;
        }
        if(!VIsToken(iter, VTOK_NULL))
          VErrorC(runtime, "read: line ~d: vector literal contains dot syntax\n", port->line ? port->line : -1);

        VVector * vec = V_ALLOCA_VECTOR2(alloced, runtime, len);
        alloced = (char*)vec;

        if(!vec) {
          VTrackMutation(runtime, root, &root->rest, root->rest);
          VGarbageCollect2Args((VFunc)VTreeify, runtime, statics, 4, argc, k, _port, VEncodePair(root), VEncodePair(cur));
        }
        root->rest = p->rest;
        cur = new_cur;

        *vec = (VVector){ .base = { .tag = VVECTOR }, .len = len };
        int i = 0;
        iter = list;
        while(VWordType(iter) == VPOINTER_PAIR) {
          VPair * p = VDecodePair(iter);
          // don't need to track because vec is brand new
          VTrackMutation(runtime, vec, &vec->arr[i], p->first);
          vec->arr[i++] = p->first;
          iter = p->rest;
        }
        assert(i == len);
        VSetFirst(runtime, vecpair, VEncodePointer(vec, VPOINTER_OTHER));

      }  else if(VIsToken(token, VTOK_LEX_F64VECTOR)) {
        VTreeifyBuffer(F64, f64, double, VCheckedDecodeNumber2, NAN, NAN);
      }  else if(VIsToken(token, VTOK_LEX_F32VECTOR)) {
        VTreeifyBuffer(F32, f32, float, VCheckedDecodeNumber2, NAN, NAN);
      }  else if(VIsToken(token, VTOK_LEX_S32VECTOR)) {
        VTreeifyBuffer(S32, s32, int, VCheckedDecodeInt2, INT32_MIN, INT32_MAX);
      }  else if(VIsToken(token, VTOK_LEX_U16VECTOR)) {
        VTreeifyBuffer(U16, u16, uint16_t, VCheckedDecodeInt2, 0, UINT16_MAX);
      }  else if(VIsToken(token, VTOK_LEX_S16VECTOR)) {
        VTreeifyBuffer(S16, s16, int16_t, VCheckedDecodeInt2, INT16_MIN, INT16_MAX);
      }  else if(VIsToken(token, VTOK_LEX_U8VECTOR)) {
        VTreeifyBuffer(U8, u8, uint8_t, VCheckedDecodeInt2, 0, UINT8_MAX);
      }  else if(VIsToken(token, VTOK_LEX_S8VECTOR)) {
        VTreeifyBuffer(S8, s8, int8_t, VCheckedDecodeInt2, INT8_MIN, INT8_MAX);

      } else if(VIsToken(token, VTOK_LEX_CLOSEPAREN)) {
        root->rest = p->rest;
        p->base = VMakeObject(VPAIR);
        p->first = VNULL;
        VSetRest(runtime, p, cur->first);
        //p->rest = cur->first;
        VSetFirst(runtime, cur, VEncodePair(p));
        cur->first = VEncodePair(p);

        // the secret suace, now we're incrementing on to the list in car(p), ie if close-paren was ( NULL . REM )
        // it's now ( NULL . RET), ie (() x y z) and further vals will insert into that null list ((a b c) x y z)
        cur = p;
      } else if(VIsToken(token, VTOK_LEX_DOT)) {
        root->rest = p->rest;

        VPair * curfirst = VDecodePair(cur->first);
        if(VWordType(cur->first) != VPOINTER_PAIR) VErrorC(runtime, "read: line ~d: improper dot syntax (... .)\n", port->line ? port->line : -1);
        if(VBits(curfirst->rest) != VBits(VNULL)) VErrorC(runtime, "read: line ~d: improper dot syntax: multiple elements trail '.'\n", port->line ? port->line : -1);
        // we've turned (x . ()) into x, so future conses will be a proper list
        VSetFirst(runtime, cur, curfirst->first);
        //cur->first = curfirst->first;

        // a side effect of the way we've parsed is (. x) is a synonym for x. interesting. that actually feels reasonable
      } else if(VIsToken(token, VTOK_LEX_COMMENT)) {
        root->rest = p->rest;

        // goal is to turn (#;x y) into (y)
        VPair * curfirst = VDecodePair(cur->first);
        if(VWordType(cur->first) != VPOINTER_PAIR) {
          VErrorC(runtime, "read: line ~d: list contains trailing code comment #;\n", port->line ? port->line : -1);
        }
        VSetFirst(runtime, cur, curfirst->rest);
        //cur->first = curfirst->rest;
      } else if(VWordType(token) == VPOINTER_PAIR) {
        root->rest = p->rest;

        VPair * curfirst = VDecodePair(cur->first);
        if(VWordType(cur->first) != VPOINTER_PAIR) {
          VErrorC(runtime, "read: line ~d: list contains trailing abbreviation, eg ' or `\n", port->line ? port->line : -1);
        }
        VWORD second_enc = token;
        VPair * second = VDecodePair(second_enc);

        // instead pass the pair and the symbol we need to allocate in first
        // an rcons with first having a pair with a symbol is an 'abbreviation' which
        // should be arranged to (abbr x)
        p->base = VMakeObject(VPAIR);
        VSetFirst(runtime, p, second->first);
        VSetRest(runtime, p, second_enc);
        //p->first = second->first;
        //p->rest = second_enc;

        VSetFirst(runtime, second, curfirst->first);
        //second->first = curfirst->first;
        second->rest = VNULL;
        VSetFirst(runtime, curfirst, VEncodePair(p));
        //curfirst->first = VEncodePair(p);


      } else {
        VErrorC(runtime, "read: line ~d: unknown token encountered. heap corruption?\n", port->line ? port->line : -1);
      }
    } else {
      // token
      root->rest = p->rest; // don't care, dropping root

      VSetRest(runtime, p, cur->first);
      VSetFirst(runtime, cur, VEncodePair(p));
      //p->rest = cur->first;
      //cur->first = VEncodePair(p);
    }
  }
  if(cur != root) VErrorC(runtime, "read: line ~d: mismatched parentheses: unterminated list\n", port->line ? port->line : -1);
  VWORD ret;
  if(VBits(root->first) == VBits(VNULL))
    ret = VVOID;
  else
    ret = VDecodePair(root->first)->first;


  if(VIsEq(ret, VVOID)) {
    // read a comment, try again
    V_CALL_FUNC(VRead2, statics, runtime, k, _port);
    //VRead2(runtime, statics, 2, k, _port);
  } else {
    V_CALL(k, runtime, ret);
  }
}

SYSV_CALL static VWORD ParseChar(VRuntime * runtime, char const * buf, int line) {
  // #\c
  // need to check that it didn't parse as #\, forbidden
  // FIXME don't do null terminated lexings I guess
  if(!buf[2]) VErrorC(runtime, "read: line ~d: forbidden char #\\\0. Use #\\null instead.\n", line ? line : -1);
  if(!buf[3]) return VEncodeChar(buf[2]);

  char const * name = buf+2;
  char ret = '\0';
  if(!strcmp(name, "alarm")) ret = '\a';
  else if(!strcmp(name, "backspace")) ret = '\b';
  else if(!strcmp(name, "delete")) ret = (char)127;
  else if(!strcmp(name, "escape")) ret = (char)27;
  else if(!strcmp(name, "newline")) ret = '\n';
  else if(!strcmp(name, "null")) ret = '\0';
  else if(!strcmp(name, "return")) ret = '\r';
  else if(!strcmp(name, "space")) ret = ' ';
  else if(!strcmp(name, "tab")) ret = '\t';
  else VErrorC(runtime, "read: line ~d: unknown named char ~z\n", line ? line : -1, name);

  return VEncodeChar(ret);
}

SYSV_CALL static char DecodeEscape(VRuntime * runtime, char c, int line) {
  switch(c) {
    case 'a': return '\a';
    case 'b': return '\b';
    case 't': return '\t';
    case 'n': return '\n';
    case 'r': return '\r';
    case '"': return '"';
    case '\\': return '\\';
    case '|': return '|';
    default:
      VErrorC(runtime, "read: line ~d: unkown escape in string \\~c\n", line ? line : -1, c);
      return '\0';
  }
}

SYSV_CALL static char * ParseString(VRuntime * runtime, char * buf, int line) {
  buf = buf+1;
  char const * read = buf;
  char * write = buf;
  char c;
  while((c = *read++)) {
    switch(c) {
      case '"':
        *write++ = '\0';
        return buf;
      case '\\':
        *write++ = DecodeEscape(runtime, *read++, line);
        break;
      default:
        *write++ = c;
    }
  }
  VErrorC(runtime, "read: line ~d: string ~z is not terminated with a \"\n", line ? line : -1, buf);
  return NULL;
}

// ============================================================================

static V_BEGIN_FUNC(VReadIter2, "##sys.read-iter", 6, k, _port, _depth, _read_more_cause, _read_more, _root);
  VPort * port = VCheckedDecodePort2(runtime, _port, "read");
  if(!(port->flags & PFLAG_READ)) VErrorC(runtime, "read: trying to read from port with closed input\n");
  int depth = VDecodeInt(_depth);
  int read_more_cause = VDecodeInt(_read_more_cause);
  bool read_more = VDecodeBool(_read_more);
  VPair * const root = VDecodePair(_root);

  void * alloced = &depth;
#define myalloca(x) (alloced = alloca(x))
  VWORD elem;
  do {
    if(VStackOverflowNoInline2(runtime, alloced)) {
      VTrackMutation(runtime, root, &root->rest, root->rest);
      VGarbageCollect2Args((VFunc)VReadIter2, runtime, statics, 6, argc, k, _port, VEncodeInt(depth), VEncodeInt(read_more_cause), VEncodeBool(read_more), _root);
    }

    int token = VLex(runtime, port);
    if(token != LEX_EOF)
      read_more = false;
    switch(token)
    {
      case LEX_OPEN_PAREN:
      {
        VPair * pair = myalloca(sizeof(VPair));
        // using CONST_PAIR as a marker to indicate beginning or end of a list
        // a const pair with an line number in the CAR indicates a open paren, ie beginning
        *pair = VMakePair(VEncodeInt(port->line), root->rest);
        pair->base = VMakeObject(VCONST_PAIR);
        root->rest = VEncodePair(pair);
        depth++;
        break;
      }
      case LEX_CLOSE_PAREN:
      {
        if(depth == 0) VErrorC(runtime, "read: line ~d: stray ')'\n", port->line ? port->line : -1);
        VPair * pair = myalloca(sizeof(VPair));
        // using CONST_PAIR as a marker to indicate beginning of a new list
        // a const pair with VTOK_LEX_CLOSEPAREN in the CAR indicates the end of a list, the contents of car indicate the tail
        // ie null for a proper list or nonnull for a dotted list
        *pair = VMakePair(VEncodeToken(VTOK_LEX_CLOSEPAREN), root->rest);
        pair->base = VMakeObject(VCONST_PAIR);
        root->rest = VEncodePair(pair);
        depth--;
        break;
      }
      case LEX_DOT:
      {
        if(depth == 0) VErrorC(runtime, "read: line ~d: stray '.'\n", port->line ? port->line : -1);
        VPair * pair = myalloca(sizeof(VPair));
        *pair = VMakePair(VEncodeToken(VTOK_LEX_DOT), root->rest);
        pair->base = VMakeObject(VCONST_PAIR);
        root->rest = VEncodePair(pair);
        break;
      }
      case LEX_CODE_COMMENT:
      {
        VPair * pair = myalloca(sizeof(VPair));
        *pair = VMakePair(VEncodeToken(VTOK_LEX_COMMENT), root->rest);
        pair->base = VMakeObject(VCONST_PAIR);
        root->rest = VEncodePair(pair);
        read_more_cause = port->line ? port->line : -1;
        read_more = true;
        break;
      }
      case LEX_VECTOR:
      {
        VPair * pair = myalloca(sizeof(VPair));
        *pair = VMakePair(VEncodeToken(VTOK_LEX_VECTOR), root->rest);
        pair->base = VMakeObject(VCONST_PAIR);
        root->rest = VEncodePair(pair);
        depth++;
        break;
        break;
      }
      case LEX_QUOTE:
      case LEX_QUASIQUOTE:
      case LEX_UNQUOTE:
      case LEX_UNQUOTE_SPLICING:
      {
        char * str = NULL;
        switch(token) {
          case LEX_QUOTE:
            str = "quote";
            break;
          case LEX_QUASIQUOTE:
            str = "quasiquote";
            break;
          case LEX_UNQUOTE:
            str = "unquote";
            break;
          case LEX_UNQUOTE_SPLICING:
            str = "unquote-splicing";
            break;
        }
        size_t len = strlen(str)+1;
        VBlob * sym = myalloca(sizeof(VBlob)+len);
        VFillBlob(sym, VSYMBOL, len, str);
        VPair * pair = myalloca(sizeof(VPair)), *second = myalloca(sizeof(VPair));
        *second = VMakePair(VEncodePointer(sym, VPOINTER_OTHER), VNULL);
        *pair = VMakePair(VEncodePair(second), root->rest);
        pair->base = VMakeObject(VCONST_PAIR);
        root->rest = VEncodePair(pair);
        read_more_cause = port->line ? port->line : -1;
        read_more = true;
        break;
      }
      /*
      case LEX_TRUE:
      case LEX_FALSE:
      {
        elem = token == LEX_TRUE ? VTRUE : VFALSE;

        VPair * pair = myalloca(sizeof(VPair));
        *pair = VMakePair(elem, root->rest);
        root->rest = VEncodePair(pair);
        break;
      }
      */
      case LEX_SHARP_WORD:
      {
        bool is_vector = false;
        bool opens_list = false;
        elem = VVOID;
        if(!strcmp(runtime->lex_buf, "#t"))
          elem = VTRUE;
        else if(!strcmp(runtime->lex_buf, "#f")) 
          elem = VFALSE;
        else if(!strcmp(runtime->lex_buf, "#void"))
          elem = VVOID;
        else if(!strcmp(runtime->lex_buf, "#nullptr"))
          elem = VNULLPTR;
        else if(!strcmp(runtime->lex_buf, "#f("))  {
          opens_list = true;
          elem = VFALSE;
        }
        else if(!strcmp(runtime->lex_buf, "#void(")) {
          opens_list = true;
          elem = VVOID;
        }
        else if(!strcmp(runtime->lex_buf, "#nullptr(")) {
          opens_list = true;
          elem = VNULLPTR;
        }
        else if(!strcmp(runtime->lex_buf, "#u8(")) {
          is_vector = true;
          elem = VEncodeToken(VTOK_LEX_U8VECTOR);
        }
        else if(!strcmp(runtime->lex_buf, "#s8(")) {
          is_vector = true;
          elem = VEncodeToken(VTOK_LEX_S8VECTOR);
        }
        else if(!strcmp(runtime->lex_buf, "#u16(")) {
          is_vector = true;
          elem = VEncodeToken(VTOK_LEX_U16VECTOR);
        }
        else if(!strcmp(runtime->lex_buf, "#s16(")) {
          is_vector = true;
          elem = VEncodeToken(VTOK_LEX_S16VECTOR);
        }
        else if(!strcmp(runtime->lex_buf, "#s32(")) {
          is_vector = true;
          elem = VEncodeToken(VTOK_LEX_S32VECTOR);
        }
        else if(!strcmp(runtime->lex_buf, "#f32(")) {
          is_vector = true;
          elem = VEncodeToken(VTOK_LEX_F32VECTOR);
        }
        else if(!strcmp(runtime->lex_buf, "#f64(")) {
          is_vector = true;
          elem = VEncodeToken(VTOK_LEX_F64VECTOR);
        }

        else if(!strcmp(runtime->lex_buf, "#s64(") ||
                !strcmp(runtime->lex_buf, "#u64(") ||
                !strcmp(runtime->lex_buf, "#u32(")) {
          VErrorC(runtime, "read: line ~d: unsupported buffer type: ~z\n", port->line ? port->line : -1, runtime->lex_buf);
        }
        else {
          VErrorC(runtime, "read: line ~d: invalid sharpsign syntax: ~z\n", port->line ? port->line : -1, runtime->lex_buf);
        }

        if(!is_vector) {
          VPair * pair = myalloca(sizeof(VPair));
          *pair = VMakePair(elem, root->rest);
          root->rest = VEncodePair(pair);
        }
        if(opens_list) {
          elem = VEncodeInt(port->line);
        }
        if(opens_list || is_vector) {
          VPair * pair = myalloca(sizeof(VPair));
          // using CONST_PAIR as a marker to indicate beginning or end of a list
          *pair = VMakePair(elem, root->rest);
          pair->base = VMakeObject(VCONST_PAIR);
          root->rest = VEncodePair(pair);
          depth++;
        }

        break;
      }
      case LEX_CHAR:
      {
        elem = ParseChar(runtime, runtime->lex_buf, port->line);

        VPair * pair = myalloca(sizeof(VPair));
        *pair = VMakePair(elem, root->rest);
        root->rest = VEncodePair(pair);
        break;
      }
      case LEX_NUMBER:
      {
        errno = 0;
        char * end;
        double d = strtod(runtime->lex_buf, &end);
        if(errno || runtime->lex_buf == end)
        {
          VErrorC(runtime, "read: line ~d: failed to parse as number: ~z\n", port->line ? port->line : -1, runtime->lex_buf);
          depth = 0;
          break;
        }
        if(ceil(d) == d && INT32_MIN <= d && d <= INT32_MAX)
        {
          elem = VEncodeInt((int)d);
        }
        else
        {
          elem = VEncodeNumber(d);
        }

        VPair * pair = myalloca(sizeof(VPair));
        *pair = VMakePair(elem, root->rest);
        root->rest = VEncodePair(pair);
        break;
      }
      case LEX_DOUBLE:
      {
        errno = 0;
        char * end;
        double d = strtod(runtime->lex_buf, &end);
        if(errno || runtime->lex_buf == end)
        {
          VErrorC(runtime, "read: line ~d: failed to parse as number: ~z\n", port->line ? port->line : -1, runtime->lex_buf);
          depth = 0;
          break;
        }
        elem = VEncodeNumber(d);

        VPair * pair = myalloca(sizeof(VPair));
        *pair = VMakePair(elem, root->rest);
        root->rest = VEncodePair(pair);
        break;
      }
      case LEX_STRING:
      {
        char * str = ParseString(runtime, runtime->lex_buf, port->line);

        size_t len = strlen(str) + 1;
        VBlob * blob = myalloca(sizeof(VBlob) + len);
        VFillBlob(blob, VSTRING, len, str);
        elem = VEncodePointer(blob, VPOINTER_OTHER);

        VPair * pair = myalloca(sizeof(VPair));
        *pair = VMakePair(elem, root->rest);
        root->rest = VEncodePair(pair);
        break;
      }
      case LEX_SYMBOL:
      {
        size_t len = strlen(runtime->lex_buf) + 1;
        VBlob * blob = myalloca(sizeof(VBlob) + len);
        VFillBlob(blob, VSYMBOL, len, runtime->lex_buf);
        elem = VEncodePointer(blob, VPOINTER_OTHER);

        VPair * pair = myalloca(sizeof(VPair));
        *pair = VMakePair(elem, root->rest);
        root->rest = VEncodePair(pair);
        break;
      }
      case LEX_EOF:
      {
        if(read_more)
          VErrorC(runtime, "read: line ~d: missing expr after prefix such as ' or #;", read_more_cause);
        if(depth != 0)
        {
          int d2 = 0;
          int line = -1;
          VPair * p = NULL;
          if(VWordType(root->rest) == VPOINTER_PAIR)
            p = VDecodePair(root->rest);
          while(p) {
            if(p->base.tag == VCONST_PAIR) {
              if(VWordType(p->first) == VIMM_INT) {
                fprintf(stderr, "openparen!\n");
                if(d2) {
                  d2--;
                } else {
                  line = VDecodeInt(p->first);
                  break;
                }
              } else if(VIsToken(p->first, VTOK_LEX_CLOSEPAREN)) {
                fprintf(stderr, "closeparen!\n");
                d2++;
              } else if(VIsToken(p->first, VTOK_LEX_COMMENT) ||
                        VIsToken(p->first, VTOK_LEX_DOT) ||
                        VWordType(p->first) == VPOINTER_PAIR) {
                /* ignored, doesn't change () nesting */
              } else if(VWordType(p->first) == VIMM_TOK) {
                // non ( opener, ie #( or #f32(
                d2--;
              }
            }
            if(VWordType(p->rest) == VPOINTER_PAIR) {
              p = VDecodePair(p->rest);
            } else {
              p = NULL;
            }
          }
          if(p && VWordType(p->first) == VIMM_INT) {
            line = VDecodeInt(p->first);
          }
          if(line != -1)
            VErrorC(runtime, "read: missing close paren. incomplete list beginning at line ~d", line);
          else
            VErrorC(runtime, "read: missing close paren");
        }
        VPair * pair = myalloca(sizeof(VPair));
        *pair = VMakePair(VEOF, VNULL);
        *root = VMakePair(VNULL, VEncodePair(pair));
        break;
      }
      /* FALLTHRU */
      default:
      case LEX_ERROR:
      {
        VErrorC(runtime, "read: line ~d: failed to lex: ~z", port->line ? port->line : -1, runtime->lex_buf);
        depth = 0;
        break;
      }
    }
  } while(depth > 0 || read_more);
#if 0
  VWORD ret = V_CALL_FUNC(VTreeify, NULL, runtime, _k, VEncodePair(root));
  if(VIsEq(ret, VVOID)) {
    // read a comment, try again
    VRead2(runtime, statics, 2, k, _port);
  } else {
    V_CALL(k, runtime, ret);
  }
#else
  V_CALL_FUNC(VTreeify, NULL, runtime, k, _port, VEncodePair(root), VEncodePair(root));
#endif
}

V_BEGIN_FUNC(VRead2, "read", 2, k, port)
  int depth = 0;
  bool read_more = false;
  VPair root = VMakePair(VNULL, VNULL);
  V_CALL_FUNC(VReadIter2, NULL, runtime, k, port, VEncodeInt(depth), VEncodeInt(0), VEncodeBool(read_more), VEncodePair(&root));
}
