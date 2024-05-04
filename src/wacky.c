#include "vscheme/vruntime.h"

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
