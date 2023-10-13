import gdb
import math
import struct

LITERAL_TYPE_MASK = 15 * 0x0001000000000000

POINTER_SIGN_BIT = 0x0000800000000000
POINTER_MIRROR = 0xFFFF800000000000

LITERAL_PAYLOAD = 0x0000FFFFFFFFFFFF

INT_PAYLOAD = 0xFFFFFFFF

PTR_CLOSURE = 1
PTR_PAIR = 3
PTR_UNUSED = 5
PTR_OTHER = 7

IMM_TOK = 2
IMM_INT = 4
IMM_CHAR = 6
PTR_FOREIGN = 8

class VWordPrinter:
    def __init__(self, val):
        self.val = val
    def to_string(self):
        bits = self.val['integer']
        dub = struct.unpack('d', struct.pack('Q', bits)) 
        if not math.isnan(dub[0]): return '(VDouble) ' + str(dub[0])

        wordtype = (bits & LITERAL_TYPE_MASK) >> 48

        if wordtype & 1 != 0 or wordtype == PTR_FOREIGN:
          wordstring = '(VClosure *) ' if wordtype == PTR_CLOSURE else \
                       '(VPair *) ' if wordtype == PTR_PAIR else \
                       '(VOther *) ' if wordtype == PTR_OTHER else \
                       '(void *) ' if wordtype == PTR_FOREIGN else \
                       '(Garbage Address) '
          if bits & POINTER_SIGN_BIT:
            return wordstring + hex(bits | POINTER_MIRROR)
          else:
            return wordstring + hex(bits & LITERAL_PAYLOAD)
        if wordtype == IMM_INT:
          return '(VInt) ' + str(struct.unpack('i', struct.pack('I', bits & INT_PAYLOAD))[0])

        return '?'

def vanity_prettyprint(val):
    if str(val.type.tag) == 'VWORD': return VWordPrinter(val)
    if str(val.type) == 'VWORD': return VWordPrinter(val)
    return None

gdb.pretty_printers.append(vanity_prettyprint)
