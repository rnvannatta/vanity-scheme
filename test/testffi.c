#include "vscheme/vruntime.h"
#include "vscheme/vinlines.h"
#include "vscheme/vmemory.h"
#include "../build/ffi.tab.h"
#include <stdio.h>
#include <stdlib.h>

extern VWORD parse_ret;
extern VMemoryPool parse_pool;

void print_parse(VWORD node) {
  printf("(");
  while(!VDecodeBool(VInlineNullP(node))) {
    VWORD first = VInlineCar(node);
    if(VDecodeBool(VInlinePairP(first)))
      print_parse(first);
    else if(VDecodeBool(VInlineStringP(first)))
      printf("%s", VDecodeString(first)->buf);
    else if(VDecodeBool(VInlineNullP(first)))
      printf("()");
    else if(VIsEq(first, VFALSE))
      printf("#f");
    else if(VIsEq(first, VTRUE))
      printf("#f");
    else if(VWordType(first) == VIMM_INT)
      printf("%i", VDecodeInt(first));
    else
      printf("#?");
    node = VInlineCdr(node);
    if(!VDecodeBool(VInlineNullP(node)))
      printf(" ");
  }
  printf(")");
}

int main()
{
  if(yyparse())
    fprintf(stderr, "error encountered parsing\n");

  print_parse(parse_ret);
  printf("\n");
}
