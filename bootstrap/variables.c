/* Copyright 2023 Richard N Van Natta
 *
 * This file is part of the Vanity Scheme Compiler.
 *
 * The Vanity Scheme Compiler is free software: you can redistribute it
 * and/or modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 * 
 * The Vanity Scheme Compiler is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with the Vanity Scheme Compiler.
 *
 * If not, see <https://www.gnu.org/licenses/>.
 *
 * This work is published with additional permission under GNU GPL
 * Version 3.0 Section 7, the Vanity Scheme Macro Exceptions, which
 * should have been included with the Vanity Scheme Compiler.
 *
 * If not, visit <https://github.com/rnvannatta>
 */
#include "vscheme/vruntime.h"
#include "vscheme/vlibrary.h"
#include "vscheme/vinlines.h"
static struct { VBlob sym; char bytes[12]; } _V10string_D882 = { { VSTRING, 12 }, "VMakeImport" };
static struct { VBlob sym; char bytes[13]; } _V10string_D881 = { { VSTRING, 13 }, "VLoadLibrary" };
static struct { VBlob sym; char bytes[21]; } _V10string_D880 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[10]; } _V10string_D879 = { { VSTRING, 10 }, "variables" };
static struct { VBlob sym; char bytes[5]; } _V0cons = { { VSYMBOL, 5 }, "cons" };
static struct { VBlob sym; char bytes[6]; } _V0pair_Q = { { VSYMBOL, 6 }, "pair\?" };
static struct { VBlob sym; char bytes[4]; } _V0cdr = { { VSYMBOL, 4 }, "cdr" };
static struct { VBlob sym; char bytes[4]; } _V0car = { { VSYMBOL, 4 }, "car" };
static struct { VBlob sym; char bytes[5]; } _V0eqv_Q = { { VSYMBOL, 5 }, "eqv\?" };
static struct { VBlob sym; char bytes[6]; } _V0null_Q = { { VSYMBOL, 6 }, "null\?" };
static struct { VBlob sym; char bytes[5]; } _V0cdar = { { VSYMBOL, 5 }, "cdar" };
static struct { VBlob sym; char bytes[5]; } _V0caar = { { VSYMBOL, 5 }, "caar" };
static struct { VBlob sym; char bytes[5]; } _V0cddr = { { VSYMBOL, 5 }, "cddr" };
static struct { VBlob sym; char bytes[5]; } _V0cadr = { { VSYMBOL, 5 }, "cadr" };
static struct { VBlob sym; char bytes[6]; } _V0atom_Q = { { VSYMBOL, 6 }, "atom\?" };
static struct { VBlob sym; char bytes[5]; } _V0list = { { VSYMBOL, 5 }, "list" };
static struct { VBlob sym; char bytes[5]; } _V0memv = { { VSYMBOL, 5 }, "memv" };
static struct { VBlob sym; char bytes[8]; } _V0symbol_Q = { { VSYMBOL, 8 }, "symbol\?" };
static struct { VBlob sym; char bytes[8]; } _V0string_Q = { { VSYMBOL, 8 }, "string\?" };
static struct { VBlob sym; char bytes[5]; } _V0fold = { { VSYMBOL, 5 }, "fold" };
static struct { VBlob sym; char bytes[14]; } _V0string__append = { { VSYMBOL, 14 }, "string-append" };
static struct { VBlob sym; char bytes[4]; } _V0map = { { VSYMBOL, 4 }, "map" };
static struct { VBlob sym; char bytes[15]; } _V0symbol___Gstring = { { VSYMBOL, 15 }, "symbol->string" };
static struct { VBlob sym; char bytes[8]; } _V0reverse = { { VSYMBOL, 8 }, "reverse" };
static struct { VBlob sym; char bytes[6]; } _V0error = { { VSYMBOL, 6 }, "error" };
static struct { VBlob sym; char bytes[4]; } _V0eq_Q = { { VSYMBOL, 4 }, "eq\?" };
static struct { VBlob sym; char bytes[2]; } _V0_P = { { VSYMBOL, 2 }, "+" };
static struct { VBlob sym; char bytes[8]; } _V0display = { { VSYMBOL, 8 }, "display" };
static struct { VBlob sym; char bytes[11]; } _V0string__ref = { { VSYMBOL, 11 }, "string-ref" };
static struct { VBlob sym; char bytes[18]; } _V0get__output__string = { { VSYMBOL, 18 }, "get-output-string" };
static struct { VBlob sym; char bytes[15]; } _V0string___Gsymbol = { { VSYMBOL, 15 }, "string->symbol" };
static struct { VBlob sym; char bytes[11]; } _V0close__port = { { VSYMBOL, 11 }, "close-port" };
static struct { VBlob sym; char bytes[2]; } _V0_E = { { VSYMBOL, 2 }, "=" };
static struct { VBlob sym; char bytes[19]; } _V0open__output__string = { { VSYMBOL, 19 }, "open-output-string" };
static struct { VBlob sym; char bytes[14]; } _V0string__length = { { VSYMBOL, 14 }, "string-length" };
static struct { VBlob sym; char bytes[4]; } _V10string_D878 = { { VSTRING, 4 }, "_V0" };
static struct { VBlob sym; char bytes[5]; } _V10string_D877 = { { VSTRING, 5 }, "_V10" };
static struct { VBlob sym; char bytes[3]; } _V10string_D876 = { { VSTRING, 3 }, "_A" };
static struct { VBlob sym; char bytes[3]; } _V10string_D875 = { { VSTRING, 3 }, "_D" };
static struct { VBlob sym; char bytes[3]; } _V10string_D874 = { { VSTRING, 3 }, "__" };
static struct { VBlob sym; char bytes[3]; } _V10string_D873 = { { VSTRING, 3 }, "_P" };
static struct { VBlob sym; char bytes[3]; } _V10string_D872 = { { VSTRING, 3 }, "_T" };
static struct { VBlob sym; char bytes[3]; } _V10string_D871 = { { VSTRING, 3 }, "_U" };
static struct { VBlob sym; char bytes[3]; } _V10string_D870 = { { VSTRING, 3 }, "_C" };
static struct { VBlob sym; char bytes[3]; } _V10string_D869 = { { VSTRING, 3 }, "_Q" };
static struct { VBlob sym; char bytes[3]; } _V10string_D868 = { { VSTRING, 3 }, "_G" };
static struct { VBlob sym; char bytes[3]; } _V10string_D867 = { { VSTRING, 3 }, "_E" };
static struct { VBlob sym; char bytes[3]; } _V10string_D866 = { { VSTRING, 3 }, "_L" };
static struct { VBlob sym; char bytes[3]; } _V10string_D865 = { { VSTRING, 3 }, "_J" };
static struct { VBlob sym; char bytes[3]; } _V10string_D864 = { { VSTRING, 3 }, "_W" };
static struct { VBlob sym; char bytes[3]; } _V10string_D863 = { { VSTRING, 3 }, "_S" };
static struct { VBlob sym; char bytes[3]; } _V10string_D862 = { { VSTRING, 3 }, "_R" };
static struct { VBlob sym; char bytes[3]; } _V10string_D861 = { { VSTRING, 3 }, "_M" };
static struct { VBlob sym; char bytes[3]; } _V10string_D860 = { { VSTRING, 3 }, "_Z" };
static struct { VBlob sym; char bytes[3]; } _V10string_D859 = { { VSTRING, 3 }, "_B" };
static struct { VBlob sym; char bytes[1]; } _V10string_D858 = { { VSTRING, 1 }, "" };
static struct { VBlob sym; char bytes[81]; } _V10string_D857 = { { VSTRING, 81 }, "library name must be a string which is a valid c identifier or a list of symbols" };
static struct { VBlob sym; char bytes[28]; } _V10string_D856 = { { VSTRING, 28 }, "non-symbol in library path:" };
static struct { VBlob sym; char bytes[5]; } _V10string_D855 = { { VSTRING, 5 }, "_V20" };
static struct { VBlob sym; char bytes[11]; } _V10string_D854 = { { VSTRING, 11 }, "VInlineCdr" };
static struct { VBlob sym; char bytes[11]; } _V10string_D853 = { { VSTRING, 11 }, "VInlineCar" };
static struct { VBlob sym; char bytes[12]; } _V10string_D852 = { { VSTRING, 12 }, "VInlineCons" };
static struct { VBlob sym; char bytes[10]; } _V10string_D851 = { { VSTRING, 10 }, "VInlineEq" };
static struct { VBlob sym; char bytes[11]; } _V10string_D850 = { { VSTRING, 11 }, "VInlineNot" };
static struct { VBlob sym; char bytes[13]; } _V10string_D849 = { { VSTRING, 13 }, "VInlinePairP" };
static struct { VBlob sym; char bytes[13]; } _V10string_D848 = { { VSTRING, 13 }, "VInlineNullP" };
static struct { VBlob sym; char bytes[8]; } _V10sys_D_P = { { VSYMBOL, 8 }, "##sys.+" };
static struct { VBlob sym; char bytes[8]; } _V10sys_D__ = { { VSYMBOL, 8 }, "##sys.-" };
static struct { VBlob sym; char bytes[8]; } _V10sys_D_S = { { VSYMBOL, 8 }, "##sys.*" };
static struct { VBlob sym; char bytes[8]; } _V10sys_D_W = { { VSYMBOL, 8 }, "##sys./" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Dcmp = { { VSYMBOL, 10 }, "##sys.cmp" };
static struct { VBlob sym; char bytes[15]; } _V10sys_Dquotient = { { VSYMBOL, 15 }, "##sys.quotient" };
static struct { VBlob sym; char bytes[16]; } _V10sys_Dremainder = { { VSYMBOL, 16 }, "##sys.remainder" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dnull_Q = { { VSYMBOL, 12 }, "##sys.null\?" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dpair_Q = { { VSYMBOL, 12 }, "##sys.pair\?" };
static struct { VBlob sym; char bytes[14]; } _V10sys_Dvector_Q = { { VSYMBOL, 14 }, "##sys.vector\?" };
static struct { VBlob sym; char bytes[17]; } _V10sys_Dprocedure_Q = { { VSYMBOL, 17 }, "##sys.procedure\?" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dblob_Q = { { VSYMBOL, 12 }, "##sys.blob\?" };
static struct { VBlob sym; char bytes[14]; } _V10sys_Dsymbol_Q = { { VSYMBOL, 14 }, "##sys.symbol\?" };
static struct { VBlob sym; char bytes[14]; } _V10sys_Dstring_Q = { { VSYMBOL, 14 }, "##sys.string\?" };
static struct { VBlob sym; char bytes[11]; } _V10sys_Dint_Q = { { VSYMBOL, 11 }, "##sys.int\?" };
static struct { VBlob sym; char bytes[14]; } _V10sys_Ddouble_Q = { { VSYMBOL, 14 }, "##sys.double\?" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dchar_Q = { { VSYMBOL, 12 }, "##sys.char\?" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Deq_Q = { { VSYMBOL, 10 }, "##sys.eq\?" };
static struct { VBlob sym; char bytes[15]; } _V10sys_Dsymbol_E_Q = { { VSYMBOL, 15 }, "##sys.symbol=\?" };
static struct { VBlob sym; char bytes[13]; } _V10sys_Dblob_E_Q = { { VSYMBOL, 13 }, "##sys.blob=\?" };
static struct { VBlob sym; char bytes[9]; } _V10sys_Dif = { { VSYMBOL, 9 }, "##sys.if" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dbegin = { { VSYMBOL, 12 }, "##sys.begin" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Dand = { { VSYMBOL, 10 }, "##sys.and" };
static struct { VBlob sym; char bytes[9]; } _V10sys_Dor = { { VSYMBOL, 9 }, "##sys.or" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Dnot = { { VSYMBOL, 10 }, "##sys.not" };
static struct { VBlob sym; char bytes[11]; } _V10sys_Dnext = { { VSYMBOL, 11 }, "##sys.next" };
static struct { VBlob sym; char bytes[14]; } _V10sys_Dcall_Wcc = { { VSYMBOL, 14 }, "##sys.call/cc" };
static struct { VBlob sym; char bytes[23]; } _V10sys_Dcall__with__values = { { VSYMBOL, 23 }, "##sys.call-with-values" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dapply = { { VSYMBOL, 12 }, "##sys.apply" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dabort = { { VSYMBOL, 12 }, "##sys.abort" };
static struct { VBlob sym; char bytes[11]; } _V10sys_Dexit = { { VSYMBOL, 11 }, "##sys.exit" };
static struct { VBlob sym; char bytes[13]; } _V10sys_Dimport = { { VSYMBOL, 13 }, "##sys.import" };
static struct { VBlob sym; char bytes[17]; } _V10vcore_Dfunction = { { VSYMBOL, 17 }, "##vcore.function" };
static struct { VBlob sym; char bytes[15]; } _V10vcore_Ddefine = { { VSYMBOL, 15 }, "##vcore.define" };
static struct { VBlob sym; char bytes[20]; } _V10vcore_Dmultidefine = { { VSYMBOL, 20 }, "##vcore.multidefine" };
static struct { VBlob sym; char bytes[23]; } _V10vcore_Dlookup__library = { { VSYMBOL, 23 }, "##vcore.lookup-library" };
static struct { VBlob sym; char bytes[11]; } _V10sys_Dcons = { { VSYMBOL, 11 }, "##sys.cons" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dqcons = { { VSYMBOL, 12 }, "##sys.qcons" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Dcar = { { VSYMBOL, 10 }, "##sys.car" };
static struct { VBlob sym; char bytes[10]; } _V10sys_Dcdr = { { VSYMBOL, 10 }, "##sys.cdr" };
static struct { VBlob sym; char bytes[15]; } _V10sys_Dset__car_B = { { VSYMBOL, 15 }, "##sys.set-car!" };
static struct { VBlob sym; char bytes[15]; } _V10sys_Dset__cdr_B = { { VSYMBOL, 15 }, "##sys.set-cdr!" };
static struct { VBlob sym; char bytes[19]; } _V10sys_Dlist___Gvector = { { VSYMBOL, 19 }, "##sys.list->vector" };
static struct { VBlob sym; char bytes[17]; } _V10sys_Dvector__ref = { { VSYMBOL, 17 }, "##sys.vector-ref" };
static struct { VBlob sym; char bytes[18]; } _V10sys_Dvector__set_B = { { VSYMBOL, 18 }, "##sys.vector-set!" };
static struct { VBlob sym; char bytes[20]; } _V10sys_Dvector__length = { { VSYMBOL, 20 }, "##sys.vector-length" };
static struct { VBlob sym; char bytes[18]; } _V10sys_Dmake__string = { { VSYMBOL, 18 }, "##sys.make-string" };
static struct { VBlob sym; char bytes[16]; } _V10sys_Dsubstring = { { VSYMBOL, 16 }, "##sys.substring" };
static struct { VBlob sym; char bytes[19]; } _V10sys_Dstring__copy_B = { { VSYMBOL, 19 }, "##sys.string-copy!" };
static struct { VBlob sym; char bytes[17]; } _V10sys_Dstring__ref = { { VSYMBOL, 17 }, "##sys.string-ref" };
static struct { VBlob sym; char bytes[18]; } _V10sys_Dstring__set_B = { { VSYMBOL, 18 }, "##sys.string-set!" };
static struct { VBlob sym; char bytes[20]; } _V10sys_Dstring__length = { { VSYMBOL, 20 }, "##sys.string-length" };
static struct { VBlob sym; char bytes[21]; } _V10sys_Dstring___Gsymbol = { { VSYMBOL, 21 }, "##sys.string->symbol" };
static struct { VBlob sym; char bytes[21]; } _V10sys_Dstring___Gnumber = { { VSYMBOL, 21 }, "##sys.string->number" };
static struct { VBlob sym; char bytes[21]; } _V10sys_Dsymbol___Gstring = { { VSYMBOL, 21 }, "##sys.symbol->string" };
static struct { VBlob sym; char bytes[19]; } _V10sys_Dchar__integer = { { VSYMBOL, 19 }, "##sys.char-integer" };
static struct { VBlob sym; char bytes[16]; } _V10sys_Ddup__stdin = { { VSYMBOL, 16 }, "##sys.dup-stdin" };
static struct { VBlob sym; char bytes[17]; } _V10sys_Ddup__stdout = { { VSYMBOL, 17 }, "##sys.dup-stdout" };
static struct { VBlob sym; char bytes[17]; } _V10sys_Ddup__stderr = { { VSYMBOL, 17 }, "##sys.dup-stderr" };
static struct { VBlob sym; char bytes[24]; } _V10sys_Dopen__input__stream = { { VSYMBOL, 24 }, "##sys.open-input-stream" };
static struct { VBlob sym; char bytes[25]; } _V10sys_Dopen__output__stream = { { VSYMBOL, 25 }, "##sys.open-output-stream" };
static struct { VBlob sym; char bytes[19]; } _V10sys_Dclose__stream = { { VSYMBOL, 19 }, "##sys.close-stream" };
static struct { VBlob sym; char bytes[25]; } _V10sys_Dopen__output__string = { { VSYMBOL, 25 }, "##sys.open-output-string" };
static struct { VBlob sym; char bytes[24]; } _V10sys_Dget__output__string = { { VSYMBOL, 24 }, "##sys.get-output-string" };
static struct { VBlob sym; char bytes[18]; } _V10sys_Deof__object_Q = { { VSYMBOL, 18 }, "##sys.eof-object\?" };
static struct { VBlob sym; char bytes[16]; } _V10sys_Dread__char = { { VSYMBOL, 16 }, "##sys.read-char" };
static struct { VBlob sym; char bytes[16]; } _V10sys_Dread__line = { { VSYMBOL, 16 }, "##sys.read-line" };
static struct { VBlob sym; char bytes[11]; } _V10sys_Dread = { { VSYMBOL, 11 }, "##sys.read" };
static struct { VBlob sym; char bytes[19]; } _V10sys_Ddisplay__word = { { VSYMBOL, 19 }, "##sys.display-word" };
static struct { VBlob sym; char bytes[12]; } _V10sys_Dwrite = { { VSYMBOL, 12 }, "##sys.write" };
static struct { VBlob sym; char bytes[14]; } _V10sys_Dnewline = { { VSYMBOL, 14 }, "##sys.newline" };
static struct { VBlob sym; char bytes[13]; } _V10sys_Dsystem = { { VSYMBOL, 13 }, "##sys.system" };
static struct { VBlob sym; char bytes[25]; } _V10sys_Dopen__input__process = { { VSYMBOL, 25 }, "##sys.open-input-process" };
static struct { VBlob sym; char bytes[26]; } _V10sys_Dopen__output__process = { { VSYMBOL, 26 }, "##sys.open-output-process" };
static struct { VBlob sym; char bytes[26]; } _V10sys_Dmake__temporary__file = { { VSYMBOL, 26 }, "##sys.make-temporary-file" };
static struct { VBlob sym; char bytes[19]; } _V10sys_Dcommand__line = { { VSYMBOL, 19 }, "##sys.command-line" };
static struct { VBlob sym; char bytes[13]; } _V10string_D847 = { { VSTRING, 13 }, "VCommandLine" };
static struct { VBlob sym; char bytes[19]; } _V10string_D846 = { { VSTRING, 19 }, "VMakeTemporaryFile" };
static struct { VBlob sym; char bytes[19]; } _V10string_D845 = { { VSTRING, 19 }, "VOpenOutputProcess" };
static struct { VBlob sym; char bytes[18]; } _V10string_D844 = { { VSTRING, 18 }, "VOpenInputProcess" };
static struct { VBlob sym; char bytes[8]; } _V10string_D843 = { { VSTRING, 8 }, "VSystem" };
static struct { VBlob sym; char bytes[9]; } _V10string_D842 = { { VSTRING, 9 }, "VNewline" };
static struct { VBlob sym; char bytes[7]; } _V10string_D841 = { { VSTRING, 7 }, "VWrite" };
static struct { VBlob sym; char bytes[9]; } _V10string_D840 = { { VSTRING, 9 }, "VDisplay" };
static struct { VBlob sym; char bytes[6]; } _V10string_D839 = { { VSTRING, 6 }, "VRead" };
static struct { VBlob sym; char bytes[10]; } _V10string_D838 = { { VSTRING, 10 }, "VReadLine" };
static struct { VBlob sym; char bytes[10]; } _V10string_D837 = { { VSTRING, 10 }, "VReadChar" };
static struct { VBlob sym; char bytes[6]; } _V10string_D836 = { { VSTRING, 6 }, "VEofP" };
static struct { VBlob sym; char bytes[17]; } _V10string_D835 = { { VSTRING, 17 }, "VGetOutputString" };
static struct { VBlob sym; char bytes[18]; } _V10string_D834 = { { VSTRING, 18 }, "VOpenOutputString" };
static struct { VBlob sym; char bytes[13]; } _V10string_D833 = { { VSTRING, 13 }, "VCloseStream" };
static struct { VBlob sym; char bytes[18]; } _V10string_D832 = { { VSTRING, 18 }, "VOpenOutputStream" };
static struct { VBlob sym; char bytes[17]; } _V10string_D831 = { { VSTRING, 17 }, "VOpenInputStream" };
static struct { VBlob sym; char bytes[11]; } _V10string_D830 = { { VSTRING, 11 }, "VDupStderr" };
static struct { VBlob sym; char bytes[11]; } _V10string_D829 = { { VSTRING, 11 }, "VDupStdout" };
static struct { VBlob sym; char bytes[10]; } _V10string_D828 = { { VSTRING, 10 }, "VDupStdin" };
static struct { VBlob sym; char bytes[9]; } _V10string_D827 = { { VSTRING, 9 }, "VCharInt" };
static struct { VBlob sym; char bytes[14]; } _V10string_D826 = { { VSTRING, 14 }, "VSymbolString" };
static struct { VBlob sym; char bytes[14]; } _V10string_D825 = { { VSTRING, 14 }, "VStringNumber" };
static struct { VBlob sym; char bytes[14]; } _V10string_D824 = { { VSTRING, 14 }, "VStringSymbol" };
static struct { VBlob sym; char bytes[14]; } _V10string_D823 = { { VSTRING, 14 }, "VStringLength" };
static struct { VBlob sym; char bytes[11]; } _V10string_D822 = { { VSTRING, 11 }, "VStringSet" };
static struct { VBlob sym; char bytes[11]; } _V10string_D821 = { { VSTRING, 11 }, "VStringRef" };
static struct { VBlob sym; char bytes[12]; } _V10string_D820 = { { VSTRING, 12 }, "VStringCopy" };
static struct { VBlob sym; char bytes[11]; } _V10string_D819 = { { VSTRING, 11 }, "VSubstring" };
static struct { VBlob sym; char bytes[12]; } _V10string_D818 = { { VSTRING, 12 }, "VMakeString" };
static struct { VBlob sym; char bytes[14]; } _V10string_D817 = { { VSTRING, 14 }, "VVectorLength" };
static struct { VBlob sym; char bytes[11]; } _V10string_D816 = { { VSTRING, 11 }, "VVectorSet" };
static struct { VBlob sym; char bytes[11]; } _V10string_D815 = { { VSTRING, 11 }, "VVectorRef" };
static struct { VBlob sym; char bytes[12]; } _V10string_D814 = { { VSTRING, 12 }, "VListVector" };
static struct { VBlob sym; char bytes[8]; } _V10string_D813 = { { VSTRING, 8 }, "VSetCdr" };
static struct { VBlob sym; char bytes[8]; } _V10string_D812 = { { VSTRING, 8 }, "VSetCar" };
static struct { VBlob sym; char bytes[5]; } _V10string_D811 = { { VSTRING, 5 }, "VCdr" };
static struct { VBlob sym; char bytes[5]; } _V10string_D810 = { { VSTRING, 5 }, "VCar" };
static struct { VBlob sym; char bytes[6]; } _V10string_D809 = { { VSTRING, 6 }, "VCons" };
static struct { VBlob sym; char bytes[15]; } _V10string_D808 = { { VSTRING, 15 }, "VLookupLibrary" };
static struct { VBlob sym; char bytes[13]; } _V10string_D807 = { { VSTRING, 13 }, "VMultiDefine" };
static struct { VBlob sym; char bytes[17]; } _V10string_D806 = { { VSTRING, 17 }, "VDefineGlobalVar" };
static struct { VBlob sym; char bytes[10]; } _V10string_D805 = { { VSTRING, 10 }, "VFunction" };
static struct { VBlob sym; char bytes[8]; } _V10string_D804 = { { VSTRING, 8 }, "VImport" };
static struct { VBlob sym; char bytes[6]; } _V10string_D803 = { { VSTRING, 6 }, "VExit" };
static struct { VBlob sym; char bytes[7]; } _V10string_D802 = { { VSTRING, 7 }, "VAbort" };
static struct { VBlob sym; char bytes[7]; } _V10string_D801 = { { VSTRING, 7 }, "VApply" };
static struct { VBlob sym; char bytes[12]; } _V10string_D800 = { { VSTRING, 12 }, "VCallValues" };
static struct { VBlob sym; char bytes[8]; } _V10string_D799 = { { VSTRING, 8 }, "VCallCC" };
static struct { VBlob sym; char bytes[6]; } _V10string_D798 = { { VSTRING, 6 }, "VNext" };
static struct { VBlob sym; char bytes[5]; } _V10string_D797 = { { VSTRING, 5 }, "VNot" };
static struct { VBlob sym; char bytes[9]; } _V10string_D796 = { { VSTRING, 9 }, "VBlobEqv" };
static struct { VBlob sym; char bytes[11]; } _V10string_D795 = { { VSTRING, 11 }, "VSymbolEqv" };
static struct { VBlob sym; char bytes[4]; } _V10string_D794 = { { VSTRING, 4 }, "VEq" };
static struct { VBlob sym; char bytes[7]; } _V10string_D793 = { { VSTRING, 7 }, "VCharP" };
static struct { VBlob sym; char bytes[9]; } _V10string_D792 = { { VSTRING, 9 }, "VDoubleP" };
static struct { VBlob sym; char bytes[6]; } _V10string_D791 = { { VSTRING, 6 }, "VIntP" };
static struct { VBlob sym; char bytes[9]; } _V10string_D790 = { { VSTRING, 9 }, "VStringP" };
static struct { VBlob sym; char bytes[9]; } _V10string_D789 = { { VSTRING, 9 }, "VSymbolP" };
static struct { VBlob sym; char bytes[7]; } _V10string_D788 = { { VSTRING, 7 }, "VBlobP" };
static struct { VBlob sym; char bytes[12]; } _V10string_D787 = { { VSTRING, 12 }, "VProcedureP" };
static struct { VBlob sym; char bytes[9]; } _V10string_D786 = { { VSTRING, 9 }, "VVectorP" };
static struct { VBlob sym; char bytes[7]; } _V10string_D785 = { { VSTRING, 7 }, "VPairP" };
static struct { VBlob sym; char bytes[7]; } _V10string_D784 = { { VSTRING, 7 }, "VNullP" };
static struct { VBlob sym; char bytes[5]; } _V10string_D783 = { { VSTRING, 5 }, "VRem" };
static struct { VBlob sym; char bytes[6]; } _V10string_D782 = { { VSTRING, 6 }, "VQuot" };
static struct { VBlob sym; char bytes[5]; } _V10string_D781 = { { VSTRING, 5 }, "VCmp" };
static struct { VBlob sym; char bytes[5]; } _V10string_D780 = { { VSTRING, 5 }, "VDiv" };
static struct { VBlob sym; char bytes[5]; } _V10string_D779 = { { VSTRING, 5 }, "VMul" };
static struct { VBlob sym; char bytes[5]; } _V10string_D778 = { { VSTRING, 5 }, "VSub" };
static struct { VBlob sym; char bytes[5]; } _V10string_D777 = { { VSTRING, 5 }, "VAdd" };
static struct { VBlob sym; char bytes[6]; } _V0quote = { { VSYMBOL, 6 }, "quote" };
static struct { VBlob sym; char bytes[7]; } _V0lambda = { { VSYMBOL, 7 }, "lambda" };
static struct { VBlob sym; char bytes[12]; } _V0case__lambda = { { VSYMBOL, 12 }, "case-lambda" };
static struct { VBlob sym; char bytes[5]; } _V0set_B = { { VSYMBOL, 5 }, "set!" };
static struct { VBlob sym; char bytes[15]; } _V0free__variables = { { VSYMBOL, 15 }, "free-variables" };
static struct { VBlob sym; char bytes[17]; } _V0lookup__intrinsic = { { VSYMBOL, 17 }, "lookup-intrinsic" };
static struct { VBlob sym; char bytes[14]; } _V0lookup__inline = { { VSYMBOL, 14 }, "lookup-inline" };
static struct { VBlob sym; char bytes[15]; } _V0mangle__library = { { VSYMBOL, 15 }, "mangle-library" };
static struct { VBlob sym; char bytes[14]; } _V0mangle__symbol = { { VSYMBOL, 14 }, "mangle-symbol" };
static void variables_k40(VEnv * env) {
 static VDebugInfo dbg = { "variables_k40" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k40, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.11 5 0) (##inline ##sys.cons (##inline ##sys.cons (quote mangle-symbol) (bruijn mangle-symbol 5 1)) (##inline ##sys.cons (##inline ##sys.cons (quote mangle-library) (bruijn mangle-library 5 2)) (##inline ##sys.cons (##inline ##sys.cons (quote lookup-inline) (bruijn lookup-inline 5 3)) (##inline ##sys.cons (##inline ##sys.cons (quote lookup-intrinsic) (bruijn lookup-intrinsic 5 4)) (##inline ##sys.cons (##inline ##sys.cons (quote free-variables) (bruijn free-variables 5 5)) (quote ())))))))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 0)),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0mangle__symbol.sym, VPOINTER_OTHER),
      VGetArg(env, 5, 1)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0mangle__library.sym, VPOINTER_OTHER),
      VGetArg(env, 5, 2)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lookup__inline.sym, VPOINTER_OTHER),
      VGetArg(env, 5, 3)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0lookup__intrinsic.sym, VPOINTER_OTHER),
      VGetArg(env, 5, 4)
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0free__variables.sym, VPOINTER_OTHER),
      VGetArg(env, 5, 5)
    )
,
      VNULL
    )

    )

    )

    )

    )

    );
 } else {
  VError("Not enough arguments to variables_k40, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0free__variables_k43(VEnv * env) {
 static VDebugInfo dbg = { "_V0free__variables_k43" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0free__variables_k43, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.47 1 0) (quote ()) (bruijn expr 5 1))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VNULL,
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0free__variables_k43, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k46(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k46" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k46, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.64 0 0) ((bruijn ##k.52 3 0) (quote ())) ((bruijn list 14 12) (bruijn ##k.52 3 0) (bruijn expr 3 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[0]),
      VNULL
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 12)),
      env->up->up->up->vars[0],
      env->up->up->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k46, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k45(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k45" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k45, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.62 0 0) (if (bruijn ##x.62 0 0) ((bruijn ##k.52 2 0) (quote ())) ((bruijn list 13 12) (bruijn ##k.52 2 0) (bruijn expr 2 2))) ((bruijn lookup-intrinsic 12 4) (close _V0loop_k46) (bruijn expr 2 2)))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VNULL
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 12)),
      env->up->up->vars[0],
      env->up->up->vars[2]
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k46, env)}),
      env->up->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k45, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k54(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k54" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k54, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 10 1) (bruijn ##k.52 9 0) (bruijn ##x.80 1 0) (bruijn ##x.81 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      VGetArg(env, 9, 0),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k54, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k53(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k53" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k53, env) {
 if (env->num_vars == 1) {
  // ((bruijn cddr 19 9) (close _V0loop_k54) (bruijn expr 8 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 9)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k54, env)}),
      VGetArg(env, 8, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k53, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k52(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k52" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k52, env) {
 if (env->num_vars == 1) {
  // ((bruijn append-improper 11 2) (close _V0loop_k53) (bruijn ##x.82 0 0) (bruijn bound 7 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k53, env)}),
      env->vars[0],
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k52, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k58(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k58" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k58, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop2 2 1) (bruijn ##k.88 2 0) (bruijn ##x.93 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k58, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k57(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k57" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k57, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 21 3) (close _V0loop_k58) (bruijn expr 10 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k58, env)}),
      VGetArg(env, 10, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k57, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop2_k65(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop2_k65" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop2_k65, env) {
 if (env->num_vars == 1) {
  // ((bruijn merge 21 1) (bruijn ##k.94 7 0) (bruijn ##x.101 2 0) (bruijn ##x.102 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 1)),
      VGetArg(env, 7, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop2_k65, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop2_k64(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop2_k64" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop2_k64, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop2 7 1) (close _V0loop2_k65) (bruijn ##x.103 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop2_k65, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop2_k64, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop2_k63(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop2_k63" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop2_k63, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 26 3) (close _V0loop2_k64) (bruijn cases 5 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop2_k64, env)}),
      VGetArg(env, 5, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop2_k63, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop2_k62(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop2_k62" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop2_k62, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 15 1) (close _V0loop2_k63) (bruijn ##x.104 1 0) (bruijn ##x.105 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop2_k63, env)}),
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop2_k62, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop2_k61(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop2_k61" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop2_k61, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdar 24 7) (close _V0loop2_k62) (bruijn cases 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop2_k62, env)}),
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop2_k61, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop2_k60(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop2_k60" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop2_k60, env) {
 if (env->num_vars == 1) {
  // ((bruijn append-improper 16 2) (close _V0loop2_k61) (bruijn ##x.106 0 0) (bruijn bound 12 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop2_k61, env)}),
      env->vars[0],
      VGetArg(env, 12, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop2_k60, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop2_k59(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop2_k59" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop2_k59, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.96 0 0) ((bruijn ##k.94 1 0) (quote ())) ((bruijn caar 22 8) (close _V0loop2_k60) (bruijn cases 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VNULL
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 8)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop2_k60, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop2_k59, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop2_lambda10(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop2_lambda10" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop2_lambda10, env) {
 if (env->num_vars == 2) {
  // ((bruijn null? 21 6) (close _V0loop2_k59) (bruijn cases 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop2_k59, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop2_lambda10, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda9(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda9" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda9, env) {
  // (set! (close _V0loop_k57) (bruijn loop2 0 1) (close _V0loop2_lambda10))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k57, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop2_lambda10, env)})
    );
 }
}
static void _V0loop_k68(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k68" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k68, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 12 1) (bruijn ##k.52 11 0) (bruijn bound 11 1) (bruijn ##x.112 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 1)),
      VGetArg(env, 11, 0),
      VGetArg(env, 11, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k68, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k72(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k72" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k72, env) {
 if (env->num_vars == 1) {
  // ((bruijn merge 18 1) (bruijn ##k.52 14 0) (bruijn ##x.115 2 0) (bruijn ##x.116 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 1)),
      VGetArg(env, 14, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k72, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k71(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k71" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k71, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 14 1) (close _V0loop_k72) (bruijn bound 13 1) (bruijn ##x.117 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k72, env)}),
      VGetArg(env, 13, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k71, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k70(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k70" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k70, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 23 3) (close _V0loop_k71) (bruijn expr 12 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k71, env)}),
      VGetArg(env, 12, 2)
    );
 } else {
  VError("Not enough arguments to _V0loop_k70, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k69(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k69" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k69, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 12 1) (close _V0loop_k70) (bruijn bound 11 1) (bruijn ##x.118 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k70, env)}),
      VGetArg(env, 11, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k69, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k67(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k67" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k67, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.109 0 0) ((bruijn cdr 21 3) (close _V0loop_k68) (bruijn expr 10 2)) ((bruijn car 21 4) (close _V0loop_k69) (bruijn expr 10 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k68, env)}),
      VGetArg(env, 10, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k69, env)}),
      VGetArg(env, 10, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k67, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k66(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k66" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k66, env) {
 if (env->num_vars == 1) {
  // ((bruijn eqv? 20 5) (close _V0loop_k67) (bruijn ##x.119 0 0) (quote set!))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k67, env)}),
      env->vars[0],
      VEncodePointer(&_V0set_B.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0loop_k66, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k56(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k56" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k56, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.85 0 0) ((close _V0loop_lambda9) (bruijn ##k.52 8 0) #f) ((bruijn car 19 4) (close _V0loop_k66) (bruijn expr 8 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda9, env)},
      VGetArg(env, 8, 0),
      VEncodeBool(false)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k66, env)}),
      VGetArg(env, 8, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k56, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k55(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k55" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k55, env) {
 if (env->num_vars == 1) {
  // ((bruijn eqv? 18 5) (close _V0loop_k56) (bruijn ##x.120 0 0) (quote case-lambda))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k56, env)}),
      env->vars[0],
      VEncodePointer(&_V0case__lambda.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0loop_k55, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k51(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k51" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k51, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.77 0 0) ((bruijn cadr 17 10) (close _V0loop_k52) (bruijn expr 6 2)) ((bruijn car 17 4) (close _V0loop_k55) (bruijn expr 6 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 10)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k52, env)}),
      VGetArg(env, 6, 2)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k55, env)}),
      VGetArg(env, 6, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k51, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k50(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k50" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k50, env) {
 if (env->num_vars == 1) {
  // ((bruijn eqv? 16 5) (close _V0loop_k51) (bruijn ##x.121 0 0) (quote lambda))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k51, env)}),
      env->vars[0],
      VEncodePointer(&_V0lambda.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0loop_k50, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k49(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k49" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k49, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.72 0 0) ((bruijn ##k.52 4 0) (quote ())) ((bruijn car 15 4) (close _V0loop_k50) (bruijn expr 4 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 0)),
      VNULL
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k50, env)}),
      VGetArg(env, 4, 2)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k49, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k48(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k48" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k48, env) {
 if (env->num_vars == 1) {
  // ((bruijn eqv? 14 5) (close _V0loop_k49) (bruijn ##x.122 0 0) (quote quote))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k49, env)}),
      env->vars[0],
      VEncodePointer(&_V0quote.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0loop_k48, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k47(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k47" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k47, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.67 0 0) ((bruijn ##k.52 2 0) (quote ())) ((bruijn car 13 4) (close _V0loop_k48) (bruijn expr 2 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VNULL
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k48, env)}),
      env->up->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k47, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k44(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k44" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k44, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.54 0 0) ((bruijn memv 12 13) (close _V0loop_k45) (bruijn expr 1 2) (bruijn bound 1 1)) ((bruijn atom? 12 11) (close _V0loop_k47) (bruijn expr 1 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k45, env)}),
      env->up->vars[2],
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 11)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k47, env)}),
      env->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k44, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda8(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda8" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda8, env) {
 if (env->num_vars == 3) {
  // ((bruijn symbol? 11 14) (close _V0loop_k44) (bruijn expr 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k44, env)}),
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda8, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0free__variables_lambda7(VEnv * env) {
 static VDebugInfo dbg = { "_V0free__variables_lambda7" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0free__variables_lambda7, env) {
  // (set! (close _V0free__variables_k43) (bruijn loop 0 1) (close _V0loop_lambda8))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0free__variables_k43, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda8, env)})
    );
 }
}
static void _V0free__variables_k42(VEnv * env) {
 static VDebugInfo dbg = { "_V0free__variables_k42" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0free__variables_k42, env) {
 if (env->num_vars == 1) {
  // ((close _V0free__variables_lambda7) (bruijn ##k.39 2 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0free__variables_lambda7, env)},
      env->up->up->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0free__variables_k42, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0append__improper_k76(VEnv * env) {
 static VDebugInfo dbg = { "_V0append__improper_k76" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0append__improper_k76, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 13 1) (bruijn ##k.123 4 0) (bruijn ##x.128 2 0) (bruijn ##x.129 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 1)),
      VGetArg(env, 4, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0append__improper_k76, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0append__improper_k75(VEnv * env) {
 static VDebugInfo dbg = { "_V0append__improper_k75" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0append__improper_k75, env) {
 if (env->num_vars == 1) {
  // ((bruijn append-improper 5 2) (close _V0append__improper_k76) (bruijn ##x.130 0 0) (bruijn b 3 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0append__improper_k76, env)}),
      env->vars[0],
      env->up->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0append__improper_k75, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0append__improper_k74(VEnv * env) {
 static VDebugInfo dbg = { "_V0append__improper_k74" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0append__improper_k74, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 11 3) (close _V0append__improper_k75) (bruijn a 2 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0append__improper_k75, env)}),
      env->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0append__improper_k74, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0append__improper_k77(VEnv * env) {
 static VDebugInfo dbg = { "_V0append__improper_k77" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0append__improper_k77, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.133 0 0) ((bruijn ##k.123 2 0) (bruijn b 2 2)) ((bruijn cons 11 1) (bruijn ##k.123 2 0) (bruijn a 2 1) (bruijn b 2 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      env->up->up->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      env->up->up->vars[0],
      env->up->up->vars[1],
      env->up->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0append__improper_k77, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0append__improper_k73(VEnv * env) {
 static VDebugInfo dbg = { "_V0append__improper_k73" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0append__improper_k73, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.125 0 0) ((bruijn car 10 4) (close _V0append__improper_k74) (bruijn a 1 1)) ((bruijn null? 10 6) (close _V0append__improper_k77) (bruijn a 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0append__improper_k74, env)}),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0append__improper_k77, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0append__improper_k73, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0append__improper_lambda11(VEnv * env) {
 static VDebugInfo dbg = { "_V0append__improper_lambda11" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0append__improper_lambda11, env) {
 if (env->num_vars == 3) {
  // ((bruijn pair? 9 2) (close _V0append__improper_k73) (bruijn a 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0append__improper_k73, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0append__improper_lambda11, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0free__variables_k41(VEnv * env) {
 static VDebugInfo dbg = { "_V0free__variables_k41" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0free__variables_k41, env) {
 if (env->num_vars == 1) {
  // (set! (close _V0free__variables_k42) (bruijn append-improper 1 2) (close _V0append__improper_lambda11))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0free__variables_k42, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0append__improper_lambda11, env)})
    );
 } else {
  VError("Not enough arguments to _V0free__variables_k41, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0merge_k81(VEnv * env) {
 static VDebugInfo dbg = { "_V0merge_k81" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0merge_k81, env) {
 if (env->num_vars == 1) {
  // ((bruijn merge 5 1) (bruijn ##k.138 4 0) (bruijn ##x.148 0 0) (bruijn b 4 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VGetArg(env, 4, 0),
      env->vars[0],
      VGetArg(env, 4, 2)
    );
 } else {
  VError("Not enough arguments to _V0merge_k81, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0merge_k84(VEnv * env) {
 static VDebugInfo dbg = { "_V0merge_k84" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0merge_k84, env) {
 if (env->num_vars == 1) {
  // ((bruijn merge 7 1) (bruijn ##k.138 6 0) (bruijn ##x.151 2 0) (bruijn ##x.152 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      VGetArg(env, 6, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0merge_k84, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0merge_k83(VEnv * env) {
 static VDebugInfo dbg = { "_V0merge_k83" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0merge_k83, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 13 1) (close _V0merge_k84) (bruijn ##x.153 0 0) (bruijn b 5 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0merge_k84, env)}),
      env->vars[0],
      VGetArg(env, 5, 2)
    );
 } else {
  VError("Not enough arguments to _V0merge_k83, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0merge_k82(VEnv * env) {
 static VDebugInfo dbg = { "_V0merge_k82" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0merge_k82, env) {
 if (env->num_vars == 1) {
  // ((bruijn car 12 4) (close _V0merge_k83) (bruijn a 4 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0merge_k83, env)}),
      VGetArg(env, 4, 1)
    );
 } else {
  VError("Not enough arguments to _V0merge_k82, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0merge_k80(VEnv * env) {
 static VDebugInfo dbg = { "_V0merge_k80" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0merge_k80, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.145 0 0) ((bruijn cdr 11 3) (close _V0merge_k81) (bruijn a 3 1)) ((bruijn cdr 11 3) (close _V0merge_k82) (bruijn a 3 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0merge_k81, env)}),
      env->up->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0merge_k82, env)}),
      env->up->up->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0merge_k80, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0merge_k79(VEnv * env) {
 static VDebugInfo dbg = { "_V0merge_k79" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0merge_k79, env) {
 if (env->num_vars == 1) {
  // ((bruijn memv 10 13) (close _V0merge_k80) (bruijn ##x.154 0 0) (bruijn b 2 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 13)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0merge_k80, env)}),
      env->vars[0],
      env->up->up->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0merge_k79, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0merge_k78(VEnv * env) {
 static VDebugInfo dbg = { "_V0merge_k78" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0merge_k78, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.140 0 0) ((bruijn ##k.138 1 0) (bruijn b 1 2)) ((bruijn car 9 4) (close _V0merge_k79) (bruijn a 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->up->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 4)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0merge_k79, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0merge_k78, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0merge_lambda12(VEnv * env) {
 static VDebugInfo dbg = { "_V0merge_lambda12" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0merge_lambda12, env) {
 if (env->num_vars == 3) {
  // ((bruijn null? 8 6) (close _V0merge_k78) (bruijn a 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0merge_k78, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0merge_lambda12, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void _V0free__variables_lambda6(VEnv * env) {
 static VDebugInfo dbg = { "_V0free__variables_lambda6" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0free__variables_lambda6, env) {
  // (set! (close _V0free__variables_k41) (bruijn merge 0 1) (close _V0merge_lambda12))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0free__variables_k41, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0merge_lambda12, env)})
    );
 }
}
static void _V0free__variables_lambda5(VEnv * env) {
 static VDebugInfo dbg = { "_V0free__variables_lambda5" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0free__variables_lambda5, env) {
 if (env->num_vars == 2) {
  // ((close _V0free__variables_lambda6) (bruijn ##k.37 0 0) #f #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0free__variables_lambda6, env)},
      env->vars[0],
      VEncodeBool(false),
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0free__variables_lambda5, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void variables_k39(VEnv * env) {
 static VDebugInfo dbg = { "variables_k39" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k39, env) {
 if (env->num_vars == 1) {
  // (set! (close variables_k40) (bruijn free-variables 4 5) (close _V0free__variables_lambda5))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k40, env)}),
      VEncodeInt(4l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0free__variables_lambda5, env)})
    );
 } else {
  VError("Not enough arguments to variables_k39, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k159(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k159" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k159, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.529 0 0) ((bruijn ##k.157 75 0) (##string ##string.847)) ((bruijn ##k.157 75 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 75, 0)),
      VEncodePointer(&_V10string_D847.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 75, 0)),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k159, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k158(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k158" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k158, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.524 0 0) ((bruijn ##k.157 74 0) (##string ##string.846)) ((bruijn eqv? 79 5) (close _V0lookup__intrinsic_k159) (bruijn ##x.3 74 1) (quote ##sys.command-line)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 74, 0)),
      VEncodePointer(&_V10string_D846.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 79, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k159, env)}),
      VGetArg(env, 74, 1),
      VEncodePointer(&_V10sys_Dcommand__line.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k158, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k157(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k157" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k157, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.519 0 0) ((bruijn ##k.157 73 0) (##string ##string.845)) ((bruijn eqv? 78 5) (close _V0lookup__intrinsic_k158) (bruijn ##x.3 73 1) (quote ##sys.make-temporary-file)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 73, 0)),
      VEncodePointer(&_V10string_D845.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 78, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k158, env)}),
      VGetArg(env, 73, 1),
      VEncodePointer(&_V10sys_Dmake__temporary__file.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k157, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k156(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k156" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k156, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.514 0 0) ((bruijn ##k.157 72 0) (##string ##string.844)) ((bruijn eqv? 77 5) (close _V0lookup__intrinsic_k157) (bruijn ##x.3 72 1) (quote ##sys.open-output-process)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 72, 0)),
      VEncodePointer(&_V10string_D844.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 77, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k157, env)}),
      VGetArg(env, 72, 1),
      VEncodePointer(&_V10sys_Dopen__output__process.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k156, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k155(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k155" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k155, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.509 0 0) ((bruijn ##k.157 71 0) (##string ##string.843)) ((bruijn eqv? 76 5) (close _V0lookup__intrinsic_k156) (bruijn ##x.3 71 1) (quote ##sys.open-input-process)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 71, 0)),
      VEncodePointer(&_V10string_D843.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 76, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k156, env)}),
      VGetArg(env, 71, 1),
      VEncodePointer(&_V10sys_Dopen__input__process.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k155, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k154(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k154" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k154, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.504 0 0) ((bruijn ##k.157 70 0) (##string ##string.842)) ((bruijn eqv? 75 5) (close _V0lookup__intrinsic_k155) (bruijn ##x.3 70 1) (quote ##sys.system)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 70, 0)),
      VEncodePointer(&_V10string_D842.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 75, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k155, env)}),
      VGetArg(env, 70, 1),
      VEncodePointer(&_V10sys_Dsystem.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k154, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k153(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k153" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k153, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.499 0 0) ((bruijn ##k.157 69 0) (##string ##string.841)) ((bruijn eqv? 74 5) (close _V0lookup__intrinsic_k154) (bruijn ##x.3 69 1) (quote ##sys.newline)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 69, 0)),
      VEncodePointer(&_V10string_D841.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 74, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k154, env)}),
      VGetArg(env, 69, 1),
      VEncodePointer(&_V10sys_Dnewline.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k153, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k152(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k152" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k152, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.494 0 0) ((bruijn ##k.157 68 0) (##string ##string.840)) ((bruijn eqv? 73 5) (close _V0lookup__intrinsic_k153) (bruijn ##x.3 68 1) (quote ##sys.write)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 68, 0)),
      VEncodePointer(&_V10string_D840.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 73, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k153, env)}),
      VGetArg(env, 68, 1),
      VEncodePointer(&_V10sys_Dwrite.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k152, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k151(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k151" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k151, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.489 0 0) ((bruijn ##k.157 67 0) (##string ##string.839)) ((bruijn eqv? 72 5) (close _V0lookup__intrinsic_k152) (bruijn ##x.3 67 1) (quote ##sys.display-word)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 67, 0)),
      VEncodePointer(&_V10string_D839.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 72, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k152, env)}),
      VGetArg(env, 67, 1),
      VEncodePointer(&_V10sys_Ddisplay__word.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k151, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k150(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k150" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k150, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.484 0 0) ((bruijn ##k.157 66 0) (##string ##string.838)) ((bruijn eqv? 71 5) (close _V0lookup__intrinsic_k151) (bruijn ##x.3 66 1) (quote ##sys.read)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 66, 0)),
      VEncodePointer(&_V10string_D838.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 71, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k151, env)}),
      VGetArg(env, 66, 1),
      VEncodePointer(&_V10sys_Dread.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k150, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k149(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k149" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k149, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.479 0 0) ((bruijn ##k.157 65 0) (##string ##string.837)) ((bruijn eqv? 70 5) (close _V0lookup__intrinsic_k150) (bruijn ##x.3 65 1) (quote ##sys.read-line)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 65, 0)),
      VEncodePointer(&_V10string_D837.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 70, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k150, env)}),
      VGetArg(env, 65, 1),
      VEncodePointer(&_V10sys_Dread__line.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k149, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k148(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k148" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k148, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.474 0 0) ((bruijn ##k.157 64 0) (##string ##string.836)) ((bruijn eqv? 69 5) (close _V0lookup__intrinsic_k149) (bruijn ##x.3 64 1) (quote ##sys.read-char)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 64, 0)),
      VEncodePointer(&_V10string_D836.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 69, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k149, env)}),
      VGetArg(env, 64, 1),
      VEncodePointer(&_V10sys_Dread__char.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k148, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k147(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k147" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k147, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.469 0 0) ((bruijn ##k.157 63 0) (##string ##string.835)) ((bruijn eqv? 68 5) (close _V0lookup__intrinsic_k148) (bruijn ##x.3 63 1) (quote ##sys.eof-object?)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 63, 0)),
      VEncodePointer(&_V10string_D835.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 68, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k148, env)}),
      VGetArg(env, 63, 1),
      VEncodePointer(&_V10sys_Deof__object_Q.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k147, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k146(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k146" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k146, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.464 0 0) ((bruijn ##k.157 62 0) (##string ##string.834)) ((bruijn eqv? 67 5) (close _V0lookup__intrinsic_k147) (bruijn ##x.3 62 1) (quote ##sys.get-output-string)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 62, 0)),
      VEncodePointer(&_V10string_D834.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 67, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k147, env)}),
      VGetArg(env, 62, 1),
      VEncodePointer(&_V10sys_Dget__output__string.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k146, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k145(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k145" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k145, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.459 0 0) ((bruijn ##k.157 61 0) (##string ##string.833)) ((bruijn eqv? 66 5) (close _V0lookup__intrinsic_k146) (bruijn ##x.3 61 1) (quote ##sys.open-output-string)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 61, 0)),
      VEncodePointer(&_V10string_D833.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 66, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k146, env)}),
      VGetArg(env, 61, 1),
      VEncodePointer(&_V10sys_Dopen__output__string.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k145, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k144(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k144" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k144, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.454 0 0) ((bruijn ##k.157 60 0) (##string ##string.832)) ((bruijn eqv? 65 5) (close _V0lookup__intrinsic_k145) (bruijn ##x.3 60 1) (quote ##sys.close-stream)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 60, 0)),
      VEncodePointer(&_V10string_D832.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 65, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k145, env)}),
      VGetArg(env, 60, 1),
      VEncodePointer(&_V10sys_Dclose__stream.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k144, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k143(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k143" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k143, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.449 0 0) ((bruijn ##k.157 59 0) (##string ##string.831)) ((bruijn eqv? 64 5) (close _V0lookup__intrinsic_k144) (bruijn ##x.3 59 1) (quote ##sys.open-output-stream)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 59, 0)),
      VEncodePointer(&_V10string_D831.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 64, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k144, env)}),
      VGetArg(env, 59, 1),
      VEncodePointer(&_V10sys_Dopen__output__stream.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k143, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k142(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k142" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k142, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.444 0 0) ((bruijn ##k.157 58 0) (##string ##string.830)) ((bruijn eqv? 63 5) (close _V0lookup__intrinsic_k143) (bruijn ##x.3 58 1) (quote ##sys.open-input-stream)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 58, 0)),
      VEncodePointer(&_V10string_D830.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 63, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k143, env)}),
      VGetArg(env, 58, 1),
      VEncodePointer(&_V10sys_Dopen__input__stream.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k142, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k141(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k141" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k141, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.439 0 0) ((bruijn ##k.157 57 0) (##string ##string.829)) ((bruijn eqv? 62 5) (close _V0lookup__intrinsic_k142) (bruijn ##x.3 57 1) (quote ##sys.dup-stderr)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 57, 0)),
      VEncodePointer(&_V10string_D829.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 62, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k142, env)}),
      VGetArg(env, 57, 1),
      VEncodePointer(&_V10sys_Ddup__stderr.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k141, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k140(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k140" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k140, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.434 0 0) ((bruijn ##k.157 56 0) (##string ##string.828)) ((bruijn eqv? 61 5) (close _V0lookup__intrinsic_k141) (bruijn ##x.3 56 1) (quote ##sys.dup-stdout)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 56, 0)),
      VEncodePointer(&_V10string_D828.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 61, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k141, env)}),
      VGetArg(env, 56, 1),
      VEncodePointer(&_V10sys_Ddup__stdout.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k140, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k139(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k139" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k139, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.429 0 0) ((bruijn ##k.157 55 0) (##string ##string.827)) ((bruijn eqv? 60 5) (close _V0lookup__intrinsic_k140) (bruijn ##x.3 55 1) (quote ##sys.dup-stdin)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 55, 0)),
      VEncodePointer(&_V10string_D827.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 60, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k140, env)}),
      VGetArg(env, 55, 1),
      VEncodePointer(&_V10sys_Ddup__stdin.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k139, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k138(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k138" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k138, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.424 0 0) ((bruijn ##k.157 54 0) (##string ##string.826)) ((bruijn eqv? 59 5) (close _V0lookup__intrinsic_k139) (bruijn ##x.3 54 1) (quote ##sys.char-integer)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 54, 0)),
      VEncodePointer(&_V10string_D826.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 59, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k139, env)}),
      VGetArg(env, 54, 1),
      VEncodePointer(&_V10sys_Dchar__integer.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k138, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k137(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k137" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k137, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.419 0 0) ((bruijn ##k.157 53 0) (##string ##string.825)) ((bruijn eqv? 58 5) (close _V0lookup__intrinsic_k138) (bruijn ##x.3 53 1) (quote ##sys.symbol->string)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 53, 0)),
      VEncodePointer(&_V10string_D825.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 58, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k138, env)}),
      VGetArg(env, 53, 1),
      VEncodePointer(&_V10sys_Dsymbol___Gstring.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k137, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k136(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k136" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k136, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.414 0 0) ((bruijn ##k.157 52 0) (##string ##string.824)) ((bruijn eqv? 57 5) (close _V0lookup__intrinsic_k137) (bruijn ##x.3 52 1) (quote ##sys.string->number)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 52, 0)),
      VEncodePointer(&_V10string_D824.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 57, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k137, env)}),
      VGetArg(env, 52, 1),
      VEncodePointer(&_V10sys_Dstring___Gnumber.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k136, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k135(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k135" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k135, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.409 0 0) ((bruijn ##k.157 51 0) (##string ##string.823)) ((bruijn eqv? 56 5) (close _V0lookup__intrinsic_k136) (bruijn ##x.3 51 1) (quote ##sys.string->symbol)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 51, 0)),
      VEncodePointer(&_V10string_D823.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 56, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k136, env)}),
      VGetArg(env, 51, 1),
      VEncodePointer(&_V10sys_Dstring___Gsymbol.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k135, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k134(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k134" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k134, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.404 0 0) ((bruijn ##k.157 50 0) (##string ##string.822)) ((bruijn eqv? 55 5) (close _V0lookup__intrinsic_k135) (bruijn ##x.3 50 1) (quote ##sys.string-length)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 50, 0)),
      VEncodePointer(&_V10string_D822.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 55, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k135, env)}),
      VGetArg(env, 50, 1),
      VEncodePointer(&_V10sys_Dstring__length.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k134, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k133(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k133" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k133, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.399 0 0) ((bruijn ##k.157 49 0) (##string ##string.821)) ((bruijn eqv? 54 5) (close _V0lookup__intrinsic_k134) (bruijn ##x.3 49 1) (quote ##sys.string-set!)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 49, 0)),
      VEncodePointer(&_V10string_D821.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 54, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k134, env)}),
      VGetArg(env, 49, 1),
      VEncodePointer(&_V10sys_Dstring__set_B.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k133, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k132(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k132" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k132, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.394 0 0) ((bruijn ##k.157 48 0) (##string ##string.820)) ((bruijn eqv? 53 5) (close _V0lookup__intrinsic_k133) (bruijn ##x.3 48 1) (quote ##sys.string-ref)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 48, 0)),
      VEncodePointer(&_V10string_D820.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 53, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k133, env)}),
      VGetArg(env, 48, 1),
      VEncodePointer(&_V10sys_Dstring__ref.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k132, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k131(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k131" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k131, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.389 0 0) ((bruijn ##k.157 47 0) (##string ##string.819)) ((bruijn eqv? 52 5) (close _V0lookup__intrinsic_k132) (bruijn ##x.3 47 1) (quote ##sys.string-copy!)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 47, 0)),
      VEncodePointer(&_V10string_D819.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 52, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k132, env)}),
      VGetArg(env, 47, 1),
      VEncodePointer(&_V10sys_Dstring__copy_B.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k131, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k130(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k130" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k130, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.384 0 0) ((bruijn ##k.157 46 0) (##string ##string.818)) ((bruijn eqv? 51 5) (close _V0lookup__intrinsic_k131) (bruijn ##x.3 46 1) (quote ##sys.substring)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 46, 0)),
      VEncodePointer(&_V10string_D818.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 51, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k131, env)}),
      VGetArg(env, 46, 1),
      VEncodePointer(&_V10sys_Dsubstring.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k130, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k129(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k129" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k129, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.379 0 0) ((bruijn ##k.157 45 0) (##string ##string.817)) ((bruijn eqv? 50 5) (close _V0lookup__intrinsic_k130) (bruijn ##x.3 45 1) (quote ##sys.make-string)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 45, 0)),
      VEncodePointer(&_V10string_D817.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 50, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k130, env)}),
      VGetArg(env, 45, 1),
      VEncodePointer(&_V10sys_Dmake__string.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k129, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k128(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k128" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k128, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.374 0 0) ((bruijn ##k.157 44 0) (##string ##string.816)) ((bruijn eqv? 49 5) (close _V0lookup__intrinsic_k129) (bruijn ##x.3 44 1) (quote ##sys.vector-length)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 44, 0)),
      VEncodePointer(&_V10string_D816.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 49, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k129, env)}),
      VGetArg(env, 44, 1),
      VEncodePointer(&_V10sys_Dvector__length.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k128, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k127(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k127" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k127, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.369 0 0) ((bruijn ##k.157 43 0) (##string ##string.815)) ((bruijn eqv? 48 5) (close _V0lookup__intrinsic_k128) (bruijn ##x.3 43 1) (quote ##sys.vector-set!)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 43, 0)),
      VEncodePointer(&_V10string_D815.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 48, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k128, env)}),
      VGetArg(env, 43, 1),
      VEncodePointer(&_V10sys_Dvector__set_B.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k127, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k126(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k126" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k126, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.364 0 0) ((bruijn ##k.157 42 0) (##string ##string.814)) ((bruijn eqv? 47 5) (close _V0lookup__intrinsic_k127) (bruijn ##x.3 42 1) (quote ##sys.vector-ref)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 42, 0)),
      VEncodePointer(&_V10string_D814.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 47, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k127, env)}),
      VGetArg(env, 42, 1),
      VEncodePointer(&_V10sys_Dvector__ref.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k126, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k125(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k125" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k125, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.359 0 0) ((bruijn ##k.157 41 0) (##string ##string.813)) ((bruijn eqv? 46 5) (close _V0lookup__intrinsic_k126) (bruijn ##x.3 41 1) (quote ##sys.list->vector)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 41, 0)),
      VEncodePointer(&_V10string_D813.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 46, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k126, env)}),
      VGetArg(env, 41, 1),
      VEncodePointer(&_V10sys_Dlist___Gvector.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k125, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k124(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k124" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k124, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.354 0 0) ((bruijn ##k.157 40 0) (##string ##string.812)) ((bruijn eqv? 45 5) (close _V0lookup__intrinsic_k125) (bruijn ##x.3 40 1) (quote ##sys.set-cdr!)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 40, 0)),
      VEncodePointer(&_V10string_D812.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 45, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k125, env)}),
      VGetArg(env, 40, 1),
      VEncodePointer(&_V10sys_Dset__cdr_B.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k124, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k123(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k123" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k123, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.349 0 0) ((bruijn ##k.157 39 0) (##string ##string.811)) ((bruijn eqv? 44 5) (close _V0lookup__intrinsic_k124) (bruijn ##x.3 39 1) (quote ##sys.set-car!)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 39, 0)),
      VEncodePointer(&_V10string_D811.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 44, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k124, env)}),
      VGetArg(env, 39, 1),
      VEncodePointer(&_V10sys_Dset__car_B.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k123, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k122(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k122" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k122, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.344 0 0) ((bruijn ##k.157 38 0) (##string ##string.810)) ((bruijn eqv? 43 5) (close _V0lookup__intrinsic_k123) (bruijn ##x.3 38 1) (quote ##sys.cdr)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 38, 0)),
      VEncodePointer(&_V10string_D810.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 43, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k123, env)}),
      VGetArg(env, 38, 1),
      VEncodePointer(&_V10sys_Dcdr.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k122, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k198(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k198" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k198, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.529 0 0) ((bruijn ##k.157 76 0) (##string ##string.847)) ((bruijn ##k.157 76 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 76, 0)),
      VEncodePointer(&_V10string_D847.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 76, 0)),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k198, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k197(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k197" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k197, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.524 0 0) ((bruijn ##k.157 75 0) (##string ##string.846)) ((bruijn eqv? 80 5) (close _V0lookup__intrinsic_k198) (bruijn ##x.3 75 1) (quote ##sys.command-line)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 75, 0)),
      VEncodePointer(&_V10string_D846.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 80, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k198, env)}),
      VGetArg(env, 75, 1),
      VEncodePointer(&_V10sys_Dcommand__line.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k197, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k196(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k196" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k196, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.519 0 0) ((bruijn ##k.157 74 0) (##string ##string.845)) ((bruijn eqv? 79 5) (close _V0lookup__intrinsic_k197) (bruijn ##x.3 74 1) (quote ##sys.make-temporary-file)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 74, 0)),
      VEncodePointer(&_V10string_D845.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 79, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k197, env)}),
      VGetArg(env, 74, 1),
      VEncodePointer(&_V10sys_Dmake__temporary__file.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k196, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k195(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k195" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k195, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.514 0 0) ((bruijn ##k.157 73 0) (##string ##string.844)) ((bruijn eqv? 78 5) (close _V0lookup__intrinsic_k196) (bruijn ##x.3 73 1) (quote ##sys.open-output-process)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 73, 0)),
      VEncodePointer(&_V10string_D844.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 78, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k196, env)}),
      VGetArg(env, 73, 1),
      VEncodePointer(&_V10sys_Dopen__output__process.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k195, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k194(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k194" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k194, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.509 0 0) ((bruijn ##k.157 72 0) (##string ##string.843)) ((bruijn eqv? 77 5) (close _V0lookup__intrinsic_k195) (bruijn ##x.3 72 1) (quote ##sys.open-input-process)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 72, 0)),
      VEncodePointer(&_V10string_D843.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 77, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k195, env)}),
      VGetArg(env, 72, 1),
      VEncodePointer(&_V10sys_Dopen__input__process.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k194, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k193(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k193" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k193, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.504 0 0) ((bruijn ##k.157 71 0) (##string ##string.842)) ((bruijn eqv? 76 5) (close _V0lookup__intrinsic_k194) (bruijn ##x.3 71 1) (quote ##sys.system)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 71, 0)),
      VEncodePointer(&_V10string_D842.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 76, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k194, env)}),
      VGetArg(env, 71, 1),
      VEncodePointer(&_V10sys_Dsystem.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k193, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k192(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k192" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k192, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.499 0 0) ((bruijn ##k.157 70 0) (##string ##string.841)) ((bruijn eqv? 75 5) (close _V0lookup__intrinsic_k193) (bruijn ##x.3 70 1) (quote ##sys.newline)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 70, 0)),
      VEncodePointer(&_V10string_D841.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 75, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k193, env)}),
      VGetArg(env, 70, 1),
      VEncodePointer(&_V10sys_Dnewline.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k192, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k191(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k191" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k191, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.494 0 0) ((bruijn ##k.157 69 0) (##string ##string.840)) ((bruijn eqv? 74 5) (close _V0lookup__intrinsic_k192) (bruijn ##x.3 69 1) (quote ##sys.write)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 69, 0)),
      VEncodePointer(&_V10string_D840.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 74, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k192, env)}),
      VGetArg(env, 69, 1),
      VEncodePointer(&_V10sys_Dwrite.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k191, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k190(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k190" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k190, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.489 0 0) ((bruijn ##k.157 68 0) (##string ##string.839)) ((bruijn eqv? 73 5) (close _V0lookup__intrinsic_k191) (bruijn ##x.3 68 1) (quote ##sys.display-word)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 68, 0)),
      VEncodePointer(&_V10string_D839.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 73, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k191, env)}),
      VGetArg(env, 68, 1),
      VEncodePointer(&_V10sys_Ddisplay__word.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k190, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k189(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k189" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k189, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.484 0 0) ((bruijn ##k.157 67 0) (##string ##string.838)) ((bruijn eqv? 72 5) (close _V0lookup__intrinsic_k190) (bruijn ##x.3 67 1) (quote ##sys.read)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 67, 0)),
      VEncodePointer(&_V10string_D838.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 72, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k190, env)}),
      VGetArg(env, 67, 1),
      VEncodePointer(&_V10sys_Dread.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k189, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k188(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k188" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k188, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.479 0 0) ((bruijn ##k.157 66 0) (##string ##string.837)) ((bruijn eqv? 71 5) (close _V0lookup__intrinsic_k189) (bruijn ##x.3 66 1) (quote ##sys.read-line)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 66, 0)),
      VEncodePointer(&_V10string_D837.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 71, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k189, env)}),
      VGetArg(env, 66, 1),
      VEncodePointer(&_V10sys_Dread__line.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k188, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k187(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k187" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k187, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.474 0 0) ((bruijn ##k.157 65 0) (##string ##string.836)) ((bruijn eqv? 70 5) (close _V0lookup__intrinsic_k188) (bruijn ##x.3 65 1) (quote ##sys.read-char)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 65, 0)),
      VEncodePointer(&_V10string_D836.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 70, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k188, env)}),
      VGetArg(env, 65, 1),
      VEncodePointer(&_V10sys_Dread__char.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k187, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k186(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k186" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k186, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.469 0 0) ((bruijn ##k.157 64 0) (##string ##string.835)) ((bruijn eqv? 69 5) (close _V0lookup__intrinsic_k187) (bruijn ##x.3 64 1) (quote ##sys.eof-object?)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 64, 0)),
      VEncodePointer(&_V10string_D835.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 69, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k187, env)}),
      VGetArg(env, 64, 1),
      VEncodePointer(&_V10sys_Deof__object_Q.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k186, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k185(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k185" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k185, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.464 0 0) ((bruijn ##k.157 63 0) (##string ##string.834)) ((bruijn eqv? 68 5) (close _V0lookup__intrinsic_k186) (bruijn ##x.3 63 1) (quote ##sys.get-output-string)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 63, 0)),
      VEncodePointer(&_V10string_D834.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 68, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k186, env)}),
      VGetArg(env, 63, 1),
      VEncodePointer(&_V10sys_Dget__output__string.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k185, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k184(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k184" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k184, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.459 0 0) ((bruijn ##k.157 62 0) (##string ##string.833)) ((bruijn eqv? 67 5) (close _V0lookup__intrinsic_k185) (bruijn ##x.3 62 1) (quote ##sys.open-output-string)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 62, 0)),
      VEncodePointer(&_V10string_D833.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 67, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k185, env)}),
      VGetArg(env, 62, 1),
      VEncodePointer(&_V10sys_Dopen__output__string.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k184, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k183(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k183" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k183, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.454 0 0) ((bruijn ##k.157 61 0) (##string ##string.832)) ((bruijn eqv? 66 5) (close _V0lookup__intrinsic_k184) (bruijn ##x.3 61 1) (quote ##sys.close-stream)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 61, 0)),
      VEncodePointer(&_V10string_D832.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 66, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k184, env)}),
      VGetArg(env, 61, 1),
      VEncodePointer(&_V10sys_Dclose__stream.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k183, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k182(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k182" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k182, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.449 0 0) ((bruijn ##k.157 60 0) (##string ##string.831)) ((bruijn eqv? 65 5) (close _V0lookup__intrinsic_k183) (bruijn ##x.3 60 1) (quote ##sys.open-output-stream)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 60, 0)),
      VEncodePointer(&_V10string_D831.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 65, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k183, env)}),
      VGetArg(env, 60, 1),
      VEncodePointer(&_V10sys_Dopen__output__stream.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k182, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k181(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k181" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k181, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.444 0 0) ((bruijn ##k.157 59 0) (##string ##string.830)) ((bruijn eqv? 64 5) (close _V0lookup__intrinsic_k182) (bruijn ##x.3 59 1) (quote ##sys.open-input-stream)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 59, 0)),
      VEncodePointer(&_V10string_D830.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 64, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k182, env)}),
      VGetArg(env, 59, 1),
      VEncodePointer(&_V10sys_Dopen__input__stream.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k181, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k180(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k180" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k180, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.439 0 0) ((bruijn ##k.157 58 0) (##string ##string.829)) ((bruijn eqv? 63 5) (close _V0lookup__intrinsic_k181) (bruijn ##x.3 58 1) (quote ##sys.dup-stderr)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 58, 0)),
      VEncodePointer(&_V10string_D829.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 63, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k181, env)}),
      VGetArg(env, 58, 1),
      VEncodePointer(&_V10sys_Ddup__stderr.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k180, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k179(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k179" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k179, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.434 0 0) ((bruijn ##k.157 57 0) (##string ##string.828)) ((bruijn eqv? 62 5) (close _V0lookup__intrinsic_k180) (bruijn ##x.3 57 1) (quote ##sys.dup-stdout)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 57, 0)),
      VEncodePointer(&_V10string_D828.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 62, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k180, env)}),
      VGetArg(env, 57, 1),
      VEncodePointer(&_V10sys_Ddup__stdout.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k179, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k178(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k178" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k178, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.429 0 0) ((bruijn ##k.157 56 0) (##string ##string.827)) ((bruijn eqv? 61 5) (close _V0lookup__intrinsic_k179) (bruijn ##x.3 56 1) (quote ##sys.dup-stdin)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 56, 0)),
      VEncodePointer(&_V10string_D827.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 61, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k179, env)}),
      VGetArg(env, 56, 1),
      VEncodePointer(&_V10sys_Ddup__stdin.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k178, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k177(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k177" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k177, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.424 0 0) ((bruijn ##k.157 55 0) (##string ##string.826)) ((bruijn eqv? 60 5) (close _V0lookup__intrinsic_k178) (bruijn ##x.3 55 1) (quote ##sys.char-integer)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 55, 0)),
      VEncodePointer(&_V10string_D826.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 60, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k178, env)}),
      VGetArg(env, 55, 1),
      VEncodePointer(&_V10sys_Dchar__integer.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k177, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k176(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k176" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k176, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.419 0 0) ((bruijn ##k.157 54 0) (##string ##string.825)) ((bruijn eqv? 59 5) (close _V0lookup__intrinsic_k177) (bruijn ##x.3 54 1) (quote ##sys.symbol->string)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 54, 0)),
      VEncodePointer(&_V10string_D825.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 59, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k177, env)}),
      VGetArg(env, 54, 1),
      VEncodePointer(&_V10sys_Dsymbol___Gstring.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k176, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k175(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k175" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k175, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.414 0 0) ((bruijn ##k.157 53 0) (##string ##string.824)) ((bruijn eqv? 58 5) (close _V0lookup__intrinsic_k176) (bruijn ##x.3 53 1) (quote ##sys.string->number)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 53, 0)),
      VEncodePointer(&_V10string_D824.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 58, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k176, env)}),
      VGetArg(env, 53, 1),
      VEncodePointer(&_V10sys_Dstring___Gnumber.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k175, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k174(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k174" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k174, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.409 0 0) ((bruijn ##k.157 52 0) (##string ##string.823)) ((bruijn eqv? 57 5) (close _V0lookup__intrinsic_k175) (bruijn ##x.3 52 1) (quote ##sys.string->symbol)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 52, 0)),
      VEncodePointer(&_V10string_D823.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 57, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k175, env)}),
      VGetArg(env, 52, 1),
      VEncodePointer(&_V10sys_Dstring___Gsymbol.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k174, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k173(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k173" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k173, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.404 0 0) ((bruijn ##k.157 51 0) (##string ##string.822)) ((bruijn eqv? 56 5) (close _V0lookup__intrinsic_k174) (bruijn ##x.3 51 1) (quote ##sys.string-length)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 51, 0)),
      VEncodePointer(&_V10string_D822.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 56, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k174, env)}),
      VGetArg(env, 51, 1),
      VEncodePointer(&_V10sys_Dstring__length.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k173, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k172(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k172" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k172, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.399 0 0) ((bruijn ##k.157 50 0) (##string ##string.821)) ((bruijn eqv? 55 5) (close _V0lookup__intrinsic_k173) (bruijn ##x.3 50 1) (quote ##sys.string-set!)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 50, 0)),
      VEncodePointer(&_V10string_D821.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 55, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k173, env)}),
      VGetArg(env, 50, 1),
      VEncodePointer(&_V10sys_Dstring__set_B.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k172, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k171(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k171" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k171, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.394 0 0) ((bruijn ##k.157 49 0) (##string ##string.820)) ((bruijn eqv? 54 5) (close _V0lookup__intrinsic_k172) (bruijn ##x.3 49 1) (quote ##sys.string-ref)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 49, 0)),
      VEncodePointer(&_V10string_D820.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 54, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k172, env)}),
      VGetArg(env, 49, 1),
      VEncodePointer(&_V10sys_Dstring__ref.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k171, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k170(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k170" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k170, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.389 0 0) ((bruijn ##k.157 48 0) (##string ##string.819)) ((bruijn eqv? 53 5) (close _V0lookup__intrinsic_k171) (bruijn ##x.3 48 1) (quote ##sys.string-copy!)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 48, 0)),
      VEncodePointer(&_V10string_D819.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 53, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k171, env)}),
      VGetArg(env, 48, 1),
      VEncodePointer(&_V10sys_Dstring__copy_B.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k170, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k169(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k169" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k169, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.384 0 0) ((bruijn ##k.157 47 0) (##string ##string.818)) ((bruijn eqv? 52 5) (close _V0lookup__intrinsic_k170) (bruijn ##x.3 47 1) (quote ##sys.substring)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 47, 0)),
      VEncodePointer(&_V10string_D818.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 52, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k170, env)}),
      VGetArg(env, 47, 1),
      VEncodePointer(&_V10sys_Dsubstring.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k169, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k168(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k168" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k168, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.379 0 0) ((bruijn ##k.157 46 0) (##string ##string.817)) ((bruijn eqv? 51 5) (close _V0lookup__intrinsic_k169) (bruijn ##x.3 46 1) (quote ##sys.make-string)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 46, 0)),
      VEncodePointer(&_V10string_D817.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 51, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k169, env)}),
      VGetArg(env, 46, 1),
      VEncodePointer(&_V10sys_Dmake__string.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k168, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k167(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k167" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k167, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.374 0 0) ((bruijn ##k.157 45 0) (##string ##string.816)) ((bruijn eqv? 50 5) (close _V0lookup__intrinsic_k168) (bruijn ##x.3 45 1) (quote ##sys.vector-length)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 45, 0)),
      VEncodePointer(&_V10string_D816.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 50, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k168, env)}),
      VGetArg(env, 45, 1),
      VEncodePointer(&_V10sys_Dvector__length.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k167, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k166(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k166" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k166, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.369 0 0) ((bruijn ##k.157 44 0) (##string ##string.815)) ((bruijn eqv? 49 5) (close _V0lookup__intrinsic_k167) (bruijn ##x.3 44 1) (quote ##sys.vector-set!)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 44, 0)),
      VEncodePointer(&_V10string_D815.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 49, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k167, env)}),
      VGetArg(env, 44, 1),
      VEncodePointer(&_V10sys_Dvector__set_B.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k166, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k165(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k165" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k165, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.364 0 0) ((bruijn ##k.157 43 0) (##string ##string.814)) ((bruijn eqv? 48 5) (close _V0lookup__intrinsic_k166) (bruijn ##x.3 43 1) (quote ##sys.vector-ref)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 43, 0)),
      VEncodePointer(&_V10string_D814.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 48, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k166, env)}),
      VGetArg(env, 43, 1),
      VEncodePointer(&_V10sys_Dvector__ref.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k165, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k164(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k164" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k164, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.359 0 0) ((bruijn ##k.157 42 0) (##string ##string.813)) ((bruijn eqv? 47 5) (close _V0lookup__intrinsic_k165) (bruijn ##x.3 42 1) (quote ##sys.list->vector)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 42, 0)),
      VEncodePointer(&_V10string_D813.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 47, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k165, env)}),
      VGetArg(env, 42, 1),
      VEncodePointer(&_V10sys_Dlist___Gvector.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k164, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k163(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k163" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k163, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.354 0 0) ((bruijn ##k.157 41 0) (##string ##string.812)) ((bruijn eqv? 46 5) (close _V0lookup__intrinsic_k164) (bruijn ##x.3 41 1) (quote ##sys.set-cdr!)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 41, 0)),
      VEncodePointer(&_V10string_D812.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 46, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k164, env)}),
      VGetArg(env, 41, 1),
      VEncodePointer(&_V10sys_Dset__cdr_B.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k163, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k162(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k162" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k162, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.349 0 0) ((bruijn ##k.157 40 0) (##string ##string.811)) ((bruijn eqv? 45 5) (close _V0lookup__intrinsic_k163) (bruijn ##x.3 40 1) (quote ##sys.set-car!)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 40, 0)),
      VEncodePointer(&_V10string_D811.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 45, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k163, env)}),
      VGetArg(env, 40, 1),
      VEncodePointer(&_V10sys_Dset__car_B.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k162, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k161(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k161" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k161, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.344 0 0) ((bruijn ##k.157 39 0) (##string ##string.810)) ((bruijn eqv? 44 5) (close _V0lookup__intrinsic_k162) (bruijn ##x.3 39 1) (quote ##sys.cdr)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 39, 0)),
      VEncodePointer(&_V10string_D810.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 44, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k162, env)}),
      VGetArg(env, 39, 1),
      VEncodePointer(&_V10sys_Dcdr.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k161, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k160(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k160" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k160, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.536 0 0) ((bruijn ##k.157 38 0) (##string ##string.809)) ((bruijn eqv? 43 5) (close _V0lookup__intrinsic_k161) (bruijn ##x.3 38 1) (quote ##sys.car)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 38, 0)),
      VEncodePointer(&_V10string_D809.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 43, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k161, env)}),
      VGetArg(env, 38, 1),
      VEncodePointer(&_V10sys_Dcar.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k160, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k121(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k121" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k121, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.534 0 0) (if (bruijn ##x.534 0 0) ((bruijn ##k.157 37 0) (##string ##string.809)) ((bruijn eqv? 42 5) (close _V0lookup__intrinsic_k122) (bruijn ##x.3 37 1) (quote ##sys.car))) ((bruijn eqv? 42 5) (close _V0lookup__intrinsic_k160) (bruijn ##x.3 37 1) (quote ##sys.qcons)))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 0)),
      VEncodePointer(&_V10string_D809.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 42, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k122, env)}),
      VGetArg(env, 37, 1),
      VEncodePointer(&_V10sys_Dcar.sym, VPOINTER_OTHER)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 42, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k160, env)}),
      VGetArg(env, 37, 1),
      VEncodePointer(&_V10sys_Dqcons.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k121, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k120(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k120" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k120, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.334 0 0) ((bruijn ##k.157 36 0) (##string ##string.808)) ((bruijn eqv? 41 5) (close _V0lookup__intrinsic_k121) (bruijn ##x.3 36 1) (quote ##sys.cons)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 0)),
      VEncodePointer(&_V10string_D808.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 41, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k121, env)}),
      VGetArg(env, 36, 1),
      VEncodePointer(&_V10sys_Dcons.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k120, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k119(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k119" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k119, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.329 0 0) ((bruijn ##k.157 35 0) (##string ##string.807)) ((bruijn eqv? 40 5) (close _V0lookup__intrinsic_k120) (bruijn ##x.3 35 1) (quote ##vcore.lookup-library)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 0)),
      VEncodePointer(&_V10string_D807.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 40, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k120, env)}),
      VGetArg(env, 35, 1),
      VEncodePointer(&_V10vcore_Dlookup__library.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k119, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k118(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k118" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k118, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.324 0 0) ((bruijn ##k.157 34 0) (##string ##string.806)) ((bruijn eqv? 39 5) (close _V0lookup__intrinsic_k119) (bruijn ##x.3 34 1) (quote ##vcore.multidefine)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 0)),
      VEncodePointer(&_V10string_D806.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 39, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k119, env)}),
      VGetArg(env, 34, 1),
      VEncodePointer(&_V10vcore_Dmultidefine.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k118, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k117(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k117" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k117, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.319 0 0) ((bruijn ##k.157 33 0) (##string ##string.805)) ((bruijn eqv? 38 5) (close _V0lookup__intrinsic_k118) (bruijn ##x.3 33 1) (quote ##vcore.define)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 0)),
      VEncodePointer(&_V10string_D805.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 38, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k118, env)}),
      VGetArg(env, 33, 1),
      VEncodePointer(&_V10vcore_Ddefine.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k117, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k116(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k116" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k116, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.314 0 0) ((bruijn ##k.157 32 0) (##string ##string.804)) ((bruijn eqv? 37 5) (close _V0lookup__intrinsic_k117) (bruijn ##x.3 32 1) (quote ##vcore.function)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 0)),
      VEncodePointer(&_V10string_D804.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 37, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k117, env)}),
      VGetArg(env, 32, 1),
      VEncodePointer(&_V10vcore_Dfunction.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k116, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k115(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k115" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k115, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.309 0 0) ((bruijn ##k.157 31 0) (##string ##string.803)) ((bruijn eqv? 36 5) (close _V0lookup__intrinsic_k116) (bruijn ##x.3 31 1) (quote ##sys.import)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 0)),
      VEncodePointer(&_V10string_D803.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 36, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k116, env)}),
      VGetArg(env, 31, 1),
      VEncodePointer(&_V10sys_Dimport.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k115, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k114(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k114" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k114, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.304 0 0) ((bruijn ##k.157 30 0) (##string ##string.802)) ((bruijn eqv? 35 5) (close _V0lookup__intrinsic_k115) (bruijn ##x.3 30 1) (quote ##sys.exit)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 0)),
      VEncodePointer(&_V10string_D802.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k115, env)}),
      VGetArg(env, 30, 1),
      VEncodePointer(&_V10sys_Dexit.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k114, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k113(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k113" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k113, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.299 0 0) ((bruijn ##k.157 29 0) (##string ##string.801)) ((bruijn eqv? 34 5) (close _V0lookup__intrinsic_k114) (bruijn ##x.3 29 1) (quote ##sys.abort)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 0)),
      VEncodePointer(&_V10string_D801.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k114, env)}),
      VGetArg(env, 29, 1),
      VEncodePointer(&_V10sys_Dabort.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k113, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k112(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k112" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k112, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.294 0 0) ((bruijn ##k.157 28 0) (##string ##string.800)) ((bruijn eqv? 33 5) (close _V0lookup__intrinsic_k113) (bruijn ##x.3 28 1) (quote ##sys.apply)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 0)),
      VEncodePointer(&_V10string_D800.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k113, env)}),
      VGetArg(env, 28, 1),
      VEncodePointer(&_V10sys_Dapply.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k112, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k111(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k111" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k111, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.289 0 0) ((bruijn ##k.157 27 0) (##string ##string.799)) ((bruijn eqv? 32 5) (close _V0lookup__intrinsic_k112) (bruijn ##x.3 27 1) (quote ##sys.call-with-values)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 0)),
      VEncodePointer(&_V10string_D799.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k112, env)}),
      VGetArg(env, 27, 1),
      VEncodePointer(&_V10sys_Dcall__with__values.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k111, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k110(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k110" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k110, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.284 0 0) ((bruijn ##k.157 26 0) (##string ##string.798)) ((bruijn eqv? 31 5) (close _V0lookup__intrinsic_k111) (bruijn ##x.3 26 1) (quote ##sys.call/cc)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 0)),
      VEncodePointer(&_V10string_D798.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k111, env)}),
      VGetArg(env, 26, 1),
      VEncodePointer(&_V10sys_Dcall_Wcc.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k110, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k109(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k109" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k109, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.279 0 0) ((bruijn ##k.157 25 0) (##string ##string.797)) ((bruijn eqv? 30 5) (close _V0lookup__intrinsic_k110) (bruijn ##x.3 25 1) (quote ##sys.next)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 0)),
      VEncodePointer(&_V10string_D797.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k110, env)}),
      VGetArg(env, 25, 1),
      VEncodePointer(&_V10sys_Dnext.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k109, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k108(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k108" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k108, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.274 0 0) ((bruijn ##k.157 24 0) #t) ((bruijn eqv? 29 5) (close _V0lookup__intrinsic_k109) (bruijn ##x.3 24 1) (quote ##sys.not)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 0)),
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k109, env)}),
      VGetArg(env, 24, 1),
      VEncodePointer(&_V10sys_Dnot.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k108, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k107(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k107" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k107, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.269 0 0) ((bruijn ##k.157 23 0) #t) ((bruijn eqv? 28 5) (close _V0lookup__intrinsic_k108) (bruijn ##x.3 23 1) (quote ##sys.or)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 0)),
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k108, env)}),
      VGetArg(env, 23, 1),
      VEncodePointer(&_V10sys_Dor.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k107, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k106(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k106" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k106, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.264 0 0) ((bruijn ##k.157 22 0) #t) ((bruijn eqv? 27 5) (close _V0lookup__intrinsic_k107) (bruijn ##x.3 22 1) (quote ##sys.and)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 0)),
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k107, env)}),
      VGetArg(env, 22, 1),
      VEncodePointer(&_V10sys_Dand.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k106, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k105(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k105" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k105, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.259 0 0) ((bruijn ##k.157 21 0) #t) ((bruijn eqv? 26 5) (close _V0lookup__intrinsic_k106) (bruijn ##x.3 21 1) (quote ##sys.begin)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 0)),
      VEncodeBool(true)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k106, env)}),
      VGetArg(env, 21, 1),
      VEncodePointer(&_V10sys_Dbegin.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k105, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k104(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k104" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k104, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.254 0 0) ((bruijn ##k.157 20 0) (##string ##string.796)) ((bruijn eqv? 25 5) (close _V0lookup__intrinsic_k105) (bruijn ##x.3 20 1) (quote ##sys.if)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 0)),
      VEncodePointer(&_V10string_D796.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k105, env)}),
      VGetArg(env, 20, 1),
      VEncodePointer(&_V10sys_Dif.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k104, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k103(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k103" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k103, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.249 0 0) ((bruijn ##k.157 19 0) (##string ##string.795)) ((bruijn eqv? 24 5) (close _V0lookup__intrinsic_k104) (bruijn ##x.3 19 1) (quote ##sys.blob=?)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 0)),
      VEncodePointer(&_V10string_D795.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k104, env)}),
      VGetArg(env, 19, 1),
      VEncodePointer(&_V10sys_Dblob_E_Q.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k103, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k102(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k102" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k102, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.244 0 0) ((bruijn ##k.157 18 0) (##string ##string.794)) ((bruijn eqv? 23 5) (close _V0lookup__intrinsic_k103) (bruijn ##x.3 18 1) (quote ##sys.symbol=?)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 0)),
      VEncodePointer(&_V10string_D794.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k103, env)}),
      VGetArg(env, 18, 1),
      VEncodePointer(&_V10sys_Dsymbol_E_Q.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k102, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k101(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k101" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k101, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.239 0 0) ((bruijn ##k.157 17 0) (##string ##string.793)) ((bruijn eqv? 22 5) (close _V0lookup__intrinsic_k102) (bruijn ##x.3 17 1) (quote ##sys.eq?)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 0)),
      VEncodePointer(&_V10string_D793.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k102, env)}),
      VGetArg(env, 17, 1),
      VEncodePointer(&_V10sys_Deq_Q.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k101, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k100(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k100" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k100, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.234 0 0) ((bruijn ##k.157 16 0) (##string ##string.792)) ((bruijn eqv? 21 5) (close _V0lookup__intrinsic_k101) (bruijn ##x.3 16 1) (quote ##sys.char?)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 0)),
      VEncodePointer(&_V10string_D792.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k101, env)}),
      VGetArg(env, 16, 1),
      VEncodePointer(&_V10sys_Dchar_Q.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k100, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k99(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k99" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k99, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.229 0 0) ((bruijn ##k.157 15 0) (##string ##string.791)) ((bruijn eqv? 20 5) (close _V0lookup__intrinsic_k100) (bruijn ##x.3 15 1) (quote ##sys.double?)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 0)),
      VEncodePointer(&_V10string_D791.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k100, env)}),
      VGetArg(env, 15, 1),
      VEncodePointer(&_V10sys_Ddouble_Q.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k99, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k98(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k98" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k98, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.224 0 0) ((bruijn ##k.157 14 0) (##string ##string.790)) ((bruijn eqv? 19 5) (close _V0lookup__intrinsic_k99) (bruijn ##x.3 14 1) (quote ##sys.int?)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 0)),
      VEncodePointer(&_V10string_D790.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k99, env)}),
      VGetArg(env, 14, 1),
      VEncodePointer(&_V10sys_Dint_Q.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k98, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k97(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k97" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k97, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.219 0 0) ((bruijn ##k.157 13 0) (##string ##string.789)) ((bruijn eqv? 18 5) (close _V0lookup__intrinsic_k98) (bruijn ##x.3 13 1) (quote ##sys.string?)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 0)),
      VEncodePointer(&_V10string_D789.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k98, env)}),
      VGetArg(env, 13, 1),
      VEncodePointer(&_V10sys_Dstring_Q.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k97, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k96(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k96" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k96, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.214 0 0) ((bruijn ##k.157 12 0) (##string ##string.788)) ((bruijn eqv? 17 5) (close _V0lookup__intrinsic_k97) (bruijn ##x.3 12 1) (quote ##sys.symbol?)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 0)),
      VEncodePointer(&_V10string_D788.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k97, env)}),
      VGetArg(env, 12, 1),
      VEncodePointer(&_V10sys_Dsymbol_Q.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k96, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k95(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k95" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k95, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.209 0 0) ((bruijn ##k.157 11 0) (##string ##string.787)) ((bruijn eqv? 16 5) (close _V0lookup__intrinsic_k96) (bruijn ##x.3 11 1) (quote ##sys.blob?)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 0)),
      VEncodePointer(&_V10string_D787.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k96, env)}),
      VGetArg(env, 11, 1),
      VEncodePointer(&_V10sys_Dblob_Q.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k95, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k94(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k94" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k94, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.204 0 0) ((bruijn ##k.157 10 0) (##string ##string.786)) ((bruijn eqv? 15 5) (close _V0lookup__intrinsic_k95) (bruijn ##x.3 10 1) (quote ##sys.procedure?)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 0)),
      VEncodePointer(&_V10string_D786.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k95, env)}),
      VGetArg(env, 10, 1),
      VEncodePointer(&_V10sys_Dprocedure_Q.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k94, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k93(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k93" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k93, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.199 0 0) ((bruijn ##k.157 9 0) (##string ##string.785)) ((bruijn eqv? 14 5) (close _V0lookup__intrinsic_k94) (bruijn ##x.3 9 1) (quote ##sys.vector?)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 0)),
      VEncodePointer(&_V10string_D785.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k94, env)}),
      VGetArg(env, 9, 1),
      VEncodePointer(&_V10sys_Dvector_Q.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k93, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k92(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k92" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k92, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.194 0 0) ((bruijn ##k.157 8 0) (##string ##string.784)) ((bruijn eqv? 13 5) (close _V0lookup__intrinsic_k93) (bruijn ##x.3 8 1) (quote ##sys.pair?)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 0)),
      VEncodePointer(&_V10string_D784.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k93, env)}),
      VGetArg(env, 8, 1),
      VEncodePointer(&_V10sys_Dpair_Q.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k92, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k91(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k91" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k91, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.189 0 0) ((bruijn ##k.157 7 0) (##string ##string.783)) ((bruijn eqv? 12 5) (close _V0lookup__intrinsic_k92) (bruijn ##x.3 7 1) (quote ##sys.null?)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 0)),
      VEncodePointer(&_V10string_D783.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k92, env)}),
      VGetArg(env, 7, 1),
      VEncodePointer(&_V10sys_Dnull_Q.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k91, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k90(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k90" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k90, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.184 0 0) ((bruijn ##k.157 6 0) (##string ##string.782)) ((bruijn eqv? 11 5) (close _V0lookup__intrinsic_k91) (bruijn ##x.3 6 1) (quote ##sys.remainder)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 0)),
      VEncodePointer(&_V10string_D782.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k91, env)}),
      VGetArg(env, 6, 1),
      VEncodePointer(&_V10sys_Dremainder.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k90, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k89(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k89" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k89, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.179 0 0) ((bruijn ##k.157 5 0) (##string ##string.781)) ((bruijn eqv? 10 5) (close _V0lookup__intrinsic_k90) (bruijn ##x.3 5 1) (quote ##sys.quotient)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 0)),
      VEncodePointer(&_V10string_D781.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k90, env)}),
      VGetArg(env, 5, 1),
      VEncodePointer(&_V10sys_Dquotient.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k89, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k88(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k88" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k88, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.174 0 0) ((bruijn ##k.157 4 0) (##string ##string.780)) ((bruijn eqv? 9 5) (close _V0lookup__intrinsic_k89) (bruijn ##x.3 4 1) (quote ##sys.cmp)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 0)),
      VEncodePointer(&_V10string_D780.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k89, env)}),
      VGetArg(env, 4, 1),
      VEncodePointer(&_V10sys_Dcmp.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k88, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k87(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k87" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k87, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.169 0 0) ((bruijn ##k.157 3 0) (##string ##string.779)) ((bruijn eqv? 8 5) (close _V0lookup__intrinsic_k88) (bruijn ##x.3 3 1) (quote ##sys./)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[0]),
      VEncodePointer(&_V10string_D779.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k88, env)}),
      env->up->up->up->vars[1],
      VEncodePointer(&_V10sys_D_W.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k87, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k86(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k86" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k86, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.164 0 0) ((bruijn ##k.157 2 0) (##string ##string.778)) ((bruijn eqv? 7 5) (close _V0lookup__intrinsic_k87) (bruijn ##x.3 2 1) (quote ##sys.*)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VEncodePointer(&_V10string_D778.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k87, env)}),
      env->up->up->vars[1],
      VEncodePointer(&_V10sys_D_S.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k86, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_k85(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_k85" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_k85, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.159 0 0) ((bruijn ##k.157 1 0) (##string ##string.777)) ((bruijn eqv? 6 5) (close _V0lookup__intrinsic_k86) (bruijn ##x.3 1 1) (quote ##sys.-)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodePointer(&_V10string_D777.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k86, env)}),
      env->up->vars[1],
      VEncodePointer(&_V10sys_D__.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_k85, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__intrinsic_lambda13(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__intrinsic_lambda13" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__intrinsic_lambda13, env) {
 if (env->num_vars == 2) {
  // ((bruijn eqv? 5 5) (close _V0lookup__intrinsic_k85) (bruijn ##x.3 0 1) (quote ##sys.+))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_k85, env)}),
      env->vars[1],
      VEncodePointer(&_V10sys_D_P.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0lookup__intrinsic_lambda13, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void variables_k38(VEnv * env) {
 static VDebugInfo dbg = { "variables_k38" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k38, env) {
 if (env->num_vars == 1) {
  // (set! (close variables_k39) (bruijn lookup-intrinsic 3 4) (close _V0lookup__intrinsic_lambda13))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k39, env)}),
      VEncodeInt(3l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__intrinsic_lambda13, env)})
    );
 } else {
  VError("Not enough arguments to variables_k38, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__inline_k205(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__inline_k205" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__inline_k205, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.571 0 0) ((bruijn ##k.539 7 0) (##string ##string.854)) ((bruijn ##k.539 7 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 0)),
      VEncodePointer(&_V10string_D854.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 0)),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__inline_k205, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__inline_k204(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__inline_k204" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__inline_k204, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.566 0 0) ((bruijn ##k.539 6 0) (##string ##string.853)) ((bruijn eqv? 10 5) (close _V0lookup__inline_k205) (bruijn ##x.2 6 1) (quote ##sys.cdr)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 0)),
      VEncodePointer(&_V10string_D853.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__inline_k205, env)}),
      VGetArg(env, 6, 1),
      VEncodePointer(&_V10sys_Dcdr.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__inline_k204, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__inline_k208(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__inline_k208" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__inline_k208, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.571 0 0) ((bruijn ##k.539 8 0) (##string ##string.854)) ((bruijn ##k.539 8 0) #f))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 0)),
      VEncodePointer(&_V10string_D854.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 0)),
      VEncodeBool(false)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__inline_k208, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__inline_k207(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__inline_k207" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__inline_k207, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.566 0 0) ((bruijn ##k.539 7 0) (##string ##string.853)) ((bruijn eqv? 11 5) (close _V0lookup__inline_k208) (bruijn ##x.2 7 1) (quote ##sys.cdr)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 0)),
      VEncodePointer(&_V10string_D853.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__inline_k208, env)}),
      VGetArg(env, 7, 1),
      VEncodePointer(&_V10sys_Dcdr.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__inline_k207, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__inline_k206(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__inline_k206" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__inline_k206, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.578 0 0) ((bruijn ##k.539 6 0) (##string ##string.852)) ((bruijn eqv? 10 5) (close _V0lookup__inline_k207) (bruijn ##x.2 6 1) (quote ##sys.car)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 0)),
      VEncodePointer(&_V10string_D852.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__inline_k207, env)}),
      VGetArg(env, 6, 1),
      VEncodePointer(&_V10sys_Dcar.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__inline_k206, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__inline_k203(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__inline_k203" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__inline_k203, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.576 0 0) (if (bruijn ##x.576 0 0) ((bruijn ##k.539 5 0) (##string ##string.852)) ((bruijn eqv? 9 5) (close _V0lookup__inline_k204) (bruijn ##x.2 5 1) (quote ##sys.car))) ((bruijn eqv? 9 5) (close _V0lookup__inline_k206) (bruijn ##x.2 5 1) (quote ##sys.qcons)))
if(VDecodeBool(
env->vars[0])) {
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 0)),
      VEncodePointer(&_V10string_D852.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__inline_k204, env)}),
      VGetArg(env, 5, 1),
      VEncodePointer(&_V10sys_Dcar.sym, VPOINTER_OTHER)
    );
}
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__inline_k206, env)}),
      VGetArg(env, 5, 1),
      VEncodePointer(&_V10sys_Dqcons.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__inline_k203, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__inline_k202(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__inline_k202" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__inline_k202, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.556 0 0) ((bruijn ##k.539 4 0) (##string ##string.851)) ((bruijn eqv? 8 5) (close _V0lookup__inline_k203) (bruijn ##x.2 4 1) (quote ##sys.cons)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 0)),
      VEncodePointer(&_V10string_D851.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__inline_k203, env)}),
      VGetArg(env, 4, 1),
      VEncodePointer(&_V10sys_Dcons.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__inline_k202, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__inline_k201(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__inline_k201" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__inline_k201, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.551 0 0) ((bruijn ##k.539 3 0) (##string ##string.850)) ((bruijn eqv? 7 5) (close _V0lookup__inline_k202) (bruijn ##x.2 3 1) (quote ##sys.eq?)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[0]),
      VEncodePointer(&_V10string_D850.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__inline_k202, env)}),
      env->up->up->up->vars[1],
      VEncodePointer(&_V10sys_Deq_Q.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__inline_k201, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__inline_k200(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__inline_k200" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__inline_k200, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.546 0 0) ((bruijn ##k.539 2 0) (##string ##string.849)) ((bruijn eqv? 6 5) (close _V0lookup__inline_k201) (bruijn ##x.2 2 1) (quote ##sys.not)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VEncodePointer(&_V10string_D849.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__inline_k201, env)}),
      env->up->up->vars[1],
      VEncodePointer(&_V10sys_Dnot.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__inline_k200, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__inline_k199(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__inline_k199" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__inline_k199, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.541 0 0) ((bruijn ##k.539 1 0) (##string ##string.848)) ((bruijn eqv? 5 5) (close _V0lookup__inline_k200) (bruijn ##x.2 1 1) (quote ##sys.pair?)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodePointer(&_V10string_D848.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__inline_k200, env)}),
      env->up->vars[1],
      VEncodePointer(&_V10sys_Dpair_Q.sym, VPOINTER_OTHER)
    );
}
 } else {
  VError("Not enough arguments to _V0lookup__inline_k199, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0lookup__inline_lambda14(VEnv * env) {
 static VDebugInfo dbg = { "_V0lookup__inline_lambda14" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0lookup__inline_lambda14, env) {
 if (env->num_vars == 2) {
  // ((bruijn eqv? 4 5) (close _V0lookup__inline_k199) (bruijn ##x.2 0 1) (quote ##sys.null?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__inline_k199, env)}),
      env->vars[1],
      VEncodePointer(&_V10sys_Dnull_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to _V0lookup__inline_lambda14, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void variables_k37(VEnv * env) {
 static VDebugInfo dbg = { "variables_k37" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k37, env) {
 if (env->num_vars == 1) {
  // (set! (close variables_k38) (bruijn lookup-inline 2 3) (close _V0lookup__inline_lambda14))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k38, env)}),
      VEncodeInt(2l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0lookup__inline_lambda14, env)})
    );
 } else {
  VError("Not enough arguments to variables_k37, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0mangle__library_k212(VEnv * env) {
 static VDebugInfo dbg = { "_V0mangle__library_k212" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0mangle__library_k212, env) {
 if (env->num_vars == 1) {
  // ((bruijn fold 7 16) (bruijn ##k.579 4 0) (bruijn string-append 7 17) (##string ##string.855) (bruijn ##x.589 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 16)),
      VGetArg(env, 4, 0),
      VGetArg(env, 7, 17),
      VEncodePointer(&_V10string_D855.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0mangle__library_k212, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0mangle__library_k211(VEnv * env) {
 static VDebugInfo dbg = { "_V0mangle__library_k211" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0mangle__library_k211, env) {
 if (env->num_vars == 1) {
  // ((bruijn reverse 6 20) (close _V0mangle__library_k212) (bruijn ##x.590 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 20)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0mangle__library_k212, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0mangle__library_k211, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0mangle__library_k214(VEnv * env) {
 static VDebugInfo dbg = { "_V0mangle__library_k214" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0mangle__library_k214, env) {
 if (env->num_vars == 1) {
  // ((bruijn symbol->string 8 19) (bruijn ##k.591 2 0) (bruijn ##x.596 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 19)),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0mangle__library_k214, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0mangle__library_k213(VEnv * env) {
 static VDebugInfo dbg = { "_V0mangle__library_k213" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0mangle__library_k213, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.593 0 0) ((bruijn mangle-symbol 6 1) (close _V0mangle__library_k214) (bruijn e 1 1)) ((bruijn error 7 21) (bruijn ##k.591 1 0) (##string ##string.856) (bruijn e 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0mangle__library_k214, env)}),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 21)),
      env->up->vars[0],
      VEncodePointer(&_V10string_D856.sym, VPOINTER_OTHER),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0mangle__library_k213, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0mangle__library_lambda16(VEnv * env) {
 static VDebugInfo dbg = { "_V0mangle__library_lambda16" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0mangle__library_lambda16, env) {
 if (env->num_vars == 2) {
  // ((bruijn symbol? 6 14) (close _V0mangle__library_k213) (bruijn e 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 14)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0mangle__library_k213, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0mangle__library_lambda16, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0mangle__library_k210(VEnv * env) {
 static VDebugInfo dbg = { "_V0mangle__library_k210" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0mangle__library_k210, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.586 0 0) ((bruijn map 5 18) (close _V0mangle__library_k211) (close _V0mangle__library_lambda16) (bruijn lib 2 1)) ((bruijn error 5 21) (bruijn ##k.579 2 0) (##string ##string.857) (bruijn lib 2 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 18)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0mangle__library_k211, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0mangle__library_lambda16, env)}),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 21)),
      env->up->up->vars[0],
      VEncodePointer(&_V10string_D857.sym, VPOINTER_OTHER),
      env->up->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0mangle__library_k210, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0mangle__library_k209(VEnv * env) {
 static VDebugInfo dbg = { "_V0mangle__library_k209" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0mangle__library_k209, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.581 0 0) ((bruijn ##k.579 1 0) (bruijn lib 1 1)) ((bruijn pair? 4 2) (close _V0mangle__library_k210) (bruijn lib 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      env->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 2)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0mangle__library_k210, env)}),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0mangle__library_k209, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0mangle__library_lambda15(VEnv * env) {
 static VDebugInfo dbg = { "_V0mangle__library_lambda15" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0mangle__library_lambda15, env) {
 if (env->num_vars == 2) {
  // ((bruijn string? 3 15) (close _V0mangle__library_k209) (bruijn lib 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[15]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0mangle__library_k209, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0mangle__library_lambda15, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void variables_k36(VEnv * env) {
 static VDebugInfo dbg = { "variables_k36" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k36, env) {
 if (env->num_vars == 1) {
  // (set! (close variables_k37) (bruijn mangle-library 1 2) (close _V0mangle__library_lambda15))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k37, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0mangle__library_lambda15, env)})
    );
 } else {
  VError("Not enough arguments to variables_k36, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0mangle__symbol_k221(VEnv * env) {
 static VDebugInfo dbg = { "_V0mangle__symbol_k221" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0mangle__symbol_k221, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.612 1 0) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to _V0mangle__symbol_k221, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k224(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k224" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k224, env) {
 if (env->num_vars == 1) {
  // ((bruijn string->symbol 17 27) (bruijn ##k.622 1 0) (bruijn ret 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 27)),
      env->up->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k224, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda23(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda23" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda23, env) {
  // ((bruijn close-port 16 28) (close _V0loop_k224) (bruijn port 8 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k224, env)}),
      VGetArg(env, 8, 1)
    );
 }
}
static void _V0loop_k223(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k223" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k223, env) {
 if (env->num_vars == 1) {
  // ((close _V0loop_lambda23) (bruijn ##k.617 2 0) (bruijn ##x.627 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda23, env)},
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k223, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k244(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k244" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k244, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.727 0 0) ((bruijn ##k.635 19 0) (##string ##string.876)) ((bruijn string-ref 35 25) (bruijn ##k.635 19 0) (bruijn str 31 1) (bruijn i 22 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 0)),
      VEncodePointer(&_V10string_D876.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 25)),
      VGetArg(env, 19, 0),
      VGetArg(env, 31, 1),
      VGetArg(env, 22, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k244, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k243(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k243" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k243, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.722 0 0) ((bruijn ##k.635 18 0) (##string ##string.875)) ((bruijn eqv? 34 5) (close _V0loop_k244) (bruijn ##x.1 18 1) (quote #\@)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 0)),
      VEncodePointer(&_V10string_D875.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k244, env)}),
      VGetArg(env, 18, 1),
      VEncodeChar('@')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k243, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k242(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k242" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k242, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.717 0 0) ((bruijn ##k.635 17 0) (##string ##string.874)) ((bruijn eqv? 33 5) (close _V0loop_k243) (bruijn ##x.1 17 1) (quote #\.)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 0)),
      VEncodePointer(&_V10string_D874.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k243, env)}),
      VGetArg(env, 17, 1),
      VEncodeChar('.')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k242, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k241(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k241" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k241, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.712 0 0) ((bruijn ##k.635 16 0) (##string ##string.873)) ((bruijn eqv? 32 5) (close _V0loop_k242) (bruijn ##x.1 16 1) (quote #\-)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 0)),
      VEncodePointer(&_V10string_D873.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k242, env)}),
      VGetArg(env, 16, 1),
      VEncodeChar('-')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k241, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k240(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k240" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k240, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.707 0 0) ((bruijn ##k.635 15 0) (##string ##string.872)) ((bruijn eqv? 31 5) (close _V0loop_k241) (bruijn ##x.1 15 1) (quote #\+)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 0)),
      VEncodePointer(&_V10string_D872.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k241, env)}),
      VGetArg(env, 15, 1),
      VEncodeChar('+')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k240, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k239(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k239" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k239, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.702 0 0) ((bruijn ##k.635 14 0) (##string ##string.871)) ((bruijn eqv? 30 5) (close _V0loop_k240) (bruijn ##x.1 14 1) (quote #\~)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 0)),
      VEncodePointer(&_V10string_D871.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k240, env)}),
      VGetArg(env, 14, 1),
      VEncodeChar('~')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k239, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k238(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k238" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k238, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.697 0 0) ((bruijn ##k.635 13 0) (##string ##string.870)) ((bruijn eqv? 29 5) (close _V0loop_k239) (bruijn ##x.1 13 1) (quote #\_)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 0)),
      VEncodePointer(&_V10string_D870.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k239, env)}),
      VGetArg(env, 13, 1),
      VEncodeChar('_')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k238, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k237(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k237" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k237, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.692 0 0) ((bruijn ##k.635 12 0) (##string ##string.869)) ((bruijn eqv? 28 5) (close _V0loop_k238) (bruijn ##x.1 12 1) (quote #\^)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 0)),
      VEncodePointer(&_V10string_D869.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k238, env)}),
      VGetArg(env, 12, 1),
      VEncodeChar('^')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k237, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k236(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k236" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k236, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.687 0 0) ((bruijn ##k.635 11 0) (##string ##string.868)) ((bruijn eqv? 27 5) (close _V0loop_k237) (bruijn ##x.1 11 1) (quote #\?)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 0)),
      VEncodePointer(&_V10string_D868.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k237, env)}),
      VGetArg(env, 11, 1),
      VEncodeChar('?')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k236, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k235(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k235" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k235, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.682 0 0) ((bruijn ##k.635 10 0) (##string ##string.867)) ((bruijn eqv? 26 5) (close _V0loop_k236) (bruijn ##x.1 10 1) (quote #\>)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 0)),
      VEncodePointer(&_V10string_D867.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k236, env)}),
      VGetArg(env, 10, 1),
      VEncodeChar('>')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k235, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k234(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k234" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k234, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.677 0 0) ((bruijn ##k.635 9 0) (##string ##string.866)) ((bruijn eqv? 25 5) (close _V0loop_k235) (bruijn ##x.1 9 1) (quote #\=)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 0)),
      VEncodePointer(&_V10string_D866.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k235, env)}),
      VGetArg(env, 9, 1),
      VEncodeChar('=')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k234, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k233(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k233" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k233, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.672 0 0) ((bruijn ##k.635 8 0) (##string ##string.865)) ((bruijn eqv? 24 5) (close _V0loop_k234) (bruijn ##x.1 8 1) (quote #\<)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 0)),
      VEncodePointer(&_V10string_D865.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k234, env)}),
      VGetArg(env, 8, 1),
      VEncodeChar('<')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k233, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k232(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k232" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k232, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.667 0 0) ((bruijn ##k.635 7 0) (##string ##string.864)) ((bruijn eqv? 23 5) (close _V0loop_k233) (bruijn ##x.1 7 1) (quote #\:)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 0)),
      VEncodePointer(&_V10string_D864.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k233, env)}),
      VGetArg(env, 7, 1),
      VEncodeChar(':')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k232, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k231(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k231" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k231, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.662 0 0) ((bruijn ##k.635 6 0) (##string ##string.863)) ((bruijn eqv? 22 5) (close _V0loop_k232) (bruijn ##x.1 6 1) (quote #\/)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 0)),
      VEncodePointer(&_V10string_D863.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k232, env)}),
      VGetArg(env, 6, 1),
      VEncodeChar('/')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k231, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k230(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k230" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k230, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.657 0 0) ((bruijn ##k.635 5 0) (##string ##string.862)) ((bruijn eqv? 21 5) (close _V0loop_k231) (bruijn ##x.1 5 1) (quote #\*)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 0)),
      VEncodePointer(&_V10string_D862.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k231, env)}),
      VGetArg(env, 5, 1),
      VEncodeChar('*')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k230, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k229(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k229" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k229, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.652 0 0) ((bruijn ##k.635 4 0) (##string ##string.861)) ((bruijn eqv? 20 5) (close _V0loop_k230) (bruijn ##x.1 4 1) (quote #\&)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 0)),
      VEncodePointer(&_V10string_D861.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k230, env)}),
      VGetArg(env, 4, 1),
      VEncodeChar('&')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k229, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k228(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k228" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k228, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.647 0 0) ((bruijn ##k.635 3 0) (##string ##string.860)) ((bruijn eqv? 19 5) (close _V0loop_k229) (bruijn ##x.1 3 1) (quote #\%)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[0]),
      VEncodePointer(&_V10string_D860.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k229, env)}),
      env->up->up->up->vars[1],
      VEncodeChar('%')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k228, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k227(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k227" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k227, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.642 0 0) ((bruijn ##k.635 2 0) (##string ##string.859)) ((bruijn eqv? 18 5) (close _V0loop_k228) (bruijn ##x.1 2 1) (quote #\$)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VEncodePointer(&_V10string_D859.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k228, env)}),
      env->up->up->vars[1],
      VEncodeChar('$')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k227, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k226(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k226" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k226, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.637 0 0) ((bruijn ##k.635 1 0) (##string ##string.858)) ((bruijn eqv? 17 5) (close _V0loop_k227) (bruijn ##x.1 1 1) (quote #\!)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodePointer(&_V10string_D858.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k227, env)}),
      env->up->vars[1],
      VEncodeChar('!')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k226, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda24(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda24" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda24, env) {
  // ((bruijn eqv? 16 5) (close _V0loop_k226) (bruijn ##x.1 0 1) (quote #\#))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k226, env)}),
      env->vars[1],
      VEncodeChar('#')
    );
 }
}
static void _V0loop_k247(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k247" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k247, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 6 1) (bruijn ##k.617 5 0) (bruijn ##x.633 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VGetArg(env, 5, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k247, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k246(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k246" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k246, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 17 23) (close _V0loop_k247) (bruijn i 4 1) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 23)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k247, env)}),
      VGetArg(env, 4, 1),
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k246, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k245(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k245" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k245, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 16 24) (close _V0loop_k246) (bruijn ##x.634 0 0) (bruijn port 8 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k246, env)}),
      env->vars[0],
      VGetArg(env, 8, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k245, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k225(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k225" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k225, env) {
 if (env->num_vars == 1) {
  // ((close _V0loop_lambda24) (close _V0loop_k245) (bruijn ##x.732 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda24, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k245, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k225, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k222(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k222" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k222, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.619 0 0) ((bruijn get-output-string 14 26) (close _V0loop_k223) (bruijn port 6 1)) ((bruijn string-ref 14 25) (close _V0loop_k225) (bruijn str 10 1) (bruijn i 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 26)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k223, env)}),
      VGetArg(env, 6, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 25)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k225, env)}),
      VGetArg(env, 10, 1),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k222, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda22(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda22" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda22, env) {
 if (env->num_vars == 2) {
  // ((bruijn = 13 29) (close _V0loop_k222) (bruijn i 0 1) (bruijn strlen 7 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k222, env)}),
      env->vars[1],
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda22, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0mangle__symbol_lambda21(VEnv * env) {
 static VDebugInfo dbg = { "_V0mangle__symbol_lambda21" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0mangle__symbol_lambda21, env) {
  // (set! (close _V0mangle__symbol_k221) (bruijn loop 0 1) (close _V0loop_lambda22))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0mangle__symbol_k221, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda22, env)})
    );
 }
}
static void _V0mangle__symbol_k220(VEnv * env) {
 static VDebugInfo dbg = { "_V0mangle__symbol_k220" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0mangle__symbol_k220, env) {
 if (env->num_vars == 1) {
  // ((close _V0mangle__symbol_lambda21) (bruijn ##k.607 3 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0mangle__symbol_lambda21, env)},
      env->up->up->up->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0mangle__symbol_k220, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0mangle__symbol_k249(VEnv * env) {
 static VDebugInfo dbg = { "_V0mangle__symbol_k249" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0mangle__symbol_k249, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 1 1) (bruijn ##k.612 1 0) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      env->up->vars[0],
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to _V0mangle__symbol_k249, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k252(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k252" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k252, env) {
 if (env->num_vars == 1) {
  // ((bruijn string->symbol 17 27) (bruijn ##k.622 1 0) (bruijn ret 1 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 27)),
      env->up->vars[0],
      env->up->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0loop_k252, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda27(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda27" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda27, env) {
  // ((bruijn close-port 16 28) (close _V0loop_k252) (bruijn port 8 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 28)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k252, env)}),
      VGetArg(env, 8, 1)
    );
 }
}
static void _V0loop_k251(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k251" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k251, env) {
 if (env->num_vars == 1) {
  // ((close _V0loop_lambda27) (bruijn ##k.617 2 0) (bruijn ##x.627 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda27, env)},
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k251, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k272(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k272" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k272, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.727 0 0) ((bruijn ##k.635 19 0) (##string ##string.876)) ((bruijn string-ref 35 25) (bruijn ##k.635 19 0) (bruijn str 31 1) (bruijn i 22 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 0)),
      VEncodePointer(&_V10string_D876.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 35, 25)),
      VGetArg(env, 19, 0),
      VGetArg(env, 31, 1),
      VGetArg(env, 22, 1)
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k272, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k271(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k271" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k271, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.722 0 0) ((bruijn ##k.635 18 0) (##string ##string.875)) ((bruijn eqv? 34 5) (close _V0loop_k272) (bruijn ##x.1 18 1) (quote #\@)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 0)),
      VEncodePointer(&_V10string_D875.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 34, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k272, env)}),
      VGetArg(env, 18, 1),
      VEncodeChar('@')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k271, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k270(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k270" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k270, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.717 0 0) ((bruijn ##k.635 17 0) (##string ##string.874)) ((bruijn eqv? 33 5) (close _V0loop_k271) (bruijn ##x.1 17 1) (quote #\.)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 0)),
      VEncodePointer(&_V10string_D874.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 33, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k271, env)}),
      VGetArg(env, 17, 1),
      VEncodeChar('.')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k270, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k269(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k269" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k269, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.712 0 0) ((bruijn ##k.635 16 0) (##string ##string.873)) ((bruijn eqv? 32 5) (close _V0loop_k270) (bruijn ##x.1 16 1) (quote #\-)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 0)),
      VEncodePointer(&_V10string_D873.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 32, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k270, env)}),
      VGetArg(env, 16, 1),
      VEncodeChar('-')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k269, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k268(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k268" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k268, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.707 0 0) ((bruijn ##k.635 15 0) (##string ##string.872)) ((bruijn eqv? 31 5) (close _V0loop_k269) (bruijn ##x.1 15 1) (quote #\+)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 0)),
      VEncodePointer(&_V10string_D872.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 31, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k269, env)}),
      VGetArg(env, 15, 1),
      VEncodeChar('+')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k268, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k267(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k267" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k267, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.702 0 0) ((bruijn ##k.635 14 0) (##string ##string.871)) ((bruijn eqv? 30 5) (close _V0loop_k268) (bruijn ##x.1 14 1) (quote #\~)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 0)),
      VEncodePointer(&_V10string_D871.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k268, env)}),
      VGetArg(env, 14, 1),
      VEncodeChar('~')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k267, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k266(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k266" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k266, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.697 0 0) ((bruijn ##k.635 13 0) (##string ##string.870)) ((bruijn eqv? 29 5) (close _V0loop_k267) (bruijn ##x.1 13 1) (quote #\_)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 0)),
      VEncodePointer(&_V10string_D870.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k267, env)}),
      VGetArg(env, 13, 1),
      VEncodeChar('_')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k266, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k265(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k265" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k265, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.692 0 0) ((bruijn ##k.635 12 0) (##string ##string.869)) ((bruijn eqv? 28 5) (close _V0loop_k266) (bruijn ##x.1 12 1) (quote #\^)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 0)),
      VEncodePointer(&_V10string_D869.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k266, env)}),
      VGetArg(env, 12, 1),
      VEncodeChar('^')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k265, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k264(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k264" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k264, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.687 0 0) ((bruijn ##k.635 11 0) (##string ##string.868)) ((bruijn eqv? 27 5) (close _V0loop_k265) (bruijn ##x.1 11 1) (quote #\?)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 0)),
      VEncodePointer(&_V10string_D868.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k265, env)}),
      VGetArg(env, 11, 1),
      VEncodeChar('?')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k264, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k263(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k263" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k263, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.682 0 0) ((bruijn ##k.635 10 0) (##string ##string.867)) ((bruijn eqv? 26 5) (close _V0loop_k264) (bruijn ##x.1 10 1) (quote #\>)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 0)),
      VEncodePointer(&_V10string_D867.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k264, env)}),
      VGetArg(env, 10, 1),
      VEncodeChar('>')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k263, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k262(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k262" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k262, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.677 0 0) ((bruijn ##k.635 9 0) (##string ##string.866)) ((bruijn eqv? 25 5) (close _V0loop_k263) (bruijn ##x.1 9 1) (quote #\=)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 0)),
      VEncodePointer(&_V10string_D866.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k263, env)}),
      VGetArg(env, 9, 1),
      VEncodeChar('=')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k262, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k261(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k261" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k261, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.672 0 0) ((bruijn ##k.635 8 0) (##string ##string.865)) ((bruijn eqv? 24 5) (close _V0loop_k262) (bruijn ##x.1 8 1) (quote #\<)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 0)),
      VEncodePointer(&_V10string_D865.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k262, env)}),
      VGetArg(env, 8, 1),
      VEncodeChar('<')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k261, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k260(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k260" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k260, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.667 0 0) ((bruijn ##k.635 7 0) (##string ##string.864)) ((bruijn eqv? 23 5) (close _V0loop_k261) (bruijn ##x.1 7 1) (quote #\:)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 0)),
      VEncodePointer(&_V10string_D864.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k261, env)}),
      VGetArg(env, 7, 1),
      VEncodeChar(':')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k260, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k259(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k259" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k259, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.662 0 0) ((bruijn ##k.635 6 0) (##string ##string.863)) ((bruijn eqv? 22 5) (close _V0loop_k260) (bruijn ##x.1 6 1) (quote #\/)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 0)),
      VEncodePointer(&_V10string_D863.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k260, env)}),
      VGetArg(env, 6, 1),
      VEncodeChar('/')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k259, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k258(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k258" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k258, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.657 0 0) ((bruijn ##k.635 5 0) (##string ##string.862)) ((bruijn eqv? 21 5) (close _V0loop_k259) (bruijn ##x.1 5 1) (quote #\*)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 0)),
      VEncodePointer(&_V10string_D862.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k259, env)}),
      VGetArg(env, 5, 1),
      VEncodeChar('*')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k258, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k257(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k257" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k257, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.652 0 0) ((bruijn ##k.635 4 0) (##string ##string.861)) ((bruijn eqv? 20 5) (close _V0loop_k258) (bruijn ##x.1 4 1) (quote #\&)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 0)),
      VEncodePointer(&_V10string_D861.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k258, env)}),
      VGetArg(env, 4, 1),
      VEncodeChar('&')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k257, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k256(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k256" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k256, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.647 0 0) ((bruijn ##k.635 3 0) (##string ##string.860)) ((bruijn eqv? 19 5) (close _V0loop_k257) (bruijn ##x.1 3 1) (quote #\%)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[0]),
      VEncodePointer(&_V10string_D860.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k257, env)}),
      env->up->up->up->vars[1],
      VEncodeChar('%')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k256, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k255(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k255" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k255, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.642 0 0) ((bruijn ##k.635 2 0) (##string ##string.859)) ((bruijn eqv? 18 5) (close _V0loop_k256) (bruijn ##x.1 2 1) (quote #\$)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VEncodePointer(&_V10string_D859.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k256, env)}),
      env->up->up->vars[1],
      VEncodeChar('$')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k255, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k254(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k254" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k254, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.637 0 0) ((bruijn ##k.635 1 0) (##string ##string.858)) ((bruijn eqv? 17 5) (close _V0loop_k255) (bruijn ##x.1 1 1) (quote #\!)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VEncodePointer(&_V10string_D858.sym, VPOINTER_OTHER)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k255, env)}),
      env->up->vars[1],
      VEncodeChar('!')
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k254, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda28(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda28" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda28, env) {
  // ((bruijn eqv? 16 5) (close _V0loop_k254) (bruijn ##x.1 0 1) (quote #\#))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 5)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k254, env)}),
      env->vars[1],
      VEncodeChar('#')
    );
 }
}
static void _V0loop_k275(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k275" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k275, env) {
 if (env->num_vars == 1) {
  // ((bruijn loop 6 1) (bruijn ##k.617 5 0) (bruijn ##x.633 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VGetArg(env, 5, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k275, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k274(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k274" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k274, env) {
 if (env->num_vars == 1) {
  // ((bruijn + 17 23) (close _V0loop_k275) (bruijn i 4 1) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 23)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k275, env)}),
      VGetArg(env, 4, 1),
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to _V0loop_k274, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k273(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k273" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k273, env) {
 if (env->num_vars == 1) {
  // ((bruijn display 16 24) (close _V0loop_k274) (bruijn ##x.634 0 0) (bruijn port 8 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k274, env)}),
      env->vars[0],
      VGetArg(env, 8, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_k273, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k253(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k253" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k253, env) {
 if (env->num_vars == 1) {
  // ((close _V0loop_lambda28) (close _V0loop_k273) (bruijn ##x.732 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0loop_lambda28, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k273, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0loop_k253, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_k250(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_k250" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_k250, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.619 0 0) ((bruijn get-output-string 14 26) (close _V0loop_k251) (bruijn port 6 1)) ((bruijn string-ref 14 25) (close _V0loop_k253) (bruijn str 10 1) (bruijn i 1 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 26)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k251, env)}),
      VGetArg(env, 6, 1)
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 25)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k253, env)}),
      VGetArg(env, 10, 1),
      env->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0loop_k250, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0loop_lambda26(VEnv * env) {
 static VDebugInfo dbg = { "_V0loop_lambda26" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0loop_lambda26, env) {
 if (env->num_vars == 2) {
  // ((bruijn = 13 29) (close _V0loop_k250) (bruijn i 0 1) (bruijn strlen 7 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 29)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_k250, env)}),
      env->vars[1],
      VGetArg(env, 7, 1)
    );
 } else {
  VError("Not enough arguments to _V0loop_lambda26, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void _V0mangle__symbol_lambda25(VEnv * env) {
 static VDebugInfo dbg = { "_V0mangle__symbol_lambda25" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0mangle__symbol_lambda25, env) {
  // (set! (close _V0mangle__symbol_k249) (bruijn loop 0 1) (close _V0loop_lambda26))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(_V0mangle__symbol_k249, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0loop_lambda26, env)})
    );
 }
}
static void _V0mangle__symbol_k248(VEnv * env) {
 static VDebugInfo dbg = { "_V0mangle__symbol_k248" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0mangle__symbol_k248, env) {
 if (env->num_vars == 1) {
  // ((close _V0mangle__symbol_lambda25) (bruijn ##k.607 3 0) #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0mangle__symbol_lambda25, env)},
      env->up->up->up->vars[0],
      VEncodeBool(false)
    );
 } else {
  VError("Not enough arguments to _V0mangle__symbol_k248, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0mangle__symbol_k219(VEnv * env) {
 static VDebugInfo dbg = { "_V0mangle__symbol_k219" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0mangle__symbol_k219, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.733 0 0) ((bruijn display 10 24) (close _V0mangle__symbol_k220) (##string ##string.877) (bruijn port 2 1)) ((bruijn display 10 24) (close _V0mangle__symbol_k248) (##string ##string.878) (bruijn port 2 1)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0mangle__symbol_k220, env)}),
      VEncodePointer(&_V10string_D877.sym, VPOINTER_OTHER),
      env->up->up->vars[1]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 24)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0mangle__symbol_k248, env)}),
      VEncodePointer(&_V10string_D878.sym, VPOINTER_OTHER),
      env->up->up->vars[1]
    );
}
 } else {
  VError("Not enough arguments to _V0mangle__symbol_k219, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0mangle__symbol_k218(VEnv * env) {
 static VDebugInfo dbg = { "_V0mangle__symbol_k218" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0mangle__symbol_k218, env) {
 if (env->num_vars == 1) {
  // ((bruijn eq? 9 22) (close _V0mangle__symbol_k219) (bruijn ##x.738 0 0) #\#)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 22)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0mangle__symbol_k219, env)}),
      env->vars[0],
      VEncodeChar('#')
    );
 } else {
  VError("Not enough arguments to _V0mangle__symbol_k218, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0mangle__symbol_lambda20(VEnv * env) {
 static VDebugInfo dbg = { "_V0mangle__symbol_lambda20" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0mangle__symbol_lambda20, env) {
  // ((bruijn string-ref 8 25) (close _V0mangle__symbol_k218) (bruijn str 4 1) 0)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 25)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0mangle__symbol_k218, env)}),
      VGetArg(env, 4, 1),
      VEncodeInt(0l)
    );
 }
}
static void _V0mangle__symbol_k217(VEnv * env) {
 static VDebugInfo dbg = { "_V0mangle__symbol_k217" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0mangle__symbol_k217, env) {
 if (env->num_vars == 1) {
  // ((close _V0mangle__symbol_lambda20) (bruijn ##k.605 1 0) (bruijn ##x.739 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0mangle__symbol_lambda20, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0mangle__symbol_k217, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0mangle__symbol_lambda19(VEnv * env) {
 static VDebugInfo dbg = { "_V0mangle__symbol_lambda19" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0mangle__symbol_lambda19, env) {
  // ((bruijn open-output-string 6 30) (close _V0mangle__symbol_k217))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 30)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0mangle__symbol_k217, env)})
    );
 }
}
static void _V0mangle__symbol_k216(VEnv * env) {
 static VDebugInfo dbg = { "_V0mangle__symbol_k216" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0mangle__symbol_k216, env) {
 if (env->num_vars == 1) {
  // ((close _V0mangle__symbol_lambda19) (bruijn ##k.603 1 0) (bruijn ##x.740 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0mangle__symbol_lambda19, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0mangle__symbol_k216, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0mangle__symbol_lambda18(VEnv * env) {
 static VDebugInfo dbg = { "_V0mangle__symbol_lambda18" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0mangle__symbol_lambda18, env) {
  // ((bruijn string-length 4 31) (close _V0mangle__symbol_k216) (bruijn str 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 31)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0mangle__symbol_k216, env)}),
      env->vars[1]
    );
 }
}
static void _V0mangle__symbol_k215(VEnv * env) {
 static VDebugInfo dbg = { "_V0mangle__symbol_k215" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0mangle__symbol_k215, env) {
 if (env->num_vars == 1) {
  // ((close _V0mangle__symbol_lambda18) (bruijn ##k.601 1 0) (bruijn ##x.741 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(_V0mangle__symbol_lambda18, env)},
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0mangle__symbol_k215, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0mangle__symbol_lambda17(VEnv * env) {
 static VDebugInfo dbg = { "_V0mangle__symbol_lambda17" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0mangle__symbol_lambda17, env) {
 if (env->num_vars == 2) {
  // ((bruijn symbol->string 2 19) (close _V0mangle__symbol_k215) (bruijn sym 0 1))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[19]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0mangle__symbol_k215, env)}),
      env->vars[1]
    );
 } else {
  VError("Not enough arguments to _V0mangle__symbol_lambda17, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void variables_lambda4(VEnv * env) {
 static VDebugInfo dbg = { "variables_lambda4" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_lambda4, env) {
  // (set! (close variables_k36) (bruijn mangle-symbol 0 1) (close _V0mangle__symbol_lambda17))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k36, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0mangle__symbol_lambda17, env)})
    );
 }
}
static void variables_lambda3(VEnv * env) {
 static VDebugInfo dbg = { "variables_lambda3" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_lambda3, env) {
  // ((close variables_lambda4) (bruijn ##k.9 0 0) #f #f #f #f #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(variables_lambda4, env)},
      env->vars[0],
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void variables_k35(VEnv * env) {
 static VDebugInfo dbg = { "variables_k35" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k35, env) {
 if (env->num_vars == 1) {
  // ((close variables_lambda3) (bruijn ##k.7 31 0) (bruijn ##x.742 30 0) (bruijn ##x.743 29 0) (bruijn ##x.744 28 0) (bruijn ##x.745 27 0) (bruijn ##x.746 26 0) (bruijn ##x.747 25 0) (bruijn ##x.748 24 0) (bruijn ##x.749 23 0) (bruijn ##x.750 22 0) (bruijn ##x.751 21 0) (bruijn ##x.752 20 0) (bruijn ##x.753 19 0) (bruijn ##x.754 18 0) (bruijn ##x.755 17 0) (bruijn ##x.756 16 0) (bruijn ##x.757 15 0) (bruijn ##x.758 14 0) (bruijn ##x.759 13 0) (bruijn ##x.760 12 0) (bruijn ##x.761 11 0) (bruijn ##x.762 10 0) (bruijn ##x.763 9 0) (bruijn ##x.764 8 0) (bruijn ##x.765 7 0) (bruijn ##x.766 6 0) (bruijn ##x.767 5 0) (bruijn ##x.768 4 0) (bruijn ##x.769 3 0) (bruijn ##x.770 2 0) (bruijn ##x.771 1 0) (bruijn ##x.772 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(variables_lambda3, env)},
      VGetArg(env, 31, 0),
      VGetArg(env, 30, 0),
      VGetArg(env, 29, 0),
      VGetArg(env, 28, 0),
      VGetArg(env, 27, 0),
      VGetArg(env, 26, 0),
      VGetArg(env, 25, 0),
      VGetArg(env, 24, 0),
      VGetArg(env, 23, 0),
      VGetArg(env, 22, 0),
      VGetArg(env, 21, 0),
      VGetArg(env, 20, 0),
      VGetArg(env, 19, 0),
      VGetArg(env, 18, 0),
      VGetArg(env, 17, 0),
      VGetArg(env, 16, 0),
      VGetArg(env, 15, 0),
      VGetArg(env, 14, 0),
      VGetArg(env, 13, 0),
      VGetArg(env, 12, 0),
      VGetArg(env, 11, 0),
      VGetArg(env, 10, 0),
      VGetArg(env, 9, 0),
      VGetArg(env, 8, 0),
      VGetArg(env, 7, 0),
      VGetArg(env, 6, 0),
      VGetArg(env, 5, 0),
      VGetArg(env, 4, 0),
      env->up->up->up->vars[0],
      env->up->up->vars[0],
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to variables_k35, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k34(VEnv * env) {
 static VDebugInfo dbg = { "variables_k34" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k34, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 30 1) (close variables_k35) (quote string-length))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 30, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k35, env)}),
      VEncodePointer(&_V0string__length.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k34, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k33(VEnv * env) {
 static VDebugInfo dbg = { "variables_k33" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k33, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 29 1) (close variables_k34) (quote open-output-string))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 29, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k34, env)}),
      VEncodePointer(&_V0open__output__string.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k33, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k32(VEnv * env) {
 static VDebugInfo dbg = { "variables_k32" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k32, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 28 1) (close variables_k33) (quote =))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 28, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k33, env)}),
      VEncodePointer(&_V0_E.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k32, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k31(VEnv * env) {
 static VDebugInfo dbg = { "variables_k31" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k31, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 27 1) (close variables_k32) (quote close-port))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 27, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k32, env)}),
      VEncodePointer(&_V0close__port.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k31, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k30(VEnv * env) {
 static VDebugInfo dbg = { "variables_k30" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k30, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 26 1) (close variables_k31) (quote string->symbol))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 26, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k31, env)}),
      VEncodePointer(&_V0string___Gsymbol.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k30, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k29(VEnv * env) {
 static VDebugInfo dbg = { "variables_k29" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k29, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 25 1) (close variables_k30) (quote get-output-string))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 25, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k30, env)}),
      VEncodePointer(&_V0get__output__string.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k29, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k28(VEnv * env) {
 static VDebugInfo dbg = { "variables_k28" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k28, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 24 1) (close variables_k29) (quote string-ref))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 24, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k29, env)}),
      VEncodePointer(&_V0string__ref.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k28, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k27(VEnv * env) {
 static VDebugInfo dbg = { "variables_k27" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k27, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 23 1) (close variables_k28) (quote display))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 23, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k28, env)}),
      VEncodePointer(&_V0display.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k27, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k26(VEnv * env) {
 static VDebugInfo dbg = { "variables_k26" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k26, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 22 1) (close variables_k27) (quote +))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 22, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k27, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k26, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k25(VEnv * env) {
 static VDebugInfo dbg = { "variables_k25" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k25, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 21 1) (close variables_k26) (quote eq?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 21, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k26, env)}),
      VEncodePointer(&_V0eq_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k25, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k24(VEnv * env) {
 static VDebugInfo dbg = { "variables_k24" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k24, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 20 1) (close variables_k25) (quote error))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 20, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k25, env)}),
      VEncodePointer(&_V0error.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k24, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k23(VEnv * env) {
 static VDebugInfo dbg = { "variables_k23" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k23, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 19 1) (close variables_k24) (quote reverse))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 19, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k24, env)}),
      VEncodePointer(&_V0reverse.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k23, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k22(VEnv * env) {
 static VDebugInfo dbg = { "variables_k22" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k22, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 18 1) (close variables_k23) (quote symbol->string))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 18, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k23, env)}),
      VEncodePointer(&_V0symbol___Gstring.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k22, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k21(VEnv * env) {
 static VDebugInfo dbg = { "variables_k21" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k21, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 17 1) (close variables_k22) (quote map))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 17, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k22, env)}),
      VEncodePointer(&_V0map.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k21, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k20(VEnv * env) {
 static VDebugInfo dbg = { "variables_k20" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k20, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 16 1) (close variables_k21) (quote string-append))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 16, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k21, env)}),
      VEncodePointer(&_V0string__append.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k20, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k19(VEnv * env) {
 static VDebugInfo dbg = { "variables_k19" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k19, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 15 1) (close variables_k20) (quote fold))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 15, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k20, env)}),
      VEncodePointer(&_V0fold.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k19, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k18(VEnv * env) {
 static VDebugInfo dbg = { "variables_k18" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k18, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 14 1) (close variables_k19) (quote string?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 14, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k19, env)}),
      VEncodePointer(&_V0string_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k18, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k17(VEnv * env) {
 static VDebugInfo dbg = { "variables_k17" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k17, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 13 1) (close variables_k18) (quote symbol?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 13, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k18, env)}),
      VEncodePointer(&_V0symbol_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k17, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k16(VEnv * env) {
 static VDebugInfo dbg = { "variables_k16" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k16, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 12 1) (close variables_k17) (quote memv))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 12, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k17, env)}),
      VEncodePointer(&_V0memv.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k16, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k15(VEnv * env) {
 static VDebugInfo dbg = { "variables_k15" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k15, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 11 1) (close variables_k16) (quote list))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 11, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k16, env)}),
      VEncodePointer(&_V0list.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k15, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k14(VEnv * env) {
 static VDebugInfo dbg = { "variables_k14" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k14, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 10 1) (close variables_k15) (quote atom?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 10, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k15, env)}),
      VEncodePointer(&_V0atom_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k14, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k13(VEnv * env) {
 static VDebugInfo dbg = { "variables_k13" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k13, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 9 1) (close variables_k14) (quote cadr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 9, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k14, env)}),
      VEncodePointer(&_V0cadr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k13, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k12(VEnv * env) {
 static VDebugInfo dbg = { "variables_k12" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k12, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 8 1) (close variables_k13) (quote cddr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k13, env)}),
      VEncodePointer(&_V0cddr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k12, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k11(VEnv * env) {
 static VDebugInfo dbg = { "variables_k11" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k11, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 7 1) (close variables_k12) (quote caar))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k12, env)}),
      VEncodePointer(&_V0caar.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k11, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k10(VEnv * env) {
 static VDebugInfo dbg = { "variables_k10" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k10, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 6 1) (close variables_k11) (quote cdar))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k11, env)}),
      VEncodePointer(&_V0cdar.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k10, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k9(VEnv * env) {
 static VDebugInfo dbg = { "variables_k9" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k9, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 5 1) (close variables_k10) (quote null?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k10, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k9, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k8(VEnv * env) {
 static VDebugInfo dbg = { "variables_k8" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k8, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 4 1) (close variables_k9) (quote eqv?))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k9, env)}),
      VEncodePointer(&_V0eqv_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k8, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k7(VEnv * env) {
 static VDebugInfo dbg = { "variables_k7" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k7, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 3 1) (close variables_k8) (quote car))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k8, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k7, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k6(VEnv * env) {
 static VDebugInfo dbg = { "variables_k6" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k6, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 2 1) (close variables_k7) (quote cdr))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k7, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k6, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k5(VEnv * env) {
 static VDebugInfo dbg = { "variables_k5" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k5, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 1 1) (close variables_k6) (quote pair?))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k6, env)}),
      VEncodePointer(&_V0pair_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k5, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_lambda2(VEnv * env) {
 static VDebugInfo dbg = { "variables_lambda2" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_lambda2, env) {
  // ((bruijn ##vcore.import 0 1) (close variables_k5) (quote cons))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k5, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER)
    );
 }
}
static void variables_k4(VEnv * env) {
 static VDebugInfo dbg = { "variables_k4" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k4, env) {
 if (env->num_vars == 1) {
  // ((close variables_lambda2) (bruijn ##k.5 4 0) (bruijn ##x.773 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(variables_lambda2, env)},
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to variables_k4, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k3(VEnv * env) {
 static VDebugInfo dbg = { "variables_k3" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k3, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.774 2 0) (close variables_k4) (##string ##string.879) (bruijn ##x.775 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k4, env)}),
      VEncodePointer(&_V10string_D879.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to variables_k3, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k2(VEnv * env) {
 static VDebugInfo dbg = { "variables_k2" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k2, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.776 0 0) (close variables_k3) (##string ##string.880))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k3, env)}),
      VEncodePointer(&_V10string_D880.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k2, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_k1(VEnv * env) {
 static VDebugInfo dbg = { "variables_k1" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_k1, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close variables_k2) (##string ##string.881))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k2, env)}),
      VEncodePointer(&_V10string_D881.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_k1, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void variables_lambda1(VEnv * env) {
 static VDebugInfo dbg = { "variables_lambda1" };
 VRecordCall(&dbg);
 V_GC_CHECK(variables_lambda1, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close variables_k1) (##string ##string.882))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(variables_k1, env)}),
      VEncodePointer(&_V10string_D882.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to variables_lambda1, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
void (*variables)(VEnv*) = variables_lambda1;
