#include "vscheme/vruntime.h"
#include "vscheme/vinlines.h"
#include <xmmintrin.h>
#include "wacky_private.h"

#ifdef _WIN64
#include <libloaderapi.h>
#include <shlwapi.h>

void VExePathImpl(V_CORE_ARGS, VWORD k) {
  V_ARG_CHECK3(runtime, "exe-path", 1, argc);

  VBlob * path = V_ALLOCA_BLOB(MAX_PATH);
  path->base = VMakeSmallObject(VSTRING);
  GetModuleFileNameA(NULL, path->buf, MAX_PATH);
  PathRemoveFileSpecA(path->buf);
  path->len = strlen(path->buf)+1;

  V_CALL(k, runtime, VEncodePointer(path, VPOINTER_OTHER));
}
void (*VExePath)(V_CORE_ARGS, VWORD k) = VExePathImpl;

#endif

#ifdef __linux__

void VApplyForeignFunctionImpl(V_CORE_ARGS, VWORD k, VWORD func, VWORD return_type, VWORD arg_types, VWORD args) {
  void * funptr = VCheckedDecodeForeignPointer2(runtime, func, "ffi-call");

  VWORD lst = arg_types;
  int nargs = 0;
  while(!VIsEq(lst, VNULL)) {
    lst = VInlineCdr2(runtime, lst);
    nargs++;
  }
  lst = arg_types;

  size_t stacklen = sizeof(uint64_t[nargs+1]);
  VFuncallRegisters * regs = alloca(sizeof(VFuncallRegisters) + stacklen);
  regs->funptr = funptr;

  char * sp = regs->stack;

  int cur_gpr = 0;
  int cur_fpr = 0;
  while(!VIsEq(arg_types, VNULL)) {
    VPair * typenode = VDecodePair(arg_types);
    VBlob * type = VCheckedDecodeBlob2(runtime, typenode->first, "ffi-call");

    VPair * argnode = VDecodePair(args);
    VWORD arg = argnode->first;
    uint64_t reg = 0;
    if(!strcmp(type->buf, "float") || !strcmp(type->buf, "double")) {
      double d = VCheckedDecodeNumber2(runtime, arg, "ffi-call");
      float f = d;
      if(cur_fpr < 8) {
        __m128 fpreg;
        if(!strcmp(type->buf, "float")) {
          fpreg = _mm_set_ss(f);
        } else {
          fpreg = _mm_castpd_ps(_mm_set_sd(d));
        }
        regs->fprs[cur_fpr++] = fpreg;
      } else {
        memset(sp, 0, 8);
        if(!strcmp(type->buf, "float")) {
          memcpy(sp, &f, sizeof f);
        } else {
          memcpy(sp, &d, sizeof d);
        }
        sp+=8;
      }
    } else {
      if(!strcmp(type->buf, "_Bool")) {
        reg = (bool)VCheckedDecodeBool2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "char")) {
        reg = (char)VCheckedDecodeChar2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "signed-char")) {
        reg = (signed char)VCheckedDecodeSignedChar2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "unsigned-char")) {
        reg = (unsigned char)VCheckedDecodeUnsignedChar2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "short")) {
        reg = (short)VCheckedDecodeShort2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "unsigned-short")) {
        reg = (unsigned short)VCheckedDecodeUnsignedShort2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "int")) {
        reg = (int)VCheckedDecodeInt2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "unsigned-int")) {
        reg = (unsigned int)VCheckedDecodeInt2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "long")) {
        reg = (long)VCheckedDecodeInt2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "unsigned-long")) {
        reg = (unsigned long)VCheckedDecodeInt2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "long-long")) {
        reg = (long long)VCheckedDecodeInt2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "unsigned-long-long")) {
        reg = (unsigned long long)VCheckedDecodeInt2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "void-pointer")) {
        reg = (uintptr_t)VCheckedDecodeVoidPtr2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "const-void-pointer")) {
        reg = (uintptr_t)VCheckedDecodeConstVoidPtr2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "c-string")) {
        reg = (uintptr_t)VCheckedDecodeCString2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "const-c-string")) {
        reg = (uintptr_t)VCheckedDecodeConstCString2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "VWORD")) {
      } else {
        VErrorC(runtime, "ffi-call: Unknown type: ~S", typenode->first);
      }
      if(cur_gpr < 6) {
        regs->gprs[cur_gpr++] = reg;
      } else {
        memcpy(sp, &reg, sizeof reg);
        sp+=8;
      }
    }

    arg_types = typenode->rest;
    args = argnode->rest;
  }

  stacklen = sp - regs->stack;
  int misalignment = stacklen & 15;
  if(misalignment)
    stacklen += 16 - misalignment;
  regs->stacklen = stacklen;
  regs->rax = cur_fpr;

  VFfiCallImpl(regs);

  VWORD ret = VVOID;
  VBlob * type = VCheckedDecodeBlob2(runtime, return_type, "ffi-call");
  // no long yet
  // no unsigned long yet
  // no long long yet
  // no unsigned long long yet
  // no c string yet
  if(!strcmp(type->buf, "void")) {
    ret = VVOID;
  } else if(!strcmp(type->buf, "float")) {
    ret = VEncodeDouble(_mm_cvtss_f32(regs->xmm0));
  } else if(!strcmp(type->buf, "double")) {
    ret = VEncodeDouble(_mm_cvtsd_f64(_mm_castps_pd(regs->xmm0)));
  } else if(!strcmp(type->buf, "_Bool")) {
    ret = VEncodeBool(regs->rax & 1);
  } else if(!strcmp(type->buf, "char")) {
    ret = VEncodeChar(regs->rax);
  } else if(!strcmp(type->buf, "signed-char")) {
    ret = VEncodeInt(regs->rax);
  } else if(!strcmp(type->buf, "unsigned-char")) {
    ret = VEncodeInt(regs->rax);
  } else if(!strcmp(type->buf, "short")) {
    ret = VEncodeInt(regs->rax);
  } else if(!strcmp(type->buf, "unsigned-short")) {
    ret = VEncodeInt(regs->rax);
  } else if(!strcmp(type->buf, "int")) {
    ret = VEncodeInt(regs->rax);
  } else if(!strcmp(type->buf, "unsigned-int")) {
    ret = VEncodeInt(regs->rax);
  } else if(!strcmp(type->buf, "void-pointer")) {
    ret = VEncodeForeignPointer((void*)(uintptr_t)regs->rax);
  } else if(!strcmp(type->buf, "const-void-pointer")) {
    ret = VEncodeForeignPointer((void*)(uintptr_t)regs->rax);
  } else if(!strcmp(type->buf, "VWORD")) {
    ret = VWord(regs->rax);
  } else {
    VErrorC(runtime, "ffi-call: Unknown type: ~S", return_type);
  }
  V_CALL(k, runtime, ret);
}
VFunc VApplyForeignFunction = (VFunc)VApplyForeignFunctionImpl;
#endif
#ifdef _WIN64
void VApplyForeignFunctionImpl(V_CORE_ARGS, VWORD k, VWORD func, VWORD return_type, VWORD arg_types, VWORD args) {
  void * funptr = VCheckedDecodeForeignPointer2(runtime, func, "ffi-call");

  VWORD lst = arg_types;
  int nargs = 0;
  while(!VIsEq(lst, VNULL)) {
    lst = VInlineCdr2(runtime, lst);
    nargs++;
  }
  lst = arg_types;

  size_t stacklen = sizeof(uint64_t[nargs+1]);
  VFuncallRegisters * regs = alloca(sizeof(VFuncallRegisters) + stacklen);
  regs->funptr = funptr;

  char * sp = regs->stack;

  int cur_reg = 0;
  while(!VIsEq(arg_types, VNULL)) {
    VPair * typenode = VDecodePair(arg_types);
    VBlob * type = VCheckedDecodeBlob2(runtime, typenode->first, "ffi-call");

    VPair * argnode = VDecodePair(args);
    VWORD arg = argnode->first;
    uint64_t reg = 0;
    if(!strcmp(type->buf, "float") || !strcmp(type->buf, "double")) {
      double d = VCheckedDecodeNumber2(runtime, arg, "ffi-call");
      float f = d;
      if(cur_reg < 4) {
        __m128 fpreg;
        if(!strcmp(type->buf, "float")) {
          fpreg = _mm_set_ss(f);
        } else {
          fpreg = _mm_castpd_ps(_mm_set_sd(d));
        }
        regs->fprs[cur_reg] = fpreg;
        memcpy(&regs->gprs[cur_reg++], &fpreg, sizeof reg);
      } else {
        memset(sp, 0, 8);
        if(!strcmp(type->buf, "float")) {
          memcpy(sp, &f, sizeof f);
        } else {
          memcpy(sp, &d, sizeof d);
        }
        sp+=8;
      }
    } else {
      if(!strcmp(type->buf, "_Bool")) {
        reg = (bool)VCheckedDecodeBool2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "char")) {
        reg = (char)VCheckedDecodeChar2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "signed-char")) {
        reg = (signed char)VCheckedDecodeSignedChar2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "unsigned-char")) {
        reg = (unsigned char)VCheckedDecodeUnsignedChar2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "short")) {
        reg = (short)VCheckedDecodeShort2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "unsigned-short")) {
        reg = (unsigned short)VCheckedDecodeUnsignedShort2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "int")) {
        reg = (int)VCheckedDecodeInt2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "unsigned-int")) {
        reg = (unsigned int)VCheckedDecodeInt2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "long")) {
        reg = (long)VCheckedDecodeInt2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "unsigned-long")) {
        reg = (unsigned long)VCheckedDecodeInt2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "long-long")) {
        reg = (long long)VCheckedDecodeInt2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "unsigned-long-long")) {
        reg = (unsigned long long)VCheckedDecodeInt2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "void-pointer")) {
        reg = (uintptr_t)VCheckedDecodeVoidPtr2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "const-void-pointer")) {
        reg = (uintptr_t)VCheckedDecodeConstVoidPtr2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "c-string")) {
        reg = (uintptr_t)VCheckedDecodeCString2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "const-c-string")) {
        reg = (uintptr_t)VCheckedDecodeConstCString2(runtime, arg, "ffi-call");
      } else if(!strcmp(type->buf, "VWORD")) {
      } else {
        VErrorC(runtime, "ffi-call: Unknown type: ~S", typenode->first);
      }
      if(cur_reg < 4) {
        regs->gprs[cur_reg++] = reg;
      } else {
        memcpy(sp, &reg, sizeof reg);
        sp+=8;
      }
    }

    arg_types = typenode->rest;
    args = argnode->rest;
  }

  stacklen = sp - regs->stack;
  int misalignment = stacklen & 15;
  if(misalignment)
    stacklen += 16 - misalignment;
  regs->stacklen = stacklen;
  regs->rax = 0;

  VFfiCallImpl(regs);

  VWORD ret = VVOID;
  VBlob * type = VCheckedDecodeBlob2(runtime, return_type, "ffi-call");
  // no long yet
  // no unsigned long yet
  // no long long yet
  // no unsigned long long yet
  // no c string yet
  if(!strcmp(type->buf, "void")) {
    ret = VVOID;
  } else if(!strcmp(type->buf, "float")) {
    ret = VEncodeDouble(_mm_cvtss_f32(regs->xmm0));
  } else if(!strcmp(type->buf, "double")) {
    ret = VEncodeDouble(_mm_cvtsd_f64(_mm_castps_pd(regs->xmm0)));
  } else if(!strcmp(type->buf, "_Bool")) {
    ret = VEncodeBool(regs->rax & 1);
  } else if(!strcmp(type->buf, "char")) {
    ret = VEncodeChar(regs->rax);
  } else if(!strcmp(type->buf, "signed-char")) {
    ret = VEncodeInt(regs->rax);
  } else if(!strcmp(type->buf, "unsigned-char")) {
    ret = VEncodeInt(regs->rax);
  } else if(!strcmp(type->buf, "short")) {
    ret = VEncodeInt(regs->rax);
  } else if(!strcmp(type->buf, "unsigned-short")) {
    ret = VEncodeInt(regs->rax);
  } else if(!strcmp(type->buf, "int")) {
    ret = VEncodeInt(regs->rax);
  } else if(!strcmp(type->buf, "unsigned-int")) {
    ret = VEncodeInt(regs->rax);
  } else if(!strcmp(type->buf, "void-pointer")) {
    ret = VEncodeForeignPointer((void*)(uintptr_t)regs->rax);
  } else if(!strcmp(type->buf, "const-void-pointer")) {
    ret = VEncodeForeignPointer((void*)(uintptr_t)regs->rax);
  } else if(!strcmp(type->buf, "VWORD")) {
    ret = VWord(regs->rax);
  } else {
    VErrorC(runtime, "ffi-call: Unknown type: ~S", return_type);
  }
  V_CALL(k, runtime, ret);
}
VFunc VApplyForeignFunction = (VFunc)VApplyForeignFunctionImpl;
#endif
