struct Runtime {
  // Interpreter Data
  uint64_t pc;
  void (*Interpret)(V_CORE_ARGS, VWORD, VWORD, VWORD, ...);
  void (*InterpretImpl)(V_CORE_ARGS, VWORD, VWORD, VWORD);
  const uint64_t ** tapes;
};

void VInterpret(V_CORE_ARGS, VWORD a, VWORD b, VWORD c, ...) {
  const uint64_t * tape = VSeekTape(runtime->tapes, runtime->pc);
  uint64_t * stack = NULL;

  while(true) {
    switch(*tape >> 48) {
      case RESERVE:
      {
        break;
      }
      case LOOKUP:
      {
        break;
      }
      case BRUIJN:
      {
        break;
      }
      case CLOSE:
      {
        break;
      }
      case APPLY_CLOSURE:
      {
        break;
      }
      case APPLY_TAPE:
      {
        break;
      }
      case PUSH_IMM:
      {
        break;
      }
      case PUSH_TAPE:
      {
        break;
      }
      tape++;
    }
  }
}
