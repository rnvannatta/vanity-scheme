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

#include "vscheme/vruntime.h"

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
  LEX_CODE_COMMENT,
  LEX_QUOTE,
  LEX_QUASIQUOTE,
  LEX_UNQUOTE,
  LEX_UNQUOTE_SPLICING,
  NUM_LEX_T };


// TODO in lexer:
//   peculiar identifiers - still have ... left
//   quotation
//   booleans
//   strings
//   fancy numbers

//   characters
//   vectors

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
    case 't':
      *satisfied = true;
      return LEX_TRUE;
    case 'f':
      *satisfied = true;
      return LEX_FALSE;
    case ';':
      *satisfied = true;
      return LEX_CODE_COMMENT;
    case '\\':
      return LEX_CHAR;
    case '#':
      return LEX_SYMBOL;
    default:
      *satisfied = true;
      return LEX_ERROR;
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

SYSV_CALL static int VLex(VRuntime * runtime, FILE * f) {
  bool satisfied = false;
  bool unget = false;
  int c;

  int lex_state = LEX_START;

  size_t buf_cursor = 0;
  while(!satisfied && (c = getc(f)) != EOF) {
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
  }
  if(unget) ungetc(c, f);
  runtime->lex_buf[buf_cursor++] = '\0';
  switch(lex_state) {
    case LEX_START:
    case LEX_COMMENT:
      return LEX_EOF;
    default:
      return lex_state;
  }
}

SYSV_CALL static VWORD VTreeify(VRuntime * runtime, VPair * root) {
  VPair * cur = root;
  while(VBits(root->rest) != VBits(VNULL)) {
    VPair * p = (VPair*)VDecodePointer(root->rest);
    if(p->tag == VCONST_PAIR) {
      // open paren or close paren
      if(VIsToken(p->first, VTOK_LEX_OPENPAREN)) {
        // open paren

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
      } else if(VIsToken(p->first, VTOK_LEX_CLOSEPAREN)) {
        // close paren
        root->rest = p->rest;
        p->tag = VPAIR;
        p->first = VNULL;
        VSetRest(runtime, p, cur->first);
        //p->rest = cur->first;
        VSetFirst(runtime, cur, VEncodePair(p));
        cur->first = VEncodePair(p);

        // the secret suace, now we're incrementing on to the list in car(p), ie if close-paren was ( NULL . REM )
        // it's now ( NULL . RET), ie (() x y z) and further vals will insert into that null list ((a b c) x y z)
        cur = p;
      } else if(VIsToken(p->first, VTOK_LEX_DOT)) {
        root->rest = p->rest;

        VPair * curfirst = VDecodePair(cur->first);
        if(VWordType(cur->first) != VPOINTER_PAIR) VError("read: improper dot syntax (... .)\n");
        if(VBits(curfirst->rest) != VBits(VNULL)) VError("read: improper dot syntax: multiple elements trail '.'\n", cur->first);
        // we've turned (x . ()) into x, so future conses will be a proper list
        VSetFirst(runtime, cur, curfirst->first);
        //cur->first = curfirst->first;

        // a side effect of the way we've parsed is (. x) is a synonym for x. interesting. that actually feels reasonable
      } else if(VIsToken(p->first, VTOK_LEX_COMMENT)) {
        root->rest = p->rest;

        // goal is to turn (#;x y) into (y)
        VPair * curfirst = VDecodePair(cur->first);
        if(VWordType(cur->first) != VPOINTER_PAIR) {
          if(VBits(root->rest) == VBits(VNULL)) {
            VError("read: trailing code comment (... #;) or #;EOF\n");
          }
        }
        VSetFirst(runtime, cur, curfirst->rest);
        //cur->first = curfirst->rest;
      } else if(VWordType(p->first) == VPOINTER_PAIR) {
        root->rest = p->rest;

        VPair * curfirst = VDecodePair(cur->first);
        if(VWordType(cur->first) != VPOINTER_PAIR) {
          if(VBits(root->rest) == VBits(VNULL)) {
            VError("read: trailing abbreviation (... ') or 'EOF\n");
          }
        }
        VWORD second_enc = p->first;
        VPair * second = VDecodePair(second_enc);

        // instead pass the pair and the symbol we need to allocate in first
        // an rcons with first having a pair with a symbol is an 'abbreviation' which
        // should be arranged to (abbr x)
        p->tag = VPAIR;
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
        VError("read: unknown token encountered. heap corruption?\n");
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
  if(cur != root) VError("read: mismatched parentheses: unterminated list\n");
  if(VBits(root->first) == VBits(VNULL))
    return VVOID;
  else
    return VDecodePair(root->first)->first;
}

SYSV_CALL static VWORD ParseChar(char const * buf) {
  // #\c
  // need to check that it didn't parse as #\, forbidden
  // FIXME don't do null terminated lexings I guess
  if(!buf[2]) VError("read: forbidden char #\\\0. Use #\\null instead.\n");
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
  else VError("read: unknown named char ~z\n", name);

  return VEncodeChar(ret);
}

SYSV_CALL static char DecodeEscape(char c) {
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
      VError("read: unkown escape in string \\~c\n", c);
      return '\0';
  }
}

SYSV_CALL static char * ParseString(char * buf) {
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
        *write++ = DecodeEscape(*read++);
        break;
      default:
        *write++ = c;
    }
  }
  VError("read: string ~z is not terminated with a \"\n", buf);
  return NULL;
}

// ============================================================================

SYSV_CALL void VRead2(V_CORE_ARGS, VWORD k, VWORD port);
SYSV_CALL void VReadIter2(V_CORE_ARGS, VWORD k, VWORD _port, VWORD _depth, VWORD _read_more, VWORD _root) {
  V_ARG_CHECK2("##sys.read-iter", 5, argc);

  VPort * port = VCheckedDecodePort(_port, "read");
  FILE * f = port->stream;
  if(!f) VError("read: trying to read from closed port\n");
  if(!(port->flags & PFLAG_READ)) VError("read: trying to read from writeonly port\n");
  int depth = VDecodeInt(_depth);
  bool read_more = VDecodeBool(_read_more);
  VPair * const root = VDecodePair(_root);

  void * alloced = &depth;
#define myalloca(x) (alloced = alloca(x))
  VWORD elem;
  do {
    if(VStackOverflow(runtime->VStackStart, runtime->VStackLen, alloced)) {
      fprintf(stderr, "gc during read\n");
      VTrackMutation(runtime, root, &root->rest, root->rest);
      VGarbageCollect2Args((VFunc)VReadIter2, runtime, statics, 5, argc, k, _port, VEncodeInt(depth), VEncodeBool(read_more), _root);
    }

    int token = VLex(runtime, f);
    if(token != LEX_EOF)
      read_more = false;
    switch(token)
    {
      case LEX_OPEN_PAREN:
      {
        VPair * pair = myalloca(sizeof(VPair));
        // using CONST_PAIR as a marker to indicate beginning or end of a list
        // a const pair with a VTOK_LEX_OPENPAREN in the CAR indicates a open paren, ie beginning
        *pair = VMakePair(VEncodeToken(VTOK_LEX_OPENPAREN), root->rest);
        pair->tag = VCONST_PAIR;
        root->rest = VEncodePair(pair);
        depth++;
        break;
      }
      case LEX_CLOSE_PAREN:
      {
        if(depth == 0) VError("read: stray ')'\n");
        VPair * pair = myalloca(sizeof(VPair));
        // using CONST_PAIR as a marker to indicate beginning of a new list
        // a const pair with not VTOK_LEX_OPENPAREN in the CAR indicates the end of a list, the contents of car indicate the tail
        // ie null for a proper list or nonnull for a dotted list
        *pair = VMakePair(VEncodeToken(VTOK_LEX_CLOSEPAREN), root->rest);
        pair->tag = VCONST_PAIR;
        root->rest = VEncodePair(pair);
        depth--;
        break;
      }
      case LEX_DOT:
      {
        if(depth == 0) VError("read: stray '.'\n");
        VPair * pair = myalloca(sizeof(VPair));
        *pair = VMakePair(VEncodeToken(VTOK_LEX_DOT), root->rest);
        pair->tag = VCONST_PAIR;
        root->rest = VEncodePair(pair);
        break;
      }
      case LEX_CODE_COMMENT:
      {
        VPair * pair = myalloca(sizeof(VPair));
        *pair = VMakePair(VEncodeToken(VTOK_LEX_COMMENT), root->rest);
        pair->tag = VCONST_PAIR;
        root->rest = VEncodePair(pair);
        read_more = true;
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
        pair->tag = VCONST_PAIR;
        root->rest = VEncodePair(pair);
        read_more = true;
        break;
      }
      case LEX_TRUE:
      case LEX_FALSE:
      {
        elem = token == LEX_TRUE ? VTRUE : VFALSE;

        VPair * pair = myalloca(sizeof(VPair));
        *pair = VMakePair(elem, root->rest);
        root->rest = VEncodePair(pair);
        break;
      }
      case LEX_CHAR:
      {
        elem = ParseChar(runtime->lex_buf);

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
          VError("read: failed to parse as number: ~z\n", runtime->lex_buf);
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
          VError("read: failed to parse as number: ~z\n", runtime->lex_buf);
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
        char * str = ParseString(runtime->lex_buf);

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
          VError("read: missing expr after prefix such as ' or #;\n");
        if(depth != 0)
          VError("read: missing close paren\n");
        VPair * pair = myalloca(sizeof(VPair));
        *pair = VMakePair(VEOF, VNULL);
        *root = VMakePair(VNULL, VEncodePair(pair));
        break;
      }
      /* FALLTHRU */
      default:
      case LEX_ERROR:
      {
        VError("read: failed to lex: ~z\n", runtime->lex_buf);
        depth = 0;
        break;
      }
    }
  } while(depth > 0 || read_more);
  VWORD ret = VTreeify(runtime, root);
  if(VIsEq(ret, VVOID)) {
    // read a comment, try again
    VRead2(runtime, statics, 2, k, _port);
  } else {
    V_CALL(k, runtime, ret);
  }
}

SYSV_CALL void VRead2(V_CORE_ARGS, VWORD k, VWORD port) {
  V_ARG_CHECK2("read", 2, argc);
  int depth = 0;
  bool read_more = false;
  VPair root = VMakePair(VNULL, VNULL);
  V_CALL_FUNC(VReadIter2, NULL, runtime, k, port, VEncodeInt(depth), VEncodeBool(read_more), VEncodePair(&root));
}
