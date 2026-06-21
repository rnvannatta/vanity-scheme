/* Copyright 2023-2024 Richard N Van Natta
 *
 * This file is part of the Vanity Scheme Compiler.
 *
 * The Vanity Scheme Compiler is free software: you can redistribute it
 * and/or modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, either version 2 of the
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
 * This work is published with additional permission, the Vanity Scheme
 * Runtime Library Exceptions, which should have been included with the
 * Vanity Scheme Compiler.
 *
 * If not, visit <https://github.com/rnvannatta>
 */
#include "vscheme/vruntime.h"
#include "vscheme/vlibrary.h"
#include "vscheme/vinlines.h"
#include <stdarg.h>
VBlob * VInternSymbol(int hash, VBlob * sym);

V_DECLARE_FUNC_MIN(VMultiImport, _var0, _var1, _var2);

VEnv * _V60_V0vanity_V0compiler_V0variables;

static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1976 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "_V60" };
static VPair _V10_Dpair_D1975 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1974 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1973 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1972 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1971 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V40_V10vcore_Dsymbol___Gstring;
VWEAK VClosure _VW_V40_V10vcore_Dsymbol___Gstring = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSymbolString2, NULL };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1970 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "_V50" };
static VPair _V10_Dpair_D1969 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1968 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1967 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1966 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1965 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1964 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1963 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1962 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1961 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1960 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1959 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1958 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1957 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1956 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1955 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1954 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1953 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1952 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1951 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1950 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_A" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1949 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_D" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1948 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "__" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1947 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_P" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1946 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_T" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1945 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_U" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1944 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_C" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1943 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_Q" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1942 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_G" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1941 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_E" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1940 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_L" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1939 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_J" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1938 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_W" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1937 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_S" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1936 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_R" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1935 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_M" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1934 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_Z" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1933 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_B" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D1932 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static VPair _V10_Dpair_D1931 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1930 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1929 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1928 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0x_D1;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0x_D1 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "x.1" };
static VPair _V10_Dpair_D1927 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1926 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1925 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1924 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1923 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1922 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1921 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0ret;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0ret = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "ret" };
static VPair _V10_Dpair_D1920 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1919 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1918 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1917 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1916 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1915 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1914 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0i;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0i = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "i" };
static VPair _V10_Dpair_D1913 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1912 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1911 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1910 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1909 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D276;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D276 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.276" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D1908 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "_V0" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1907 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "_V10" };
static VPair _V10_Dpair_D1906 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1905 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1904 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1903 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1902 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1901 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1900 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1899 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1898 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0strlen;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0strlen = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "strlen" };
static VPair _V10_Dpair_D1897 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1896 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1895 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0port;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "port" };
static VPair _V10_Dpair_D1894 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1893 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1892 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1891 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1890 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1889 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0str;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0str = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "str" };
static VPair _V10_Dpair_D1888 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1887 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1886 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1885 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1884 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0sym;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0sym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "sym" };
static VPair _V10_Dpair_D1883 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1882 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1881 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1880 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0rename;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0rename = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "rename" };
static VPair _V10_Dpair_D1879 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1878 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1877 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1876 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1875 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1874 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1873 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D12;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D12 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.12" };
static VPair _V10_Dpair_D1872 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1871 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1870 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1869 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1868 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1867 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1866 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1865 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1864 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1863 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1862 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1861 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1860 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1859 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1858 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D9;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0expr_D9 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "expr.9" };
static VPair _V10_Dpair_D1857 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1856 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D10;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D10 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.10" };
static VPair _V10_Dpair_D1855 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0prefix;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0prefix = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "prefix" };
static VPair _V10_Dpair_D1854 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1853 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1852 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1851 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1850 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1849 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1848 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0except;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0except = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "except" };
static VPair _V10_Dpair_D1847 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1846 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1845 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1844 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1843 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1842 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1841 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D7;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0expr_D7 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "expr.7" };
static VPair _V10_Dpair_D1840 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1839 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1838 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1837 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1836 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1835 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1834 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0only;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0only = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "only" };
static VPair _V10_Dpair_D1833 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1832 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1831 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1830 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1829 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1828 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1827 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D5;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0expr_D5 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "expr.5" };
static VPair _V10_Dpair_D1826 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1825 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1824 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1823 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1822 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1821 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1820 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1819 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1818 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1817 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1816 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1815 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1814 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1813 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1812 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D2;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0kk_D2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "kk.2" };
static VPair _V10_Dpair_D1811 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1810 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1809 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1808 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1807 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0import;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "import" };
static VPair _V10_Dpair_D1806 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1805 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1804 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1803 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[81]; } _V10_Dstring_D1802 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 81 }, "library name must be a string which is a valid c identifier or a list of symbols" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1801 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "_V20" };
static VPair _V10_Dpair_D1800 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1799 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1798 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1797 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1796 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1795 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "non-symbol in library path:" };
static VPair _V10_Dpair_D1794 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1793 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1792 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1791 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1790 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1789 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1788 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1787 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1786 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1785 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1784 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1783 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1782 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1781 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1780 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1779 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1778 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1777 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1776 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1775 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0ks;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0ks = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "ks" };
VWEAK VWORD _V0knil;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0knil = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "knil" };
static VPair _V10_Dpair_D1774 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1773 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1772 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1771 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1770 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D251;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D251 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.251" };
static VPair _V10_Dpair_D1769 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1768 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1767 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1766 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1765 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1764 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1763 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1762 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1761 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1760 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0lib;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0lib = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "lib" };
static VPair _V10_Dpair_D1759 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1758 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1757 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1756 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1755 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1754 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1753 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1752 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1751 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1750 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0args;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0args = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "args" };
static VPair _V10_Dpair_D1749 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1748 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1747 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1746 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1745 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1744 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1743 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1742 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1741 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1740 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1739 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1738 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1737 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1736 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1735 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1734 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1733 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1732 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1731 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1730 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1729 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1728 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1727 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1726 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1725 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1724 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1723 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1722 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1721 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1720 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1719 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1718 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1717 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1716 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1715 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1714 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1713 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1712 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1711 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1710 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1709 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1708 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1707 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1706 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1705 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1704 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D71;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D71 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.71" };
static VPair _V10_Dpair_D1703 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1702 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1701 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1700 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1699 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1698 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1697 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1696 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1695 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1694 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1693 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1692 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1691 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1690 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1689 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1688 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0xs_D69;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0xs_D69 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "xs.69" };
VWEAK VWORD _V0expr_D72;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D72 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.72" };
static VPair _V10_Dpair_D1687 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1686 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1685 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1684 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1683 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D235;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D235 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.235" };
static VPair _V10_Dpair_D1682 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1681 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1680 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1679 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1678 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1677 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D70;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D70 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.70" };
static VPair _V10_Dpair_D1676 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1675 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1674 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1673 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1672 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1671 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1670 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1669 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D67;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D67 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.67" };
static VPair _V10_Dpair_D1668 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1667 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1666 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1665 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1664 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1663 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1662 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1661 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1660 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1659 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D65;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D65 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.65" };
static VPair _V10_Dpair_D1658 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1657 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1656 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1655 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1654 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D63;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D63 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.63" };
static VPair _V10_Dpair_D1653 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1652 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1651 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1650 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1649 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1648 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1647 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1646 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1645 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1644 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1643 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1642 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1641 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1640 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1639 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1638 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1637 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1636 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1635 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1634 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0vals_D61;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0vals_D61 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "vals.61" };
VWEAK VWORD _V0xs_D60;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0xs_D60 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "xs.60" };
VWEAK VWORD _V0expr_D64;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D64 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.64" };
static VPair _V10_Dpair_D1633 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1632 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1631 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1630 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1629 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D219;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D219 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.219" };
static VPair _V10_Dpair_D1628 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1627 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1626 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1625 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1624 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1623 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1622 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D62;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D62 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.62" };
static VPair _V10_Dpair_D1621 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1620 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1619 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1618 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1617 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1616 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1615 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D57;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D57 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.57" };
static VPair _V10_Dpair_D1614 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D58;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D58 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.58" };
static VPair _V10_Dpair_D1613 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D59;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D59 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.59" };
static VPair _V10_Dpair_D1612 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1611 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1610 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1609 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1608 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1607 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1606 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1605 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1604 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1603 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1602 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1601 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1600 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1599 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1598 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D55;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D55 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.55" };
static VPair _V10_Dpair_D1597 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1596 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1595 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1594 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1593 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1592 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1591 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0vals;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0vals = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "vals" };
VWEAK VWORD _V0tail__expr;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0tail__expr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "tail-expr" };
static VPair _V10_Dpair_D1590 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1589 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1588 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1587 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1586 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1585 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1584 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1583 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1582 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D53;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D53 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.53" };
static VPair _V10_Dpair_D1581 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1580 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1579 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1578 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1577 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D51;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D51 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.51" };
static VPair _V10_Dpair_D1576 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1575 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1574 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1573 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1572 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1571 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1570 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1569 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1568 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1567 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1566 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1565 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1564 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1563 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1562 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1561 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1560 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1559 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1558 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1557 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0vals_D49;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0vals_D49 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "vals.49" };
VWEAK VWORD _V0xs_D48;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0xs_D48 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "xs.48" };
VWEAK VWORD _V0expr_D52;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D52 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.52" };
static VPair _V10_Dpair_D1556 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1555 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1554 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1553 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1552 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D200;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D200 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.200" };
static VPair _V10_Dpair_D1551 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1550 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1549 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1548 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1547 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1546 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1545 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D50;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D50 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.50" };
static VPair _V10_Dpair_D1544 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1543 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1542 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1541 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1540 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1539 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D46;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D46 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.46" };
static VPair _V10_Dpair_D1538 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D47;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D47 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.47" };
static VPair _V10_Dpair_D1537 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1536 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1535 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1534 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1533 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1532 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1531 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1530 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1529 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1528 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1527 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1526 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1525 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1524 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1523 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1522 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1521 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1520 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1519 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1518 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D42;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D42 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.42" };
static VPair _V10_Dpair_D1517 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1516 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D43;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D43 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.43" };
static VPair _V10_Dpair_D1515 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1514 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D44;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D44 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.44" };
static VPair _V10_Dpair_D1513 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1512 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1511 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1510 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1509 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1508 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1507 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1506 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1505 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1504 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1503 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1502 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1501 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1500 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1499 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1498 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1497 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1496 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1495 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1494 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D38;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D38 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.38" };
static VPair _V10_Dpair_D1493 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1492 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D39;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D39 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.39" };
VWEAK VWORD _V0cont;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cont = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cont" };
static VPair _V10_Dpair_D1491 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1490 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D40;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D40 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.40" };
static VPair _V10_Dpair_D1489 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1488 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1487 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1486 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1485 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1484 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1483 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static VPair _V10_Dpair_D1482 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1481 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1480 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1479 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1478 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1477 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1476 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1475 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D35;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D35 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.35" };
static VPair _V10_Dpair_D1474 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1473 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D36;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D36 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.36" };
static VPair _V10_Dpair_D1472 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1471 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1470 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1469 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1468 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1467 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1466 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1465 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1464 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1463 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1462 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1461 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1460 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1459 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1458 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D32;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D32 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.32" };
static VPair _V10_Dpair_D1457 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1456 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D33;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D33 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.33" };
VWEAK VWORD _V0x;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0x = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "x" };
static VPair _V10_Dpair_D1455 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0val;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0val = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "val" };
static VPair _V10_Dpair_D1454 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1453 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1452 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1451 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1450 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1449 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1448 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1447 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1446 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1445 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1444 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1443 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1442 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1441 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1440 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1439 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1438 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1437 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1436 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1435 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1434 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1433 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D29;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D29 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.29" };
static VPair _V10_Dpair_D1432 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1431 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D30;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D30 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.30" };
static VPair _V10_Dpair_D1430 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1429 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1428 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1427 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1426 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1425 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1424 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1423 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1422 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1421 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1420 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1419 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1418 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1417 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1416 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1415 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1414 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1413 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D24;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D24 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.24" };
static VPair _V10_Dpair_D1412 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1411 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D25;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D25 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.25" };
VWEAK VWORD _V0name;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "name" };
static VPair _V10_Dpair_D1410 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1409 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D26;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D26 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.26" };
VWEAK VWORD _V0static_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0static_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "static\?" };
static VPair _V10_Dpair_D1408 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1407 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D27;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D27 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.27" };
static VPair _V10_Dpair_D1406 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1405 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1404 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1403 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1402 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1401 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1400 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1399 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1398 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1397 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1396 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1395 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1394 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1393 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1392 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1391 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1390 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1389 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1388 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0p;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0p = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "p" };
static VPair _V10_Dpair_D1387 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1386 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1385 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1384 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1383 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1382 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0bodies;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0bodies = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "bodies" };
static VPair _V10_Dpair_D1381 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1380 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1379 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1378 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1377 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1376 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1375 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1374 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1373 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1372 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1371 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1370 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1369 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1368 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1367 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D20;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D20 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.20" };
static VPair _V10_Dpair_D1366 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1365 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr_D21;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0expr_D21 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "expr.21" };
VWEAK VWORD _V0xs;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0xs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "xs" };
static VPair _V10_Dpair_D1364 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0body;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0body = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "body" };
static VPair _V10_Dpair_D1363 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1362 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1361 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1360 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1359 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1358 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1357 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1356 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1355 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1354 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1353 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1352 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1351 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1350 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1349 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1348 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1347 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1346 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1345 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1344 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1343 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1342 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1341 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1340 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1339 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1338 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1337 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1336 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1335 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1334 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1333 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1332 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1331 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1330 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1329 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1328 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1327 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1326 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1325 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1324 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1323 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1322 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1321 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1320 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0unmangled__env;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unmangled__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unmangled-env" };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static VPair _V10_Dpair_D1319 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1318 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_U;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_U = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "_" };
static VPair _V10_Dpair_D1317 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1316 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1315 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1314 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1313 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1312 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1311 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1310 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1309 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1308 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1307 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1306 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1305 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1304 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1303 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1302 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1301 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1300 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1299 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0kk_D13;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0kk_D13 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "kk.13" };
static VPair _V10_Dpair_D1298 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1297 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1296 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1295 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1294 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0k;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0k = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "k" };
static VPair _V10_Dpair_D1293 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1292 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1291 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1290 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1289 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1288 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1287 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0or;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0or = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "or" };
VWEAK VWORD _V0and;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0and = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "and" };
static VPair _V10_Dpair_D1286 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1285 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1284 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1283 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1282 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0e;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0e = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "e" };
static VPair _V10_Dpair_D1281 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1280 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1279 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
static VPair _V10_Dpair_D1278 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1277 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1276 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1275 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1274 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1273 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1272 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1271 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1270 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1269 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1268 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1267 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1266 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1265 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1264 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1263 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1262 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1261 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10letrec;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##letrec" };
VWEAK VWORD _V40_V10vcore_Dcar;
VWEAK VClosure _VW_V40_V10vcore_Dcar = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCar2, NULL };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
static VPair _V10_Dpair_D1260 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1259 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1258 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1257 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1256 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1255 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1254 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1253 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1252 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1251 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1250 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1249 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1248 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1247 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1246 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1245 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1244 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1243 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
static VPair _V10_Dpair_D1242 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1241 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1240 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1239 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1238 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1237 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1236 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1235 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1234 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1233 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1232 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1231 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1230 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1229 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1228 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1227 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1226 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1225 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1224 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1223 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1222 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1221 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1220 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1219 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1218 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1217 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1216 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1215 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1214 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1213 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop2_D135;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10_Dloop2_D135 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##.loop2.135" };
VWEAK VWORD _V10qualified__case__lambda;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10qualified__case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##qualified-case-lambda" };
static VPair _V10_Dpair_D1212 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1211 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1210 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1209 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1208 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1207 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1206 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1205 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1204 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1203 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1202 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1201 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1200 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1199 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1198 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1197 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1196 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1195 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1194 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1193 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1192 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1191 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1190 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0loop2;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0loop2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "loop2" };
static VPair _V10_Dpair_D1189 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1188 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1187 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1186 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0cases;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cases = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cases" };
static VPair _V10_Dpair_D1185 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1184 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1183 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1182 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1181 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1180 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop2_D133;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10_Dloop2_D133 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##.loop2.133" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
static VPair _V10_Dpair_D1179 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1178 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1177 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1176 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1175 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1174 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1173 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1172 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1171 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10qualified__lambda;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10qualified__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##qualified-lambda" };
static VPair _V10_Dpair_D1170 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1169 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1168 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1167 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1166 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1165 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1164 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1163 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1162 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
static VPair _V10_Dpair_D1161 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1160 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1159 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1158 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1157 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1156 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1155 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1154 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1153 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1152 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1151 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1150 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1149 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1148 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1147 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1146 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1145 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1144 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1143 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1142 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1141 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1140 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1139 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1138 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1137 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1136 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1135 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1134 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1133 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1132 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1131 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1130 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1129 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1128 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1127 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1126 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1125 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1124 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1123 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V10basic__intrinsic;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10basic__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##basic-intrinsic" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static VPair _V10_Dpair_D1122 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1121 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1120 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1119 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1118 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1117 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1116 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1115 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1114 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1113 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1112 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1111 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0loop;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0loop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "loop" };
static VPair _V10_Dpair_D1110 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1109 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1108 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1107 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1106 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1105 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0context;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0context = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "context" };
VWEAK VWORD _V0bound;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0bound = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "bound" };
static VPair _V10_Dpair_D1104 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1103 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1102 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1101 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1100 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D129;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10_Dloop_D129 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##.loop.129" };
static VPair _V10_Dpair_D1099 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1098 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1097 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1096 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1095 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1094 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1093 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1092 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1091 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1090 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1089 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dappend__improper_D124;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10_Dappend__improper_D124 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##.append-improper.124" };
static VPair _V10_Dpair_D1088 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1087 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1086 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1085 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1084 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1083 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1082 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1081 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1080 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1079 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mp;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%p" };
static VPair _V10_Dpair_D1078 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1077 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1076 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1075 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1074 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1073 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0append__improper;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0append__improper = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "append-improper" };
VWEAK VWORD _V0merge;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0merge = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "merge" };
static VPair _V10_Dpair_D1072 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1071 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1070 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1069 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1068 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0b;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0b = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "b" };
VWEAK VWORD _V0a;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0a = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "a" };
static VPair _V10_Dpair_D1067 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1066 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1065 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1064 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1063 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dmerge_D123;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10_Dmerge_D123 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##.merge.123" };
static VPair _V10_Dpair_D1062 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1061 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1060 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1059 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1058 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1057 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1056 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1055 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1054 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1053 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1052 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1051 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1050 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0mangle__environment;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0mangle__environment = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "mangle-environment" };
VWEAK VWORD _V0mangle__qualified__function;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V0mangle__qualified__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "mangle-qualified-function" };
VWEAK VWORD _V0mangle__symbol;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0mangle__symbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "mangle-symbol" };
VWEAK VWORD _V0import__path;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0import__path = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "import-path" };
VWEAK VWORD _V0mangle__library;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0mangle__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "mangle-library" };
VWEAK VWORD _V0memtail;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0memtail = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "memtail" };
VWEAK VWORD _V0variable__pure__body_Q;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0variable__pure__body_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "variable-pure-body\?" };
VWEAK VWORD _V0variable__pure_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0variable__pure_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "variable-pure\?" };
static VPair _V10_Dpair_D1049 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1048 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1047 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1046 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0expr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0expr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "expr" };
static VPair _V10_Dpair_D1045 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1044 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1043 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1042 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0free__variables;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0free__variables = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "free-variables" };
VWEAK VWORD _V0variables;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0variables = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "variables" };
VWEAK VWORD _V0compiler;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0compiler = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "compiler" };
VWEAK VWORD _V0vanity;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0vanity = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "vanity" };
static VPair _V10_Dpair_D1041 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1040 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1039 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1038 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1037 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1036 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1035 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1034 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1033 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1032 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1031 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1030 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1029 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1028 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1027 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1026 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1025 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1024 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1023 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1022 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1021 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1020 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1019 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1018 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1017 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1016 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1015 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1014 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1013 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1012 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1011 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1010 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
VWEAK VWORD _V0fold__right;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0fold__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "fold-right" };
VWEAK VWORD _V0open__output__string;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0open__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "open-output-string" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "display" };
VWEAK VWORD _V0get__output__string;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0get__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "get-output-string" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0string__append;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-append" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0fold;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "fold" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0cdddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cdddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cdddr" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cdar" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0cddddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cddddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cddddr" };
VWEAK VWORD _V0cadddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cadddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cadddr" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0atom_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0atom_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "atom\?" };
VWEAK VWORD _V0lookup__intrinsic__name;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0lookup__intrinsic__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "lookup-intrinsic-name" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1009 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static VPair _V10_Dpair_D1008 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1007 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1006 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1005 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1004 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1003 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1002 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1001 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1000 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D999 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D998 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D997 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D996 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D995 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D994 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D993 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D992 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D991 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mx;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%x" };
static VPair _V10_Dpair_D990 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D989 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D988 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D987 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D986 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D985 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D984 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mk;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%k" };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0mangle__environment, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0import__path, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0mangle__library, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0memtail, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D124, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D123, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0variables_V0free__variables, _var0, _var1);
static void _V0vanity_V0compiler_V0variables_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.%k.284 5 0) (##string ##.string.1009) (bruijn ##.%x.285 0 0) 'list 'lookup-intrinsic-name 'atom? 'memv 'cadddr 'cddddr 'caar 'cdar 'cddr 'caddr 'cadr 'cdddr 'map 'fold 'assv 'reverse 'equal? 'compiler-error 'string-append 'close-port 'get-output-string 'display 'open-output-string 'fold-right)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 27,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1009.sym, VPOINTER_OTHER),
      _var0,
      _V0list,
      _V0lookup__intrinsic__name,
      _V0atom_Q,
      _V0memv,
      _V0cadddr,
      _V0cddddr,
      _V0caar,
      _V0cdar,
      _V0cddr,
      _V0caddr,
      _V0cadr,
      _V0cdddr,
      _V0map,
      _V0fold,
      _V0assv,
      _V0reverse,
      _V0equal_Q,
      _V0compiler__error,
      _V0string__append,
      _V0close__port,
      _V0get__output__string,
      _V0display,
      _V0open__output__string,
      _V0fold__right);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0variables_V20_V0k5) (bruijn ##.%x.286 3 0) (bruijn ##.%x.287 2 0) (bruijn ##.%x.288 1 0) (bruijn ##.%x.289 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k5, self)))),
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0variables_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0variables_V20_V0k4) (##string ##.string.1010))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D1010.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0variables_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0variables_V20_V0k3) (##string ##.string.1011))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D1011.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0variables_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0variables_V20_V0k2) (##string ##.string.1012))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D1012.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0variables_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0variables_V20_V0k1) (##string ##.string.1013))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D1013.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D123_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D123_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D123_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.294 0 0) (basic-block 1 1 (##.%x.701) ((##vcore.cdr (bruijn ##.a.125 4 1))) (##qualified-call (vanity compiler variables free-variables ##.merge.123) #f (bruijn ##.merge.123 5 0) (bruijn ##.%k.292 4 0) (bruijn ##.%x.701 0 0) (bruijn ##.b.126 4 2))) (basic-block 3 3 (##.%x.702 ##.%x.703 ##.%x.704) ((##vcore.cdr (bruijn ##.a.125 4 1)) (##vcore.car (bruijn ##.a.125 4 1)) (##vcore.cons (bruijn ##.%x.703 0 1) (bruijn ##.b.126 4 2))) (##qualified-call (vanity compiler variables free-variables ##.merge.123) #f (bruijn ##.merge.123 5 0) (bruijn ##.%k.292 4 0) (bruijn ##.%x.702 0 0) (bruijn ##.%x.704 0 2))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D123(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      statics->up->up->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D123(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D123_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D123_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D123_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assv.87 6 15) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D123_V0k7) (bruijn ##.%x.299 0 0) (bruijn ##.b.126 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 15)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D123_V0k7, self)))),
      _var0,
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D123, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.700) ((##vcore.null? (bruijn ##.a.125 1 1))) (if (bruijn ##.%p.700 0 0) ((bruijn ##.%k.292 1 0) (bruijn ##.b.126 1 2)) ((bruijn ##.caar.79 5 7) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D123_V0k6) (bruijn ##.a.125 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D123_V0k6, self)))),
      statics->vars[1]);
}
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D124_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D124_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D124_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.708) ((##vcore.cons (bruijn ##.%x.706 2 0) (bruijn ##.%x.303 1 0))) ((bruijn ##.%k.300 4 0) (bruijn ##.%r.708 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D124, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.705) ((##vcore.pair? (bruijn ##.a.127 1 1))) (if (bruijn ##.%p.705 0 0) (basic-block 2 2 (##.%x.706 ##.%x.707) ((##vcore.car (bruijn ##.a.127 2 1)) (##vcore.cdr (bruijn ##.a.127 2 1))) (##qualified-call (vanity compiler variables free-variables ##.append-improper.124) #f (bruijn ##.append-improper.124 3 1) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D124_V0k8) (bruijn ##.%x.707 0 1) (bruijn ##.b.128 2 2))) (basic-block 1 1 (##.%p.709) ((##vcore.null? (bruijn ##.a.127 2 1))) (if (bruijn ##.%p.709 0 0) ((bruijn ##.%k.300 2 0) (bruijn ##.b.128 2 2)) (basic-block 1 1 (##.%r.710) ((##vcore.cons (bruijn ##.a.127 3 1) (bruijn ##.b.128 3 2))) ((bruijn ##.%k.300 3 0) (bruijn ##.%r.710 0 0)))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D124_V0k8, self))));
    VWORD _arg1 = 
      self->vars[1];
    VWORD _arg2 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D124(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[1],
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.310 1 0) ((bruijn ##.%k.311 0 0) (bruijn ##.%p.310 1 0)) ((bruijn ##.lookup-intrinsic-name.74 8 2) (bruijn ##.%k.311 0 0) (bruijn ##.expr.131 3 2)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 2,
      _var0,
      statics->up->up->vars[2]);
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.308 0 0) ((bruijn ##.%k.306 3 0) '()) (basic-block 1 1 (##.%x.712) ((##vcore.cons (bruijn ##.expr.131 4 2) (bruijn ##.context.132 4 3))) ((bruijn ##.list.73 9 1) (bruijn ##.%k.306 4 0) (bruijn ##.%x.712 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[2],
      statics->up->up->up->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 2,
      statics->up->up->up->vars[0],
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k10) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k11))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k10, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k11, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.merge.123) #f (bruijn ##.merge.123 16 0) (bruijn ##.%k.306 14 0) (bruijn ##.%x.318 2 0) (bruijn ##.%x.319 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 14-1, 0);
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D123(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.loop.129) #f (bruijn ##.loop.129 14 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k19) (bruijn ##.bound.130 13 1) (bruijn ##.%x.320 0 0) (bruijn ##.expr.131 13 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k19, self))));
    VWORD _arg1 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VGetArg(statics, 13-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadddr.77 17 5) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k18) (bruijn ##.expr.131 12 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k18, self)))),
      VGetArg(statics, 12-1, 2));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.merge.123) #f (bruijn ##.merge.123 13 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k17) (bruijn ##.%x.321 2 0) (bruijn ##.%x.322 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k17, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D123(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.loop.129) #f (bruijn ##.loop.129 11 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k16) (bruijn ##.bound.130 10 1) (bruijn ##.%x.323 0 0) (bruijn ##.expr.131 10 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k16, self))));
    VWORD _arg1 = 
      VGetArg(statics, 10-1, 1);
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VGetArg(statics, 10-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.caddr.82 14 10) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k15) (bruijn ##.expr.131 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k15, self)))),
      VGetArg(statics, 9-1, 2));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.loop.129) #f (bruijn ##.loop.129 9 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k14) (bruijn ##.bound.130 8 1) (bruijn ##.%x.324 0 0) (bruijn ##.expr.131 8 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k14, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VGetArg(statics, 8-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.merge.123) #f (bruijn ##.merge.123 15 0) (bruijn ##.%k.306 13 0) (bruijn ##.%x.326 2 0) (bruijn ##.%x.327 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 13-1, 0);
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D123(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.loop.129) #f (bruijn ##.loop.129 13 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k24) (bruijn ##.bound.130 12 1) (bruijn ##.%x.328 0 0) (bruijn ##.expr.131 12 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k24, self))));
    VWORD _arg1 = 
      VGetArg(statics, 12-1, 1);
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VGetArg(statics, 12-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.caddr.82 16 10) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k23) (bruijn ##.expr.131 11 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k23, self)))),
      VGetArg(statics, 11-1, 2));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.loop.129) #f (bruijn ##.loop.129 11 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k22) (bruijn ##.bound.130 10 1) (bruijn ##.%x.329 0 0) (bruijn ##.expr.131 10 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k22, self))));
    VWORD _arg1 = 
      VGetArg(statics, 10-1, 1);
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VGetArg(statics, 10-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.loop.129) #f (bruijn ##.loop.129 14 0) (bruijn ##.%k.306 13 0) (bruijn ##.%x.331 1 0) (bruijn ##.%x.332 0 0) (bruijn ##.expr.131 13 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 13-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VGetArg(statics, 13-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cddr.81 17 9) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k27) (bruijn ##.expr.131 12 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k27, self)))),
      VGetArg(statics, 12-1, 2));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.append-improper.124) #f (bruijn ##.append-improper.124 13 1) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k26) (bruijn ##.%x.333 0 0) (bruijn ##.bound.130 11 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k26, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D124(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.loop.129) #f (bruijn ##.loop.129 15 0) (bruijn ##.%k.306 14 0) (bruijn ##.%x.335 1 0) (bruijn ##.%x.336 0 0) (bruijn ##.expr.131 14 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 14-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VGetArg(statics, 14-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cddddr.78 18 6) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k30) (bruijn ##.expr.131 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k30, self)))),
      VGetArg(statics, 13-1, 2));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.append-improper.124) #f (bruijn ##.append-improper.124 14 1) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k29) (bruijn ##.%x.337 0 0) (bruijn ##.bound.130 12 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k29, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D124(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.merge.123) #f (bruijn ##.merge.123 24 0) (bruijn ##.%k.339 8 0) (bruijn ##.%x.341 2 0) (bruijn ##.%x.342 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 24-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 8-1, 0);
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D123(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.732) ((##vcore.cdr (bruijn ##.cases.134 7 1))) (##qualified-call (vanity compiler variables free-variables ##.loop.129 ##.loop2.133) #f (bruijn ##.loop2.133 8 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k35) (bruijn ##.%x.732 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k35, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.731) ((##vcore.car (bruijn ##.cases.134 5 1))) (##qualified-call (vanity compiler variables free-variables ##.loop.129) #f (bruijn ##.loop.129 20 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k34) (bruijn ##.%x.344 2 0) (bruijn ##.%x.345 1 0) (bruijn ##.%x.731 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k34, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cdar.80 22 8) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k33) (bruijn ##.cases.134 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k33, self)))),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.append-improper.124) #f (bruijn ##.append-improper.124 18 1) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k32) (bruijn ##.%x.347 0 0) (bruijn ##.bound.130 16 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k32, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 16-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D124(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.730) ((##vcore.null? (bruijn ##.cases.134 1 1))) (if (bruijn ##.%p.730 0 0) ((bruijn ##.%k.339 1 0) '()) ((bruijn ##.caar.79 20 7) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k31) (bruijn ##.cases.134 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k31, self)))),
      statics->vars[1]);
}
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.merge.123) #f (bruijn ##.merge.123 25 0) (bruijn ##.%k.350 8 0) (bruijn ##.%x.352 2 0) (bruijn ##.%x.353 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 25-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 8-1, 0);
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D123(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.738) ((##vcore.cdr (bruijn ##.cases.136 7 1))) (##qualified-call (vanity compiler variables free-variables ##.loop.129 ##.loop2.135) #f (bruijn ##.loop2.135 8 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k40) (bruijn ##.%x.738 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k40, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.737) ((##vcore.car (bruijn ##.cases.136 5 1))) (##qualified-call (vanity compiler variables free-variables ##.loop.129) #f (bruijn ##.loop.129 21 0) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k39) (bruijn ##.%x.355 2 0) (bruijn ##.%x.356 1 0) (bruijn ##.%x.737 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k39, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cdar.80 23 8) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k38) (bruijn ##.cases.136 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k38, self)))),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.append-improper.124) #f (bruijn ##.append-improper.124 19 1) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k37) (bruijn ##.%x.358 0 0) (bruijn ##.bound.130 17 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k37, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 17-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D124(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.736) ((##vcore.null? (bruijn ##.cases.136 1 1))) (if (bruijn ##.%p.736 0 0) ((bruijn ##.%k.350 1 0) '()) ((bruijn ##.caar.79 21 7) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k36) (bruijn ##.cases.136 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k36, self)))),
      statics->vars[1]);
}
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.loop.129 ##.loop2.135) #f (bruijn ##.loop2.135 1 0) (bruijn ##.%k.306 15 0) (bruijn ##.%x.359 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 15-1, 0);
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.741 ##.%x.742) ((##vcore.cons (bruijn ##.%x.364 2 0) (bruijn ##.%x.365 1 0)) (##vcore.cons 'begin (bruijn ##.%x.741 0 0))) (##qualified-call (vanity compiler variables free-variables ##.loop.129) #f (bruijn ##.loop.129 22 0) (bruijn ##.%k.306 21 0) (bruijn ##.%x.361 4 0) (bruijn ##.%x.742 0 1) (bruijn ##.expr.131 21 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0begin,
      self->vars[0]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 22-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 21-1, 0);
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      VGetArg(statics, 21-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cddr.81 24 9) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k47) (bruijn ##.expr.131 19 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k47, self)))),
      VGetArg(statics, 19-1, 2));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.85 23 13) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k46) (bruijn ##.cadr.83 23 11) (bruijn ##.%x.366 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k46, self)))),
      VGetArg(statics, 23-1, 11),
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.83 22 11) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k45) (bruijn ##.expr.131 17 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k45, self)))),
      VGetArg(statics, 17-1, 2));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.append-improper.124) #f (bruijn ##.append-improper.124 18 1) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k44) (bruijn ##.%x.367 0 0) (bruijn ##.bound.130 16 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k44, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 16-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D124(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.85 20 13) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k43) (##intrinsic ##vcore.car) (bruijn ##.%x.368 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k43, self)))),
      _V40_V10vcore_Dcar,
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.745 ##.%x.746) ((##vcore.cons (bruijn ##.%x.373 2 0) (bruijn ##.%x.374 1 0)) (##vcore.cons 'begin (bruijn ##.%x.745 0 0))) (##qualified-call (vanity compiler variables free-variables ##.loop.129) #f (bruijn ##.loop.129 23 0) (bruijn ##.%k.306 22 0) (bruijn ##.%x.370 4 0) (bruijn ##.%x.746 0 1) (bruijn ##.expr.131 22 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0begin,
      self->vars[0]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 23-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 22-1, 0);
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      VGetArg(statics, 22-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cdddr.84 25 12) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k53) (bruijn ##.expr.131 20 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k53, self)))),
      VGetArg(statics, 20-1, 2));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.85 24 13) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k52) (bruijn ##.cadr.83 24 11) (bruijn ##.%x.375 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k52, self)))),
      VGetArg(statics, 24-1, 11),
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.caddr.82 23 10) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k51) (bruijn ##.expr.131 18 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k51, self)))),
      VGetArg(statics, 18-1, 2));
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler variables free-variables ##.append-improper.124) #f (bruijn ##.append-improper.124 19 1) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k50) (bruijn ##.%x.376 0 0) (bruijn ##.bound.130 17 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k50, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 17-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D124(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.85 21 13) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k49) (##intrinsic ##vcore.car) (bruijn ##.%x.377 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k49, self)))),
      _V40_V10vcore_Dcar,
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.fold.86 22 14) (bruijn ##.%k.306 17 0) (bruijn ##.merge.123 19 0) '() (bruijn ##.%x.380 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 14)), 4,
      VGetArg(statics, 17-1, 0),
      VGetArg(statics, 19-1, 0),
      VNULL,
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables free-variables ##.loop.129) #f (bruijn ##.loop.129 18 0) (bruijn ##.%k.381 0 0) (bruijn ##.bound.130 17 1) (bruijn ##.e.137 0 1) (bruijn ##.expr.131 17 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 17-1, 1);
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      VGetArg(statics, 17-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.325 0 0) ((bruijn ##.cadr.83 14 11) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k21) (bruijn ##.expr.131 9 2)) (basic-block 2 2 (##.%x.724 ##.%p.725) ((##vcore.car (bruijn ##.expr.131 10 2)) (##vcore.eq? (bruijn ##.%x.724 0 0) 'lambda)) (if (bruijn ##.%p.725 0 1) ((bruijn ##.cadr.83 15 11) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k25) (bruijn ##.expr.131 10 2)) (basic-block 2 2 (##.%x.726 ##.%p.727) ((##vcore.car (bruijn ##.expr.131 11 2)) (##vcore.eq? (bruijn ##.%x.726 0 0) '##qualified-lambda)) (if (bruijn ##.%p.727 0 1) ((bruijn ##.cadddr.77 16 5) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k28) (bruijn ##.expr.131 11 2)) (basic-block 2 2 (##.%x.728 ##.%p.729) ((##vcore.car (bruijn ##.expr.131 12 2)) (##vcore.eq? (bruijn ##.%x.728 0 0) 'case-lambda)) (if (bruijn ##.%p.729 0 1) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133")) (basic-block 1 1 (##.%x.733) ((##vcore.cdr (bruijn ##.expr.131 14 2))) (##qualified-call (vanity compiler variables free-variables ##.loop.129 ##.loop2.133) #f (bruijn ##.loop2.133 1 0) (bruijn ##.%k.306 14 0) (bruijn ##.%x.733 0 0)))) (basic-block 2 2 (##.%x.734 ##.%p.735) ((##vcore.car (bruijn ##.expr.131 13 2)) (##vcore.eq? (bruijn ##.%x.734 0 0) '##qualified-case-lambda)) (if (bruijn ##.%p.735 0 1) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135")) ((bruijn ##.cdddr.84 19 12) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k41) (bruijn ##.expr.131 14 2))) (basic-block 2 2 (##.%x.739 ##.%p.740) ((##vcore.car (bruijn ##.expr.131 14 2)) (##vcore.eq? (bruijn ##.%x.739 0 0) 'letrec)) (if (bruijn ##.%p.740 0 1) ((bruijn ##.cadr.83 19 11) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k42) (bruijn ##.expr.131 14 2)) (basic-block 2 2 (##.%x.743 ##.%p.744) ((##vcore.car (bruijn ##.expr.131 15 2)) (##vcore.eq? (bruijn ##.%x.743 0 0) '##letrec)) (if (bruijn ##.%p.744 0 1) ((bruijn ##.caddr.82 20 10) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k48) (bruijn ##.expr.131 15 2)) (basic-block 2 2 (##.%x.747 ##.%p.748) ((##vcore.car (bruijn ##.expr.131 16 2)) (##vcore.eq? (bruijn ##.%x.747 0 0) 'set!)) (if (bruijn ##.%p.748 0 1) (basic-block 1 1 (##.%x.749) ((##vcore.cdr (bruijn ##.expr.131 17 2))) (##qualified-call (vanity compiler variables free-variables ##.loop.129) #f (bruijn ##.loop.129 18 0) (bruijn ##.%k.306 17 0) (bruijn ##.bound.130 17 1) (bruijn ##.%x.749 0 0) (bruijn ##.expr.131 17 2))) ((bruijn ##.map.85 21 13) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k54) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0lambda4) (bruijn ##.expr.131 16 2)))))))))))))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k21, self)))),
      VGetArg(statics, 9-1, 2));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 2));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0lambda);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k25, self)))),
      VGetArg(statics, 10-1, 2));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 11-1, 2));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V10qualified__lambda);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k28, self)))),
      VGetArg(statics, 11-1, 2));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 12-1, 2));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0case__lambda);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 14-1, 2));
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 14-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 13-1, 2));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V10qualified__case__lambda);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k41, self)))),
      VGetArg(statics, 14-1, 2));
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 14-1, 2));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0letrec);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k42, self)))),
      VGetArg(statics, 14-1, 2));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 15-1, 2));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V10letrec);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k48, self)))),
      VGetArg(statics, 15-1, 2));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 16-1, 2));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0set_B);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 17-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 17-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 17-1, 1);
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      VGetArg(statics, 17-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k54, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0lambda4, self)))),
      VGetArg(statics, 16-1, 2));
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.312 0 0) ((bruijn ##.%k.306 2 0) '()) (basic-block 2 2 (##.%x.713 ##.%p.714) ((##vcore.car (bruijn ##.expr.131 3 2)) (##vcore.eq? (bruijn ##.%x.713 0 0) 'quote)) (if (bruijn ##.%p.714 0 1) ((bruijn ##.%k.306 3 0) '()) (basic-block 2 2 (##.%x.715 ##.%p.716) ((##vcore.car (bruijn ##.expr.131 4 2)) (##vcore.eq? (bruijn ##.%x.715 0 0) '##foreign.function)) (if (bruijn ##.%p.716 0 1) ((bruijn ##.%k.306 4 0) '()) (basic-block 2 2 (##.%x.717 ##.%p.718) ((##vcore.car (bruijn ##.expr.131 5 2)) (##vcore.eq? (bruijn ##.%x.717 0 0) '##intrinsic)) (if (bruijn ##.%p.718 0 1) ((bruijn ##.%k.306 5 0) '()) (basic-block 2 2 (##.%x.719 ##.%p.720) ((##vcore.car (bruijn ##.expr.131 6 2)) (##vcore.eq? (bruijn ##.%x.719 0 0) '##basic-intrinsic)) (if (bruijn ##.%p.720 0 1) ((bruijn ##.%k.306 6 0) '()) (basic-block 2 2 (##.%x.721 ##.%p.722) ((##vcore.car (bruijn ##.expr.131 7 2)) (##vcore.eq? (bruijn ##.%x.721 0 0) 'if)) (if (bruijn ##.%p.722 0 1) ((bruijn ##.cadr.83 12 11) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k13) (bruijn ##.expr.131 7 2)) (basic-block 1 1 (##.%x.723) ((##vcore.car (bruijn ##.expr.131 8 2))) ((bruijn ##.memv.76 13 4) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k20) (bruijn ##.%x.723 0 0) '(##pair ##.pair.1289))))))))))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[2]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0quote);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[2]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V10foreign_Dfunction);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V10intrinsic);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V10basic__intrinsic);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 2));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0if);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k13, self)))),
      VGetArg(statics, 7-1, 2));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k20, self)))),
      self->vars[0],
      VEncodePointer(&_V10_Dpair_D1289, VPOINTER_PAIR));
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.711) ((##vcore.symbol? (bruijn ##.expr.131 1 2))) (if (bruijn ##.%p.711 0 0) ((bruijn ##.memv.76 6 4) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k9) (bruijn ##.expr.131 1 2) (bruijn ##.bound.130 1 1)) ((bruijn ##.atom?.75 6 3) (close _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k12) (bruijn ##.expr.131 1 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k9, self)))),
      statics->vars[2],
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k12, self)))),
      statics->vars[2]);
}
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0free__variables(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0free__variables" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0free__variables, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 2 ((close "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D123") (close "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D124")) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129")) (##qualified-call (vanity compiler variables free-variables ##.loop.129) #f (bruijn ##.loop.129 0 0) (bruijn ##.%k.291 2 0) '() (bruijn ##.expr.122 2 1) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D123, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D124, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VNULL;
    VWORD _arg2 = 
      statics->up->vars[1];
    VWORD _arg3 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.597 0 0) (bruijn ##.%k.595 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.598 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.596 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k57) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda6) (bruijn ##.kk.13.140 4 1)) ((bruijn ##.%k.595 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k57, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda6, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.750 1 0) (basic-block 1 1 (##.%x.909) ((##vcore.car (bruijn ##.expr.139 4 2))) ((bruijn ##.equal?.89 6 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k56) 'quote (bruijn ##.%x.909 0 0))) ((bruijn ##.%k.595 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k56, self)))),
      _V0quote,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.591 0 0) (bruijn ##.%k.589 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.592 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.590 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k61) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda7) (bruijn ##.kk.13.140 5 1)) ((bruijn ##.%k.589 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k61, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda7, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.751 1 0) (basic-block 1 1 (##.%x.908) ((##vcore.car (bruijn ##.expr.139 5 2))) ((bruijn ##.equal?.89 7 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k60) '##foreign.function (bruijn ##.%x.908 0 0))) ((bruijn ##.%k.589 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k60, self)))),
      _V10foreign_Dfunction,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.585 0 0) (bruijn ##.%k.583 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.586 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.584 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k65) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda8) (bruijn ##.kk.13.140 6 1)) ((bruijn ##.%k.583 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k65, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda8, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.752 1 0) (basic-block 1 1 (##.%x.907) ((##vcore.car (bruijn ##.expr.139 6 2))) ((bruijn ##.equal?.89 8 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k64) '##intrinsic (bruijn ##.%x.907 0 0))) ((bruijn ##.%k.583 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k64, self)))),
      _V10intrinsic,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.579 0 0) (bruijn ##.%k.577 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.580 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.578 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k69) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda9) (bruijn ##.kk.13.140 7 1)) ((bruijn ##.%k.577 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k69, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda9, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.753 1 0) (basic-block 1 1 (##.%x.906) ((##vcore.car (bruijn ##.expr.139 7 2))) ((bruijn ##.equal?.89 9 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k68) '##basic-intrinsic (bruijn ##.%x.906 0 0))) ((bruijn ##.%k.577 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k68, self)))),
      _V10basic__intrinsic,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.572 0 0) (bruijn ##.%k.567 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables variable-pure-body?) #t (bruijn ##.variable-pure-body?.115 14 2) (bruijn ##.%k.573 0 0) (bruijn ##.k.138 13 1) (bruijn ##.xs.900 2 0) (bruijn ##.body.903 1 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg2 = 
      statics->up->vars[0];
    VWORD _arg3 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q, _V60_V0vanity_V0compiler_V0variables)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.568 0 0) (basic-block 2 2 (##.expr.20.898 ##.%p.899) ((##vcore.cdr (bruijn ##.expr.139 10 2)) (##vcore.pair? (bruijn ##.expr.20.898 0 0))) (if (bruijn ##.%p.899 0 1) (basic-block 3 3 (##.xs.900 ##.expr.21.901 ##.%p.902) ((##vcore.car (bruijn ##.expr.20.898 1 0)) (##vcore.cdr (bruijn ##.expr.20.898 1 0)) (##vcore.pair? (bruijn ##.expr.21.901 0 1))) (if (bruijn ##.%p.902 0 2) (basic-block 3 3 (##.body.903 ##.%x.904 ##.%p.905) ((##vcore.car (bruijn ##.expr.21.901 1 1)) (##vcore.cdr (bruijn ##.expr.21.901 1 1)) (##vcore.null? (bruijn ##.%x.904 0 1))) (if (bruijn ##.%p.905 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k73) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda10) (bruijn ##.kk.13.140 11 1)) ((bruijn ##.%k.567 5 0) #f))) ((bruijn ##.%k.567 4 0) #f))) ((bruijn ##.%k.567 3 0) #f))) ((bruijn ##.%k.567 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k73, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda10, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.754 1 0) (basic-block 1 1 (##.%x.897) ((##vcore.car (bruijn ##.expr.139 8 2))) ((bruijn ##.equal?.89 10 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k72) 'lambda (bruijn ##.%x.897 0 0))) ((bruijn ##.%k.567 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k72, self)))),
      _V0lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.560 0 0) (bruijn ##.%k.558 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables variable-pure-body?) #t (bruijn ##.variable-pure-body?.115 16 2) (bruijn ##.%k.562 2 0) (bruijn ##.k.138 15 1) (bruijn ##.%x.896 1 0) (bruijn ##.%x.564 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 15-1, 1);
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q, _V60_V0vanity_V0compiler_V0variables)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda12, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (bruijn ##.p.154 0 2) (basic-block 1 1 (##.%x.896) ((##vcore.car (bruijn ##.body.153 1 1))) ((bruijn ##.cadr.83 16 11) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k78) (bruijn ##.body.153 1 1))) ((bruijn ##.%k.562 0 0) #f))
if(VDecodeBool(
_var2)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k78, self)))),
      statics->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.fold.86 14 14) (bruijn ##.%k.561 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda12) #t (bruijn ##.bodies.895 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 14)), 4,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda12, self)))),
      VEncodeBool(true),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.559 0 0) (basic-block 1 1 (##.bodies.895) ((##vcore.cdr (bruijn ##.expr.139 11 2))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k77) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda11) (bruijn ##.kk.13.140 10 1))) ((bruijn ##.%k.558 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 11-1, 2));
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k77, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda11, self)))),
      VGetArg(statics, 10-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.755 1 0) (basic-block 1 1 (##.%x.894) ((##vcore.car (bruijn ##.expr.139 9 2))) ((bruijn ##.equal?.89 11 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k76) 'case-lambda (bruijn ##.%x.894 0 0))) ((bruijn ##.%k.558 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k76, self)))),
      _V0case__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.553 0 0) (bruijn ##.%k.546 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables variable-pure-body?) #t (bruijn ##.variable-pure-body?.115 18 2) (bruijn ##.%k.554 0 0) (bruijn ##.k.138 17 1) (bruijn ##.xs.888 2 0) (bruijn ##.body.891 1 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 17-1, 1);
    VWORD _arg2 = 
      statics->up->vars[0];
    VWORD _arg3 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q, _V60_V0vanity_V0compiler_V0variables)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.547 0 0) (basic-block 2 2 (##.expr.24.880 ##.%p.881) ((##vcore.cdr (bruijn ##.expr.139 12 2)) (##vcore.pair? (bruijn ##.expr.24.880 0 0))) (if (bruijn ##.%p.881 0 1) (basic-block 3 3 (##.name.882 ##.expr.25.883 ##.%p.884) ((##vcore.car (bruijn ##.expr.24.880 1 0)) (##vcore.cdr (bruijn ##.expr.24.880 1 0)) (##vcore.pair? (bruijn ##.expr.25.883 0 1))) (if (bruijn ##.%p.884 0 2) (basic-block 3 3 (##.static?.885 ##.expr.26.886 ##.%p.887) ((##vcore.car (bruijn ##.expr.25.883 1 1)) (##vcore.cdr (bruijn ##.expr.25.883 1 1)) (##vcore.pair? (bruijn ##.expr.26.886 0 1))) (if (bruijn ##.%p.887 0 2) (basic-block 3 3 (##.xs.888 ##.expr.27.889 ##.%p.890) ((##vcore.car (bruijn ##.expr.26.886 1 1)) (##vcore.cdr (bruijn ##.expr.26.886 1 1)) (##vcore.pair? (bruijn ##.expr.27.889 0 1))) (if (bruijn ##.%p.890 0 2) (basic-block 3 3 (##.body.891 ##.%x.892 ##.%p.893) ((##vcore.car (bruijn ##.expr.27.889 1 1)) (##vcore.cdr (bruijn ##.expr.27.889 1 1)) (##vcore.null? (bruijn ##.%x.892 0 1))) (if (bruijn ##.%p.893 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k82) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda13) (bruijn ##.kk.13.140 15 1)) ((bruijn ##.%k.546 7 0) #f))) ((bruijn ##.%k.546 6 0) #f))) ((bruijn ##.%k.546 5 0) #f))) ((bruijn ##.%k.546 4 0) #f))) ((bruijn ##.%k.546 3 0) #f))) ((bruijn ##.%k.546 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k82, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda13, self)))),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.756 1 0) (basic-block 1 1 (##.%x.879) ((##vcore.car (bruijn ##.expr.139 10 2))) ((bruijn ##.equal?.89 12 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k81) '##qualified-lambda (bruijn ##.%x.879 0 0))) ((bruijn ##.%k.546 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k81, self)))),
      _V10qualified__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.539 0 0) (bruijn ##.%k.535 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables variable-pure-body?) #t (bruijn ##.variable-pure-body?.115 20 2) (bruijn ##.%k.541 2 0) (bruijn ##.k.138 19 1) (bruijn ##.%x.878 1 0) (bruijn ##.%x.543 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 19-1, 1);
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q, _V60_V0vanity_V0compiler_V0variables)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda15, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (bruijn ##.p.171 0 2) (basic-block 1 1 (##.%x.878) ((##vcore.car (bruijn ##.body.170 1 1))) ((bruijn ##.cadr.83 20 11) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k87) (bruijn ##.body.170 1 1))) ((bruijn ##.%k.541 0 0) #f))
if(VDecodeBool(
_var2)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k87, self)))),
      statics->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.fold.86 18 14) (bruijn ##.%k.540 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda15) #t (bruijn ##.bodies.877 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 14)), 4,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda15, self)))),
      VEncodeBool(true),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.536 0 0) (basic-block 2 2 (##.expr.29.871 ##.%p.872) ((##vcore.cdr (bruijn ##.expr.139 13 2)) (##vcore.pair? (bruijn ##.expr.29.871 0 0))) (if (bruijn ##.%p.872 0 1) (basic-block 3 3 (##.name.873 ##.expr.30.874 ##.%p.875) ((##vcore.car (bruijn ##.expr.29.871 1 0)) (##vcore.cdr (bruijn ##.expr.29.871 1 0)) (##vcore.pair? (bruijn ##.expr.30.874 0 1))) (if (bruijn ##.%p.875 0 2) (basic-block 2 2 (##.static?.876 ##.bodies.877) ((##vcore.car (bruijn ##.expr.30.874 1 1)) (##vcore.cdr (bruijn ##.expr.30.874 1 1))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k86) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda14) (bruijn ##.kk.13.140 14 1))) ((bruijn ##.%k.535 4 0) #f))) ((bruijn ##.%k.535 3 0) #f))) ((bruijn ##.%k.535 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 13-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k86, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda14, self)))),
      VGetArg(statics, 14-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.757 1 0) (basic-block 1 1 (##.%x.870) ((##vcore.car (bruijn ##.expr.139 11 2))) ((bruijn ##.equal?.89 13 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k85) '##qualified-case-lambda (bruijn ##.%x.870 0 0))) ((bruijn ##.%k.535 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 11-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k85, self)))),
      _V10qualified__case__lambda,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.528 0 0) (bruijn ##.%k.523 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.868 ##.%p.869) ((##vcore.eq? (bruijn ##.x.862 3 0) (bruijn ##.k.138 18 1)) (##vcore.not (bruijn ##.%x.868 0 0))) (if (bruijn ##.%p.869 0 1) (##qualified-call (vanity compiler variables variable-pure?) #t (bruijn ##.variable-pure?.114 19 1) (bruijn ##.%k.529 1 0) (bruijn ##.k.138 18 1) (bruijn ##.val.865 2 0)) ((bruijn ##.%k.529 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[0],
      VGetArg(statics, 18-1, 1));
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 18-1, 1);
    VWORD _arg2 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, _V60_V0vanity_V0compiler_V0variables)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.524 0 0) (basic-block 2 2 (##.expr.32.860 ##.%p.861) ((##vcore.cdr (bruijn ##.expr.139 14 2)) (##vcore.pair? (bruijn ##.expr.32.860 0 0))) (if (bruijn ##.%p.861 0 1) (basic-block 3 3 (##.x.862 ##.expr.33.863 ##.%p.864) ((##vcore.car (bruijn ##.expr.32.860 1 0)) (##vcore.cdr (bruijn ##.expr.32.860 1 0)) (##vcore.pair? (bruijn ##.expr.33.863 0 1))) (if (bruijn ##.%p.864 0 2) (basic-block 3 3 (##.val.865 ##.%x.866 ##.%p.867) ((##vcore.car (bruijn ##.expr.33.863 1 1)) (##vcore.cdr (bruijn ##.expr.33.863 1 1)) (##vcore.null? (bruijn ##.%x.866 0 1))) (if (bruijn ##.%p.867 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k91) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda16) (bruijn ##.kk.13.140 15 1)) ((bruijn ##.%k.523 5 0) #f))) ((bruijn ##.%k.523 4 0) #f))) ((bruijn ##.%k.523 3 0) #f))) ((bruijn ##.%k.523 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 14-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k91, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda16, self)))),
      VGetArg(statics, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.758 1 0) (basic-block 1 1 (##.%x.859) ((##vcore.car (bruijn ##.expr.139 12 2))) ((bruijn ##.equal?.89 14 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k90) 'set! (bruijn ##.%x.859 0 0))) ((bruijn ##.%k.523 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 12-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k90, self)))),
      _V0set_B,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.517 0 0) (bruijn ##.%k.512 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.858) ((##vcore.eq? (bruijn ##.x.852 3 0) (bruijn ##.k.138 19 1))) (if (bruijn ##.%p.858 0 0) ((bruijn ##.%k.518 1 0) (bruijn ##.%p.858 0 0)) (##qualified-call (vanity compiler variables variable-pure?) #t (bruijn ##.variable-pure?.114 20 1) (bruijn ##.%k.518 1 0) (bruijn ##.k.138 19 1) (bruijn ##.val.855 2 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[0],
      VGetArg(statics, 19-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 19-1, 1);
    VWORD _arg2 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, _V60_V0vanity_V0compiler_V0variables)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.513 0 0) (basic-block 2 2 (##.expr.35.850 ##.%p.851) ((##vcore.cdr (bruijn ##.expr.139 15 2)) (##vcore.pair? (bruijn ##.expr.35.850 0 0))) (if (bruijn ##.%p.851 0 1) (basic-block 3 3 (##.x.852 ##.expr.36.853 ##.%p.854) ((##vcore.car (bruijn ##.expr.35.850 1 0)) (##vcore.cdr (bruijn ##.expr.35.850 1 0)) (##vcore.pair? (bruijn ##.expr.36.853 0 1))) (if (bruijn ##.%p.854 0 2) (basic-block 3 3 (##.val.855 ##.%x.856 ##.%p.857) ((##vcore.car (bruijn ##.expr.36.853 1 1)) (##vcore.cdr (bruijn ##.expr.36.853 1 1)) (##vcore.null? (bruijn ##.%x.856 0 1))) (if (bruijn ##.%p.857 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k95) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda17) (bruijn ##.kk.13.140 16 1)) ((bruijn ##.%k.512 5 0) #f))) ((bruijn ##.%k.512 4 0) #f))) ((bruijn ##.%k.512 3 0) #f))) ((bruijn ##.%k.512 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 15-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k95, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda17, self)))),
      VGetArg(statics, 16-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.759 1 0) (basic-block 1 1 (##.%x.849) ((##vcore.car (bruijn ##.expr.139 13 2))) ((bruijn ##.equal?.89 15 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k94) 'define (bruijn ##.%x.849 0 0))) ((bruijn ##.%k.512 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 13-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k94, self)))),
      _V0define,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.504 0 0) (bruijn ##.%k.498 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.507 0 0) (##qualified-call (vanity compiler variables variable-pure?) #t (bruijn ##.variable-pure?.114 23 1) (bruijn ##.%k.505 2 0) (bruijn ##.k.138 22 1) (bruijn ##.val.844 3 0)) ((bruijn ##.%k.505 2 0) #f))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 22-1, 1);
    VWORD _arg2 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, _V60_V0vanity_V0compiler_V0variables)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.847 ##.%p.848) ((##vcore.eq? (bruijn ##.x.841 3 0) (bruijn ##.k.138 21 1)) (##vcore.not (bruijn ##.%x.847 0 0))) (if (bruijn ##.%p.848 0 1) (##qualified-call (vanity compiler variables variable-pure?) #t (bruijn ##.variable-pure?.114 22 1) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k100) (bruijn ##.k.138 21 1) (bruijn ##.cont.838 4 0)) ((bruijn ##.%k.505 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[0],
      VGetArg(statics, 21-1, 1));
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k100, self))));
    VWORD _arg1 = 
      VGetArg(statics, 21-1, 1);
    VWORD _arg2 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, _V60_V0vanity_V0compiler_V0variables)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.499 0 0) (basic-block 2 2 (##.expr.38.836 ##.%p.837) ((##vcore.cdr (bruijn ##.expr.139 16 2)) (##vcore.pair? (bruijn ##.expr.38.836 0 0))) (if (bruijn ##.%p.837 0 1) (basic-block 3 3 (##.cont.838 ##.expr.39.839 ##.%p.840) ((##vcore.car (bruijn ##.expr.38.836 1 0)) (##vcore.cdr (bruijn ##.expr.38.836 1 0)) (##vcore.pair? (bruijn ##.expr.39.839 0 1))) (if (bruijn ##.%p.840 0 2) (basic-block 3 3 (##.x.841 ##.expr.40.842 ##.%p.843) ((##vcore.car (bruijn ##.expr.39.839 1 1)) (##vcore.cdr (bruijn ##.expr.39.839 1 1)) (##vcore.pair? (bruijn ##.expr.40.842 0 1))) (if (bruijn ##.%p.843 0 2) (basic-block 3 3 (##.val.844 ##.%x.845 ##.%p.846) ((##vcore.car (bruijn ##.expr.40.842 1 1)) (##vcore.cdr (bruijn ##.expr.40.842 1 1)) (##vcore.null? (bruijn ##.%x.845 0 1))) (if (bruijn ##.%p.846 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k99) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda18) (bruijn ##.kk.13.140 18 1)) ((bruijn ##.%k.498 6 0) #f))) ((bruijn ##.%k.498 5 0) #f))) ((bruijn ##.%k.498 4 0) #f))) ((bruijn ##.%k.498 3 0) #f))) ((bruijn ##.%k.498 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 16-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k99, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda18, self)))),
      VGetArg(statics, 18-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.760 1 0) (basic-block 1 1 (##.%x.835) ((##vcore.car (bruijn ##.expr.139 14 2))) ((bruijn ##.equal?.89 16 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k98) 'set! (bruijn ##.%x.835 0 0))) ((bruijn ##.%k.498 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 14-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k98, self)))),
      _V0set_B,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.491 0 0) (bruijn ##.%k.485 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.494 0 0) (##qualified-call (vanity compiler variables variable-pure?) #t (bruijn ##.variable-pure?.114 24 1) (bruijn ##.%k.492 2 0) (bruijn ##.k.138 23 1) (bruijn ##.val.831 3 0)) ((bruijn ##.%k.492 2 0) #f))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 23-1, 1);
    VWORD _arg2 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, _V60_V0vanity_V0compiler_V0variables)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.834) ((##vcore.eq? (bruijn ##.x.828 3 0) (bruijn ##.k.138 22 1))) (if (bruijn ##.%p.834 0 0) ((bruijn ##.%k.492 1 0) (bruijn ##.%p.834 0 0)) (##qualified-call (vanity compiler variables variable-pure?) #t (bruijn ##.variable-pure?.114 23 1) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k105) (bruijn ##.k.138 22 1) (bruijn ##.cont.825 4 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[0],
      VGetArg(statics, 22-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k105, self))));
    VWORD _arg1 = 
      VGetArg(statics, 22-1, 1);
    VWORD _arg2 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, _V60_V0vanity_V0compiler_V0variables)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.486 0 0) (basic-block 2 2 (##.expr.42.823 ##.%p.824) ((##vcore.cdr (bruijn ##.expr.139 17 2)) (##vcore.pair? (bruijn ##.expr.42.823 0 0))) (if (bruijn ##.%p.824 0 1) (basic-block 3 3 (##.cont.825 ##.expr.43.826 ##.%p.827) ((##vcore.car (bruijn ##.expr.42.823 1 0)) (##vcore.cdr (bruijn ##.expr.42.823 1 0)) (##vcore.pair? (bruijn ##.expr.43.826 0 1))) (if (bruijn ##.%p.827 0 2) (basic-block 3 3 (##.x.828 ##.expr.44.829 ##.%p.830) ((##vcore.car (bruijn ##.expr.43.826 1 1)) (##vcore.cdr (bruijn ##.expr.43.826 1 1)) (##vcore.pair? (bruijn ##.expr.44.829 0 1))) (if (bruijn ##.%p.830 0 2) (basic-block 3 3 (##.val.831 ##.%x.832 ##.%p.833) ((##vcore.car (bruijn ##.expr.44.829 1 1)) (##vcore.cdr (bruijn ##.expr.44.829 1 1)) (##vcore.null? (bruijn ##.%x.832 0 1))) (if (bruijn ##.%p.833 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k104) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda19) (bruijn ##.kk.13.140 19 1)) ((bruijn ##.%k.485 6 0) #f))) ((bruijn ##.%k.485 5 0) #f))) ((bruijn ##.%k.485 4 0) #f))) ((bruijn ##.%k.485 3 0) #f))) ((bruijn ##.%k.485 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 17-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k104, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda19, self)))),
      VGetArg(statics, 19-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.761 1 0) (basic-block 1 1 (##.%x.822) ((##vcore.car (bruijn ##.expr.139 15 2))) ((bruijn ##.equal?.89 17 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k103) 'define (bruijn ##.%x.822 0 0))) ((bruijn ##.%k.485 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 15-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k103, self)))),
      _V0define,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.50.199 6 1) (bruijn ##.%k.470 2 0) (bruijn ##.expr.52.201 4 1) (bruijn ##.%x.471 1 0) (bruijn ##.%x.472 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.88 28 16) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k111) (bruijn ##.vals.49.203 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k111, self)))),
      statics->up->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.802 1 1) ((bruijn ##.reverse.88 27 16) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k110) (bruijn ##.xs.48.202 2 2)) ((bruijn ##.%k.470 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k110, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.804 1 1) (basic-block 3 3 (##.xs.805 ##.expr.54.806 ##.%p.807) ((##vcore.car (bruijn ##.expr.53.803 2 0)) (##vcore.cdr (bruijn ##.expr.53.803 2 0)) (##vcore.pair? (bruijn ##.expr.54.806 0 1))) (if (bruijn ##.%p.807 0 2) (basic-block 3 3 (##.vals.808 ##.%x.809 ##.%p.810) ((##vcore.car (bruijn ##.expr.54.806 1 1)) (##vcore.cdr (bruijn ##.expr.54.806 1 1)) (##vcore.null? (bruijn ##.%x.809 0 1))) (if (bruijn ##.%p.810 0 2) (basic-block 3 3 (##.%x.811 ##.%x.812 ##.%x.813) ((##vcore.cdr (bruijn ##.expr.52.201 8 1)) (##vcore.cons (bruijn ##.xs.805 2 0) (bruijn ##.xs.48.202 8 2)) (##vcore.cons (bruijn ##.vals.808 1 0) (bruijn ##.vals.49.203 8 3))) ((bruijn ##.kk.51.204 5 1) (bruijn ##.%k.462 3 0) (bruijn ##.%x.811 0 0) (bruijn ##.%x.812 0 1) (bruijn ##.%x.813 0 2))) ((bruijn ##.%k.462 2 0) #f))) ((bruijn ##.%k.462 1 0) #f))) ((bruijn ##.%k.462 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VGetArg(statics, 8-1, 2));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 8-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->up->vars[0],
      self->vars[0],
      self->vars[1],
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.50.199 8 1) (bruijn ##.%k.458 3 0) (bruijn ##.expr.52.201 6 1) (bruijn ##.%x.459 1 0) (bruijn ##.%x.460 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.88 30 16) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k116) (bruijn ##.vals.49.203 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k116, self)))),
      VGetArg(statics, 5-1, 3));
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k114(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.88 29 16) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k115) (bruijn ##.xs.48.202 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k115, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0lambda23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.expr.53.803 ##.%p.804) ((##vcore.car (bruijn ##.expr.52.201 4 1)) (##vcore.pair? (bruijn ##.expr.53.803 0 0))) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k113) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k114)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k113, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k114, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.457 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0lambda23))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0lambda23, self)))));
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k112(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.456 1 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0lambda22) (bruijn ##.loop.200 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0lambda22, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 2 2 (##.%x.801 ##.%p.802) ((##vcore.pair? (bruijn ##.expr.52.201 1 1)) (##vcore.not (bruijn ##.%x.801 0 0))) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k109) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k112)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k109, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k112, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda21, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200")) (##qualified-call (vanity compiler variables variable-pure? ##.loop.200) #f (bruijn ##.loop.200 0 0) (bruijn ##.%k.455 1 0) (bruijn ##.expr.47.800 3 0) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.454 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda21))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda21, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.478 0 0) (bruijn ##.%k.474 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.820 ##.%x.821) ((##vcore.cons (bruijn ##.body.817 2 0) (bruijn ##.vals.211 5 3)) (##vcore.cons 'begin (bruijn ##.%x.820 0 0))) (##qualified-call (vanity compiler variables variable-pure-body?) #t (bruijn ##.variable-pure-body?.115 26 2) (bruijn ##.%k.479 1 0) (bruijn ##.k.138 25 1) (bruijn ##.xs.210 5 2) (bruijn ##.%x.821 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 3));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0begin,
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 25-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 2);
    VWORD _arg3 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q, _V60_V0vanity_V0compiler_V0variables)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda24, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.814) ((##vcore.null? (bruijn ##.tail-expr.209 1 1))) (if (bruijn ##.%p.814 0 0) (basic-block 2 2 (##.expr.55.815 ##.%p.816) ((##vcore.cdr (bruijn ##.expr.46.798 4 0)) (##vcore.pair? (bruijn ##.expr.55.815 0 0))) (if (bruijn ##.%p.816 0 1) (basic-block 3 3 (##.body.817 ##.%x.818 ##.%p.819) ((##vcore.car (bruijn ##.expr.55.815 1 0)) (##vcore.cdr (bruijn ##.expr.55.815 1 0)) (##vcore.null? (bruijn ##.%x.818 0 1))) (if (bruijn ##.%p.819 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k117) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda25) (bruijn ##.kk.13.140 22 1)) ((bruijn ##.%k.474 3 0) #f))) ((bruijn ##.%k.474 2 0) #f))) ((bruijn ##.%k.474 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k117, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda25, self)))),
      VGetArg(statics, 22-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.452 0 0) (basic-block 2 2 (##.expr.46.798 ##.%p.799) ((##vcore.cdr (bruijn ##.expr.139 18 2)) (##vcore.pair? (bruijn ##.expr.46.798 0 0))) (if (bruijn ##.%p.799 0 1) (basic-block 1 1 (##.expr.47.800) ((##vcore.car (bruijn ##.expr.46.798 1 0))) (##vcore.call-with-values (bruijn ##.%k.451 4 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda20) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda24))) ((bruijn ##.%k.451 3 0) #f))) ((bruijn ##.%k.451 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 18-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda20, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda24, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.762 1 0) (basic-block 1 1 (##.%x.797) ((##vcore.car (bruijn ##.expr.139 16 2))) ((bruijn ##.equal?.89 18 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k108) 'letrec (bruijn ##.%x.797 0 0))) ((bruijn ##.%k.451 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 16-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k108, self)))),
      _V0letrec,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.62.218 6 1) (bruijn ##.%k.436 2 0) (bruijn ##.expr.64.220 4 1) (bruijn ##.%x.437 1 0) (bruijn ##.%x.438 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->up->vars[1],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.88 30 16) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k123) (bruijn ##.vals.61.222 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k123, self)))),
      statics->up->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.777 1 1) ((bruijn ##.reverse.88 29 16) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k122) (bruijn ##.xs.60.221 2 2)) ((bruijn ##.%k.436 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k122, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.779 1 1) (basic-block 3 3 (##.xs.780 ##.expr.66.781 ##.%p.782) ((##vcore.car (bruijn ##.expr.65.778 2 0)) (##vcore.cdr (bruijn ##.expr.65.778 2 0)) (##vcore.pair? (bruijn ##.expr.66.781 0 1))) (if (bruijn ##.%p.782 0 2) (basic-block 3 3 (##.vals.783 ##.%x.784 ##.%p.785) ((##vcore.car (bruijn ##.expr.66.781 1 1)) (##vcore.cdr (bruijn ##.expr.66.781 1 1)) (##vcore.null? (bruijn ##.%x.784 0 1))) (if (bruijn ##.%p.785 0 2) (basic-block 3 3 (##.%x.786 ##.%x.787 ##.%x.788) ((##vcore.cdr (bruijn ##.expr.64.220 8 1)) (##vcore.cons (bruijn ##.xs.780 2 0) (bruijn ##.xs.60.221 8 2)) (##vcore.cons (bruijn ##.vals.783 1 0) (bruijn ##.vals.61.222 8 3))) ((bruijn ##.kk.63.223 5 1) (bruijn ##.%k.428 3 0) (bruijn ##.%x.786 0 0) (bruijn ##.%x.787 0 1) (bruijn ##.%x.788 0 2))) ((bruijn ##.%k.428 2 0) #f))) ((bruijn ##.%k.428 1 0) #f))) ((bruijn ##.%k.428 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VGetArg(statics, 8-1, 2));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 8-1, 3));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->up->vars[0],
      self->vars[0],
      self->vars[1],
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.62.218 8 1) (bruijn ##.%k.424 3 0) (bruijn ##.expr.64.220 6 1) (bruijn ##.%x.425 1 0) (bruijn ##.%x.426 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.88 32 16) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k128) (bruijn ##.vals.61.222 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k128, self)))),
      VGetArg(statics, 5-1, 3));
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k126(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.88 31 16) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k127) (bruijn ##.xs.60.221 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k127, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0lambda29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.expr.65.778 ##.%p.779) ((##vcore.car (bruijn ##.expr.64.220 4 1)) (##vcore.pair? (bruijn ##.expr.65.778 0 0))) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k125) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k126)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k125, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k126, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0lambda28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.423 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0lambda29))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0lambda29, self)))));
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k124(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.422 1 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0lambda28) (bruijn ##.loop.219 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0lambda28, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 2 2 (##.%x.776 ##.%p.777) ((##vcore.pair? (bruijn ##.expr.64.220 1 1)) (##vcore.not (bruijn ##.%x.776 0 0))) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k121) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k124)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k121, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k124, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219")) (##qualified-call (vanity compiler variables variable-pure? ##.loop.219) #f (bruijn ##.loop.219 0 0) (bruijn ##.%k.421 1 0) (bruijn ##.expr.59.775 3 0) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.420 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda27))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda27, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.444 0 0) (bruijn ##.%k.440 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.795 ##.%x.796) ((##vcore.cons (bruijn ##.body.792 2 0) (bruijn ##.vals.230 5 3)) (##vcore.cons 'begin (bruijn ##.%x.795 0 0))) (##qualified-call (vanity compiler variables variable-pure-body?) #t (bruijn ##.variable-pure-body?.115 28 2) (bruijn ##.%k.445 1 0) (bruijn ##.k.138 27 1) (bruijn ##.xs.229 5 2) (bruijn ##.%x.796 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 3));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0begin,
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 27-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 2);
    VWORD _arg3 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q, _V60_V0vanity_V0compiler_V0variables)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda30, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 1 1 (##.%p.789) ((##vcore.null? (bruijn ##.tail-expr.228 1 1))) (if (bruijn ##.%p.789 0 0) (basic-block 2 2 (##.expr.67.790 ##.%p.791) ((##vcore.cdr (bruijn ##.expr.58.773 4 0)) (##vcore.pair? (bruijn ##.expr.67.790 0 0))) (if (bruijn ##.%p.791 0 1) (basic-block 3 3 (##.body.792 ##.%x.793 ##.%p.794) ((##vcore.car (bruijn ##.expr.67.790 1 0)) (##vcore.cdr (bruijn ##.expr.67.790 1 0)) (##vcore.null? (bruijn ##.%x.793 0 1))) (if (bruijn ##.%p.794 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k129) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda31) (bruijn ##.kk.13.140 24 1)) ((bruijn ##.%k.440 3 0) #f))) ((bruijn ##.%k.440 2 0) #f))) ((bruijn ##.%k.440 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k129, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda31, self)))),
      VGetArg(statics, 24-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.417 0 0) (basic-block 2 2 (##.expr.57.771 ##.%p.772) ((##vcore.cdr (bruijn ##.expr.139 19 2)) (##vcore.pair? (bruijn ##.expr.57.771 0 0))) (if (bruijn ##.%p.772 0 1) (basic-block 2 2 (##.expr.58.773 ##.%p.774) ((##vcore.cdr (bruijn ##.expr.57.771 1 0)) (##vcore.pair? (bruijn ##.expr.58.773 0 0))) (if (bruijn ##.%p.774 0 1) (basic-block 1 1 (##.expr.59.775) ((##vcore.car (bruijn ##.expr.58.773 1 0))) (##vcore.call-with-values (bruijn ##.%k.416 5 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda26) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda30))) ((bruijn ##.%k.416 4 0) #f))) ((bruijn ##.%k.416 3 0) #f))) ((bruijn ##.%k.416 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 19-1, 2));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 5-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda26, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda30, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.763 1 0) (basic-block 1 1 (##.%x.770) ((##vcore.car (bruijn ##.expr.139 17 2))) ((bruijn ##.equal?.89 19 17) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k120) '##letrec (bruijn ##.%x.770 0 0))) ((bruijn ##.%k.416 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 17-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k120, self)))),
      _V10letrec,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.397 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k131(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.396 14 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda32) (bruijn ##.kk.13.140 14 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 14-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda32, self)))),
      VGetArg(statics, 14-1, 1));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.70.234 5 1) (bruijn ##.%k.407 1 0) (bruijn ##.expr.72.236 3 1) (bruijn ##.%x.408 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.765 1 1) ((bruijn ##.reverse.88 23 16) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0k133) (bruijn ##.xs.69.237 2 2)) ((bruijn ##.%k.407 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0k133, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.70.234 7 1) (bruijn ##.%k.402 2 0) (bruijn ##.expr.72.236 5 1) (bruijn ##.%x.403 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0k135(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.88 25 16) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0k136) (bruijn ##.xs.69.237 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0k136, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.xs.766 ##.%x.767 ##.%x.768) ((##vcore.car (bruijn ##.expr.72.236 4 1)) (##vcore.cdr (bruijn ##.expr.72.236 4 1)) (##vcore.cons (bruijn ##.xs.766 0 0) (bruijn ##.xs.69.237 4 2))) ((bruijn ##.kk.71.238 1 1) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0k135) (bruijn ##.%x.767 0 1) (bruijn ##.%x.768 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0k135, self)))),
      self->vars[1],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.401 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0lambda36))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0lambda36, self)))));
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0k134(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.400 1 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0lambda35) (bruijn ##.loop.235 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0lambda35, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.764 ##.%p.765) ((##vcore.pair? (bruijn ##.expr.72.236 1 1)) (##vcore.not (bruijn ##.%x.764 0 0))) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0k132) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0k134)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0k132, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0k134, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda34, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235")) (##qualified-call (vanity compiler variables variable-pure? ##.loop.235) #f (bruijn ##.loop.235 0 0) (bruijn ##.%k.399 1 0) (bruijn ##.expr.139 18 2) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 18-1, 2);
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.398 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda34))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda34, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.412 0 0) (bruijn ##.%k.410 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda39, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (if (bruijn ##.p.243 0 2) (##qualified-call (vanity compiler variables variable-pure?) #t (bruijn ##.variable-pure?.114 20 1) (bruijn ##.%k.414 0 0) (bruijn ##.k.138 19 1) (bruijn ##.x.242 0 1)) ((bruijn ##.%k.414 0 0) #f))
if(VDecodeBool(
_var2)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 19-1, 1);
    VWORD _arg2 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, _V60_V0vanity_V0compiler_V0variables)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.fold.86 20 14) (bruijn ##.%k.413 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda39) #t (bruijn ##.xs.241 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 14)), 4,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda39, self)))),
      VEncodeBool(true),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda37, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.769) ((##vcore.null? (bruijn ##.tail-expr.240 1 1))) (if (bruijn ##.%p.769 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k137) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda38) (bruijn ##.kk.13.140 16 1)) ((bruijn ##.%k.410 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k137, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda38, self)))),
      VGetArg(statics, 16-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k130(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k131) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda33) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda37))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k131, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda33, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda37, self)))));
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k118(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.763) ((##vcore.pair? (bruijn ##.expr.139 15 2))) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k119) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k130)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 15-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k119, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k130, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k106(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.762) ((##vcore.pair? (bruijn ##.expr.139 14 2))) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k107) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k118)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 14-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k107, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k118, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k101(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.761) ((##vcore.pair? (bruijn ##.expr.139 13 2))) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k102) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k106)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 13-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k102, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k106, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k96(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.760) ((##vcore.pair? (bruijn ##.expr.139 12 2))) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k97) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k101)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 12-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k97, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k101, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k92(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.759) ((##vcore.pair? (bruijn ##.expr.139 11 2))) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k93) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k96)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 11-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k93, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k96, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k88(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.758) ((##vcore.pair? (bruijn ##.expr.139 10 2))) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k89) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k92)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 10-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k89, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k92, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k83(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.757) ((##vcore.pair? (bruijn ##.expr.139 9 2))) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k84) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k88)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 9-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k84, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k88, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k79(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.756) ((##vcore.pair? (bruijn ##.expr.139 8 2))) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k80) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k83)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 8-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k80, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k83, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k74(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.755) ((##vcore.pair? (bruijn ##.expr.139 7 2))) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k75) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k79)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 7-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k75, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k79, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k70(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.754) ((##vcore.pair? (bruijn ##.expr.139 6 2))) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k71) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k74)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k71, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k74, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k66(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.753) ((##vcore.pair? (bruijn ##.expr.139 5 2))) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k67) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k70)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k67, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k70, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k62(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.752) ((##vcore.pair? (bruijn ##.expr.139 4 2))) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k63) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k66)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k63, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k66, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k58(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.751) ((##vcore.pair? (bruijn ##.expr.139 3 2))) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k59) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k62)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k59, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k62, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.750) ((##vcore.pair? (bruijn ##.expr.139 2 2))) ((close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k55) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k58)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k55, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k58, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.%k.395 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda5))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda5, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q_V0k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.601 0 0) ((bruijn ##.%k.600 1 0) #t) (##qualified-call (vanity compiler variables variable-pure?) #t (bruijn ##.variable-pure?.114 2 1) (bruijn ##.%k.600 1 0) (bruijn ##.k.244 1 1) (bruijn ##.body.246 1 3)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, _V60_V0vanity_V0compiler_V0variables)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (##qualified-call (vanity compiler variables memtail) #t (bruijn ##.memtail.116 1 3) (close _V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q_V0k138) (bruijn ##.k.244 0 1) (bruijn ##.xs.245 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q_V0k138, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0memtail, _V60_V0vanity_V0compiler_V0variables)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0memtail(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0memtail(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0memtail" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0memtail, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.910) ((##vcore.pair? (bruijn ##.args.248 1 2))) (if (bruijn ##.%p.910 0 0) (basic-block 2 2 (##.%x.911 ##.%p.912) ((##vcore.car (bruijn ##.args.248 2 2)) (##vcore.eq? (bruijn ##.x.247 2 1) (bruijn ##.%x.911 0 0))) (if (bruijn ##.%p.912 0 1) ((bruijn ##.%k.602 2 0) (bruijn ##.%p.912 0 1)) (basic-block 1 1 (##.%x.913) ((##vcore.cdr (bruijn ##.args.248 3 2))) (##qualified-call (vanity compiler variables memtail) #t (bruijn ##.memtail.116 4 3) (bruijn ##.%k.602 3 0) (bruijn ##.x.247 3 1) (bruijn ##.%x.913 0 0))))) (basic-block 1 1 (##.%r.914) ((##vcore.eq? (bruijn ##.x.247 2 1) (bruijn ##.args.248 2 2))) ((bruijn ##.%k.602 2 0) (bruijn ##.%r.914 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[1],
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[2]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0memtail, _V60_V0vanity_V0compiler_V0variables)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0memtail(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[1],
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251_V0k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.symbol->string (bruijn ##.%k.616 1 0) (bruijn ##.%x.617 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251_V0k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.919 1 1) (##qualified-call (vanity compiler variables mangle-symbol) #t (bruijn ##.mangle-symbol.119 9 6) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251_V0k141) (bruijn ##.e.918 1 0)) ((bruijn ##.compiler-error.90 10 18) (bruijn ##.%k.616 0 0) (##string ##.string.1795) (bruijn ##.e.918 1 0)))
if(VDecodeBool(
statics->vars[1])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251_V0k141, self))));
    VWORD _arg1 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol, _V60_V0vanity_V0compiler_V0variables)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 18)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1795.sym, VPOINTER_OTHER),
      statics->vars[0]);
}
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251_V0k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.920) ((##vcore.cdr (bruijn ##.ks.253 5 2))) (##qualified-call (vanity compiler variables mangle-library ##.loop.251) #f (bruijn ##.loop.251 6 0) (bruijn ##.%k.610 5 0) (bruijn ##.%x.612 1 0) (bruijn ##.%x.920 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251_V0k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.string-append.91 10 19) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251_V0k143) (bruijn ##.%x.614 0 0) (bruijn ##.knil.252 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 19)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251_V0k143, self)))),
      _var0,
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.917) ((##vcore.null? (bruijn ##.ks.253 1 2))) (if (bruijn ##.%p.917 0 0) ((bruijn ##.%k.610 1 0) (bruijn ##.knil.252 1 1)) (basic-block 2 2 (##.e.918 ##.%p.919) ((##vcore.car (bruijn ##.ks.253 2 2)) (##vcore.symbol? (bruijn ##.e.918 0 0))) ((close _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251_V0k140) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251_V0k142)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    self->vars[1] = _VBasic_VSymbolP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251_V0k140, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251_V0k142, self)))));
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables mangle-library ##.loop.251) #f (bruijn ##.loop.251 1 0) (bruijn ##.%k.607 5 0) (##string ##.string.1801) (bruijn ##.%x.618 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1801.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.915) ((##vcore.string? (bruijn ##.lib.250 1 0))) (if (bruijn ##.%p.915 0 0) ((bruijn ##.%k.607 2 0) (bruijn ##.lib.250 1 0)) (basic-block 1 1 (##.%p.916) ((##vcore.pair? (bruijn ##.lib.250 2 0))) (if (bruijn ##.%p.916 0 0) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251")) ((bruijn ##.reverse.88 6 16) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k144) (bruijn ##.lib.250 3 0))) ((bruijn ##.compiler-error.90 5 18) (bruijn ##.%k.607 3 0) (##string ##.string.1802) (bruijn ##.lib.250 2 0))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k144, self)))),
      statics->up->up->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 18)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1802.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__library(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__library" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__library, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler variables import-path) #t (bruijn ##.import-path.118 1 5) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k139) (bruijn ##.lib.249 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k139, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path, _V60_V0vanity_V0compiler_V0variables)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0import__path(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.650 0 0) (bruijn ##.%k.647 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables import-path) #t (bruijn ##.import-path.118 9 5) (bruijn ##.%k.651 0 0) (bruijn ##.import.945 1 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path, _V60_V0vanity_V0compiler_V0variables)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0import__path(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.648 0 0) (basic-block 2 2 (##.expr.5.943 ##.%p.944) ((##vcore.cdr (bruijn ##.import.255 6 1)) (##vcore.pair? (bruijn ##.expr.5.943 0 0))) (if (bruijn ##.%p.944 0 1) (basic-block 1 1 (##.import.945) ((##vcore.car (bruijn ##.expr.5.943 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k147) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda41) (bruijn ##.kk.2.256 6 1))) ((bruijn ##.%k.647 3 0) #f))) ((bruijn ##.%k.647 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k147, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda41, self)))),
      VGetArg(statics, 6-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.921 1 0) (basic-block 1 1 (##.%x.942) ((##vcore.car (bruijn ##.import.255 4 1))) ((bruijn ##.equal?.89 6 17) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k146) 'only (bruijn ##.%x.942 0 0))) ((bruijn ##.%k.647 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k146, self)))),
      _V0only,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.643 0 0) (bruijn ##.%k.640 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables import-path) #t (bruijn ##.import-path.118 10 5) (bruijn ##.%k.644 0 0) (bruijn ##.import.941 1 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path, _V60_V0vanity_V0compiler_V0variables)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0import__path(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.641 0 0) (basic-block 2 2 (##.expr.7.939 ##.%p.940) ((##vcore.cdr (bruijn ##.import.255 7 1)) (##vcore.pair? (bruijn ##.expr.7.939 0 0))) (if (bruijn ##.%p.940 0 1) (basic-block 1 1 (##.import.941) ((##vcore.car (bruijn ##.expr.7.939 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k151) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda42) (bruijn ##.kk.2.256 7 1))) ((bruijn ##.%k.640 3 0) #f))) ((bruijn ##.%k.640 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k151, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda42, self)))),
      VGetArg(statics, 7-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.922 1 0) (basic-block 1 1 (##.%x.938) ((##vcore.car (bruijn ##.import.255 5 1))) ((bruijn ##.equal?.89 7 17) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k150) 'except (bruijn ##.%x.938 0 0))) ((bruijn ##.%k.640 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k150, self)))),
      _V0except,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.635 0 0) (bruijn ##.%k.630 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables import-path) #t (bruijn ##.import-path.118 12 5) (bruijn ##.%k.636 0 0) (bruijn ##.import.932 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path, _V60_V0vanity_V0compiler_V0variables)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0import__path(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.631 0 0) (basic-block 2 2 (##.expr.9.930 ##.%p.931) ((##vcore.cdr (bruijn ##.import.255 8 1)) (##vcore.pair? (bruijn ##.expr.9.930 0 0))) (if (bruijn ##.%p.931 0 1) (basic-block 3 3 (##.import.932 ##.expr.10.933 ##.%p.934) ((##vcore.car (bruijn ##.expr.9.930 1 0)) (##vcore.cdr (bruijn ##.expr.9.930 1 0)) (##vcore.pair? (bruijn ##.expr.10.933 0 1))) (if (bruijn ##.%p.934 0 2) (basic-block 3 3 (##.prefix.935 ##.%x.936 ##.%p.937) ((##vcore.car (bruijn ##.expr.10.933 1 1)) (##vcore.cdr (bruijn ##.expr.10.933 1 1)) (##vcore.null? (bruijn ##.%x.936 0 1))) (if (bruijn ##.%p.937 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k155) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda43) (bruijn ##.kk.2.256 9 1)) ((bruijn ##.%k.630 5 0) #f))) ((bruijn ##.%k.630 4 0) #f))) ((bruijn ##.%k.630 3 0) #f))) ((bruijn ##.%k.630 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k155, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda43, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.923 1 0) (basic-block 1 1 (##.%x.929) ((##vcore.car (bruijn ##.import.255 6 1))) ((bruijn ##.equal?.89 8 17) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k154) 'prefix (bruijn ##.%x.929 0 0))) ((bruijn ##.%k.630 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k154, self)))),
      _V0prefix,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.626 0 0) (bruijn ##.%k.623 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler variables import-path) #t (bruijn ##.import-path.118 12 5) (bruijn ##.%k.627 0 0) (bruijn ##.import.928 1 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0variables;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path, _V60_V0vanity_V0compiler_V0variables)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0import__path(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.624 0 0) (basic-block 2 2 (##.expr.12.926 ##.%p.927) ((##vcore.cdr (bruijn ##.import.255 9 1)) (##vcore.pair? (bruijn ##.expr.12.926 0 0))) (if (bruijn ##.%p.927 0 1) (basic-block 1 1 (##.import.928) ((##vcore.car (bruijn ##.expr.12.926 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k159) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda44) (bruijn ##.kk.2.256 9 1))) ((bruijn ##.%k.623 3 0) #f))) ((bruijn ##.%k.623 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k159, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda44, self)))),
      VGetArg(statics, 9-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.924 1 0) (basic-block 1 1 (##.%x.925) ((##vcore.car (bruijn ##.import.255 7 1))) ((bruijn ##.equal?.89 9 17) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k158) 'rename (bruijn ##.%x.925 0 0))) ((bruijn ##.%k.623 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k158, self)))),
      _V0rename,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.621 0 0) (bruijn ##.import.255 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 1));
}
static void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k160(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.620 4 0) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda45) (bruijn ##.kk.2.256 4 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda45, self)))),
      statics->up->up->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k156(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.924) ((##vcore.pair? (bruijn ##.import.255 5 1))) ((close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k157) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k160)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k157, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k160, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k152(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.923) ((##vcore.pair? (bruijn ##.import.255 4 1))) ((close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k153) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k156)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k153, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k156, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k148(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.922) ((##vcore.pair? (bruijn ##.import.255 3 1))) ((close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k149) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k152)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k149, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k152, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda40, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.921) ((##vcore.pair? (bruijn ##.import.255 2 1))) ((close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k145) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0k148)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k145, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k148, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0import__path(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0import__path" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0import__path, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.%k.619 0 0) (close _V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda40))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda40, self)))));
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.948 1 1) ((bruijn ##.display.94 7 22) (bruijn ##.%k.679 0 0) (##string ##.string.1907) (bruijn ##.port.275 2 0)) ((bruijn ##.display.94 7 22) (bruijn ##.%k.679 0 0) (##string ##.string.1908) (bruijn ##.port.275 2 0)))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 22)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1907.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 22)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1908.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
}
}
static void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276_V0k166(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.string->symbol (bruijn ##.%k.654 2 0) (bruijn ##.ret.278 0 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      statics->up->vars[0],
      self->vars[0]);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276_V0k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.close-port.92 10 20) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276_V0k166) (bruijn ##.port.275 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 20)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276_V0k166, self)))),
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276_V0k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.951 1 1) ((bruijn ##.%k.659 0 0) (##string ##.string.1932)) (basic-block 1 1 (##.%p.953) ((##vcore.eq? (bruijn ##.x.1.950 2 0) '#\!)) (if (bruijn ##.%p.953 0 0) ((bruijn ##.%k.659 1 0) (##string ##.string.1933)) (basic-block 1 1 (##.%p.954) ((##vcore.eq? (bruijn ##.x.1.950 3 0) '#\$)) (if (bruijn ##.%p.954 0 0) ((bruijn ##.%k.659 2 0) (##string ##.string.1934)) (basic-block 1 1 (##.%p.955) ((##vcore.eq? (bruijn ##.x.1.950 4 0) '#\%)) (if (bruijn ##.%p.955 0 0) ((bruijn ##.%k.659 3 0) (##string ##.string.1935)) (basic-block 1 1 (##.%p.956) ((##vcore.eq? (bruijn ##.x.1.950 5 0) '#\&)) (if (bruijn ##.%p.956 0 0) ((bruijn ##.%k.659 4 0) (##string ##.string.1936)) (basic-block 1 1 (##.%p.957) ((##vcore.eq? (bruijn ##.x.1.950 6 0) '#\*)) (if (bruijn ##.%p.957 0 0) ((bruijn ##.%k.659 5 0) (##string ##.string.1937)) (basic-block 1 1 (##.%p.958) ((##vcore.eq? (bruijn ##.x.1.950 7 0) '#\/)) (if (bruijn ##.%p.958 0 0) ((bruijn ##.%k.659 6 0) (##string ##.string.1938)) (basic-block 1 1 (##.%p.959) ((##vcore.eq? (bruijn ##.x.1.950 8 0) '#\:)) (if (bruijn ##.%p.959 0 0) ((bruijn ##.%k.659 7 0) (##string ##.string.1939)) (basic-block 1 1 (##.%p.960) ((##vcore.eq? (bruijn ##.x.1.950 9 0) '#\<)) (if (bruijn ##.%p.960 0 0) ((bruijn ##.%k.659 8 0) (##string ##.string.1940)) (basic-block 1 1 (##.%p.961) ((##vcore.eq? (bruijn ##.x.1.950 10 0) '#\=)) (if (bruijn ##.%p.961 0 0) ((bruijn ##.%k.659 9 0) (##string ##.string.1941)) (basic-block 1 1 (##.%p.962) ((##vcore.eq? (bruijn ##.x.1.950 11 0) '#\>)) (if (bruijn ##.%p.962 0 0) ((bruijn ##.%k.659 10 0) (##string ##.string.1942)) (basic-block 1 1 (##.%p.963) ((##vcore.eq? (bruijn ##.x.1.950 12 0) '#\?)) (if (bruijn ##.%p.963 0 0) ((bruijn ##.%k.659 11 0) (##string ##.string.1943)) (basic-block 1 1 (##.%p.964) ((##vcore.eq? (bruijn ##.x.1.950 13 0) '#\^)) (if (bruijn ##.%p.964 0 0) ((bruijn ##.%k.659 12 0) (##string ##.string.1944)) (basic-block 1 1 (##.%p.965) ((##vcore.eq? (bruijn ##.x.1.950 14 0) '#\_)) (if (bruijn ##.%p.965 0 0) ((bruijn ##.%k.659 13 0) (##string ##.string.1945)) (basic-block 1 1 (##.%p.966) ((##vcore.eq? (bruijn ##.x.1.950 15 0) '#\~)) (if (bruijn ##.%p.966 0 0) ((bruijn ##.%k.659 14 0) (##string ##.string.1946)) (basic-block 1 1 (##.%p.967) ((##vcore.eq? (bruijn ##.x.1.950 16 0) '#\+)) (if (bruijn ##.%p.967 0 0) ((bruijn ##.%k.659 15 0) (##string ##.string.1947)) (basic-block 1 1 (##.%p.968) ((##vcore.eq? (bruijn ##.x.1.950 17 0) '#\-)) (if (bruijn ##.%p.968 0 0) ((bruijn ##.%k.659 16 0) (##string ##.string.1948)) (basic-block 1 1 (##.%p.969) ((##vcore.eq? (bruijn ##.x.1.950 18 0) '#\.)) (if (bruijn ##.%p.969 0 0) ((bruijn ##.%k.659 17 0) (##string ##.string.1949)) (basic-block 1 1 (##.%p.970) ((##vcore.eq? (bruijn ##.x.1.950 19 0) '#\@)) (if (bruijn ##.%p.970 0 0) ((bruijn ##.%k.659 18 0) (##string ##.string.1950)) (basic-block 1 1 (##.%r.971) ((##vcore.string-ref (bruijn ##.str.273 27 0) (bruijn ##.i.277 22 1))) ((bruijn ##.%k.659 19 0) (bruijn ##.%r.971 0 0))))))))))))))))))))))))))))))))))))))))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D1932.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[0],
      VEncodeChar('!'));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1933.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[0],
      VEncodeChar('$'));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1934.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->up->vars[0],
      VEncodeChar('%'));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1935.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      VEncodeChar('&'));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1936.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      VEncodeChar('*'));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1937.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      VEncodeChar('/'));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1938.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      VEncodeChar(':'));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1939.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      VEncodeChar('<'));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1940.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 10-1, 0),
      VEncodeChar('='));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1941.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 11-1, 0),
      VEncodeChar('>'));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1942.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 12-1, 0),
      VEncodeChar('?'));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1943.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 13-1, 0),
      VEncodeChar('^'));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1944.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 14-1, 0),
      VEncodeChar('_'));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1945.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 15-1, 0),
      VEncodeChar('~'));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1946.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 16-1, 0),
      VEncodeChar('+'));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1947.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 17-1, 0),
      VEncodeChar('-'));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1948.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 18-1, 0),
      VEncodeChar('.'));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1949.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 19-1, 0),
      VEncodeChar('@'));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1950.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      VGetArg(statics, 27-1, 0),
      VGetArg(statics, 22-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 1,
      self->vars[0]);
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
}
static void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276_V0k169(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.952) ((##vcore.+ (bruijn ##.i.277 4 1) 1)) (##qualified-call (vanity compiler variables mangle-symbol ##.loop.276) #f (bruijn ##.loop.276 5 0) (bruijn ##.%k.654 4 0) (bruijn ##.%x.952 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276_V0k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.display.94 11 22) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276_V0k169) (bruijn ##.%x.657 0 0) (bruijn ##.port.275 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 22)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276_V0k169, self)))),
      _var0,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.949) ((##vcore.= (bruijn ##.i.277 1 1) (bruijn ##.strlen.946 5 0))) (if (bruijn ##.%p.949 0 0) ((bruijn ##.get-output-string.93 9 21) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276_V0k165) (bruijn ##.port.275 4 0)) (basic-block 2 2 (##.x.1.950 ##.%p.951) ((##vcore.string-ref (bruijn ##.str.273 7 0) (bruijn ##.i.277 2 1)) (##vcore.eq? (bruijn ##.x.1.950 0 0) '#\#)) ((close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276_V0k167) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276_V0k168)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[1],
      VGetArg(statics, 5-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 21)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276_V0k165, self)))),
      statics->up->up->up->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      VEncodeChar('#'));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276_V0k167, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276_V0k168, self)))));
    }
}
    }
}
static void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k164(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276")) (##qualified-call (vanity compiler variables mangle-symbol ##.loop.276) #f (bruijn ##.loop.276 0 0) (bruijn ##.%k.653 5 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.947 ##.%p.948) ((##vcore.string-ref (bruijn ##.str.273 3 0) 0) (##vcore.eq? (bruijn ##.%x.947 0 0) #\#)) ((close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k163) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k164)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      statics->up->up->vars[0],
      VEncodeInt(0l));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      VEncodeChar('#'));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k163, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k164, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.strlen.946) ((##vcore.string-length (bruijn ##.str.273 1 0))) ((bruijn ##.open-output-string.95 4 23) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k162)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[23]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k162, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k161) (bruijn ##.sym.272 0 1))
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k161, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.string-append.91 5 19) (bruijn ##.%k.681 3 0) (##string ##.string.1970) (bruijn ##.%x.682 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 19)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1970.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.fold-right.96 4 24) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k172) (bruijn ##.string-append.91 4 19) (##string ##.string.1932) (bruijn ##.%x.683 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[24]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k172, self)))),
      statics->up->up->up->vars[19],
      VEncodePointer(&_V10_Dstring_D1932.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.85 3 13) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k171) (##intrinsic ##vcore.symbol->string) (bruijn ##.%x.684 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[13]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k171, self)))),
      _V40_V10vcore_Dsymbol___Gstring,
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.map.85 2 13) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k170) (bruijn ##.mangle-symbol.119 1 6) (bruijn ##.name.280 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k170, self)))),
      statics->vars[6],
      _var1);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.string-append.91 5 19) (bruijn ##.%k.685 3 0) (##string ##.string.1976) (bruijn ##.%x.686 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 19)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1976.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.fold-right.96 4 24) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k175) (bruijn ##.string-append.91 4 19) (##string ##.string.1932) (bruijn ##.%x.687 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[24]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k175, self)))),
      statics->up->up->up->vars[19],
      VEncodePointer(&_V10_Dstring_D1932.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.85 3 13) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k174) (##intrinsic ##vcore.symbol->string) (bruijn ##.%x.688 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[13]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k174, self)))),
      _V40_V10vcore_Dsymbol___Gstring,
      _var0);
}
void _V50_V0vanity_V0compiler_V0variables_V0mangle__environment(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0variables_V0mangle__environment" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0variables_V0mangle__environment, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.map.85 2 13) (close _V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k173) (bruijn ##.mangle-symbol.119 1 6) (bruijn ##.name.281 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k173, self)))),
      statics->vars[6],
      _var1);
}
static void _V0vanity_V0compiler_V0variables_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 25) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0lambda3, got ~D~N"
  "-- expected 25~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[25]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 25, 25, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  self->vars[6] = _var6;
  self->vars[7] = _var7;
  self->vars[8] = _var8;
  self->vars[9] = _var9;
  self->vars[10] = _var10;
  self->vars[11] = _var11;
  self->vars[12] = _var12;
  self->vars[13] = _var13;
  self->vars[14] = _var14;
  self->vars[15] = _var15;
  self->vars[16] = _var16;
  self->vars[17] = _var17;
  self->vars[18] = _var18;
  self->vars[19] = _var19;
  self->vars[20] = _var20;
  self->vars[21] = _var21;
  self->vars[22] = _var22;
  self->vars[23] = _var23;
  self->vars[24] = _var24;
  // (##letrec (vanity compiler variables) 9 ((close "_V50_V0vanity_V0compiler_V0variables_V0free__variables" (vanity compiler variables)) (close "_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q" (vanity compiler variables)) (close "_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q" (vanity compiler variables)) (close "_V50_V0vanity_V0compiler_V0variables_V0memtail" (vanity compiler variables)) (close "_V50_V0vanity_V0compiler_V0variables_V0mangle__library" (vanity compiler variables)) (close "_V50_V0vanity_V0compiler_V0variables_V0import__path" (vanity compiler variables)) (close "_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol" (vanity compiler variables)) (close "_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function" (vanity compiler variables)) (close "_V50_V0vanity_V0compiler_V0variables_V0mangle__environment" (vanity compiler variables))) (basic-block 12 12 (##.%x.972 ##.%x.973 ##.%x.974 ##.%x.975 ##.%x.976 ##.%x.977 ##.%x.978 ##.%x.979 ##.%x.980 ##.%x.981 ##.%x.982 ##.%r.983) ((##vcore.cons 'mangle-symbol (bruijn ##.mangle-symbol.119 1 6)) (##vcore.cons 'mangle-library (bruijn ##.mangle-library.117 1 4)) (##vcore.cons 'mangle-qualified-function (bruijn ##.mangle-qualified-function.120 1 7)) (##vcore.cons 'mangle-environment (bruijn ##.mangle-environment.121 1 8)) (##vcore.cons 'free-variables (bruijn ##.free-variables.113 1 0)) (##vcore.cons 'variable-pure? (bruijn ##.variable-pure?.114 1 1)) (##vcore.cons (bruijn ##.%x.977 0 5) '()) (##vcore.cons (bruijn ##.%x.976 0 4) (bruijn ##.%x.978 0 6)) (##vcore.cons (bruijn ##.%x.975 0 3) (bruijn ##.%x.979 0 7)) (##vcore.cons (bruijn ##.%x.974 0 2) (bruijn ##.%x.980 0 8)) (##vcore.cons (bruijn ##.%x.973 0 1) (bruijn ##.%x.981 0 9)) (##vcore.cons (bruijn ##.%x.972 0 0) (bruijn ##.%x.982 0 10))) ((bruijn ##.%k.290 2 0) (bruijn ##.%r.983 0 11))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[9]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0variables = self;
    VInitEnv(self, 9, 9, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables, _V60_V0vanity_V0compiler_V0variables))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, _V60_V0vanity_V0compiler_V0variables))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q, _V60_V0vanity_V0compiler_V0variables))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0memtail, _V60_V0vanity_V0compiler_V0variables))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library, _V60_V0vanity_V0compiler_V0variables))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path, _V60_V0vanity_V0compiler_V0variables))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol, _V60_V0vanity_V0compiler_V0variables))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function, _V60_V0vanity_V0compiler_V0variables))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__environment, _V60_V0vanity_V0compiler_V0variables))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0variables_V20", &_V60_V0vanity_V0compiler_V0variables);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[12]; } container;
    self = &container.self;
    VInitEnv(self, 12, 12, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0mangle__symbol,
      statics->vars[6]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0mangle__library,
      statics->vars[4]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0mangle__qualified__function,
      statics->vars[7]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0mangle__environment,
      statics->vars[8]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0free__variables,
      statics->vars[0]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0variable__pure_Q,
      statics->vars[1]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      VNULL);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      self->vars[6]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      self->vars[7]);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[8]);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[9]);
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[10]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[11]);
    }
    }
}
static void _V0vanity_V0compiler_V0variables_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.283 0 0) (close _V0vanity_V0compiler_V0variables_V20_V0lambda2) (close _V0vanity_V0compiler_V0variables_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0compiler_V0variables_V20 = (VFunc)_V0vanity_V0compiler_V0variables_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0x_D1 = VEncodePointer(VInternSymbol(-849682234, &_VW_V0x_D1.sym), VPOINTER_OTHER);
  _V0ret = VEncodePointer(VInternSymbol(1095520858, &_VW_V0ret.sym), VPOINTER_OTHER);
  _V0i = VEncodePointer(VInternSymbol(-1354779579, &_VW_V0i.sym), VPOINTER_OTHER);
  _V10_Dloop_D276 = VEncodePointer(VInternSymbol(527883405, &_VW_V10_Dloop_D276.sym), VPOINTER_OTHER);
  _V0strlen = VEncodePointer(VInternSymbol(-453645202, &_VW_V0strlen.sym), VPOINTER_OTHER);
  _V0port = VEncodePointer(VInternSymbol(-1893404613, &_VW_V0port.sym), VPOINTER_OTHER);
  _V0str = VEncodePointer(VInternSymbol(128699971, &_VW_V0str.sym), VPOINTER_OTHER);
  _V0sym = VEncodePointer(VInternSymbol(2139759047, &_VW_V0sym.sym), VPOINTER_OTHER);
  _V0rename = VEncodePointer(VInternSymbol(1807760215, &_VW_V0rename.sym), VPOINTER_OTHER);
  _V0expr_D12 = VEncodePointer(VInternSymbol(-345568046, &_VW_V0expr_D12.sym), VPOINTER_OTHER);
  _V0expr_D9 = VEncodePointer(VInternSymbol(388943303, &_VW_V0expr_D9.sym), VPOINTER_OTHER);
  _V0expr_D10 = VEncodePointer(VInternSymbol(-1791402052, &_VW_V0expr_D10.sym), VPOINTER_OTHER);
  _V0prefix = VEncodePointer(VInternSymbol(1117607804, &_VW_V0prefix.sym), VPOINTER_OTHER);
  _V0except = VEncodePointer(VInternSymbol(-444186265, &_VW_V0except.sym), VPOINTER_OTHER);
  _V0expr_D7 = VEncodePointer(VInternSymbol(-416713689, &_VW_V0expr_D7.sym), VPOINTER_OTHER);
  _V0only = VEncodePointer(VInternSymbol(1014778380, &_VW_V0only.sym), VPOINTER_OTHER);
  _V0expr_D5 = VEncodePointer(VInternSymbol(-265734499, &_VW_V0expr_D5.sym), VPOINTER_OTHER);
  _V0kk_D2 = VEncodePointer(VInternSymbol(-886465342, &_VW_V0kk_D2.sym), VPOINTER_OTHER);
  _V0import = VEncodePointer(VInternSymbol(268366565, &_VW_V0import.sym), VPOINTER_OTHER);
  _V0ks = VEncodePointer(VInternSymbol(-1111125728, &_VW_V0ks.sym), VPOINTER_OTHER);
  _V0knil = VEncodePointer(VInternSymbol(-1530420159, &_VW_V0knil.sym), VPOINTER_OTHER);
  _V10_Dloop_D251 = VEncodePointer(VInternSymbol(2134592239, &_VW_V10_Dloop_D251.sym), VPOINTER_OTHER);
  _V0lib = VEncodePointer(VInternSymbol(354676435, &_VW_V0lib.sym), VPOINTER_OTHER);
  _V0args = VEncodePointer(VInternSymbol(-1952811398, &_VW_V0args.sym), VPOINTER_OTHER);
  _V0kk_D71 = VEncodePointer(VInternSymbol(1858779617, &_VW_V0kk_D71.sym), VPOINTER_OTHER);
  _V0xs_D69 = VEncodePointer(VInternSymbol(-1172513096, &_VW_V0xs_D69.sym), VPOINTER_OTHER);
  _V0expr_D72 = VEncodePointer(VInternSymbol(2103944736, &_VW_V0expr_D72.sym), VPOINTER_OTHER);
  _V10_Dloop_D235 = VEncodePointer(VInternSymbol(96546656, &_VW_V10_Dloop_D235.sym), VPOINTER_OTHER);
  _V0kk_D70 = VEncodePointer(VInternSymbol(1331839586, &_VW_V0kk_D70.sym), VPOINTER_OTHER);
  _V0expr_D67 = VEncodePointer(VInternSymbol(17250141, &_VW_V0expr_D67.sym), VPOINTER_OTHER);
  _V0expr_D65 = VEncodePointer(VInternSymbol(1920185625, &_VW_V0expr_D65.sym), VPOINTER_OTHER);
  _V0kk_D63 = VEncodePointer(VInternSymbol(1401167063, &_VW_V0kk_D63.sym), VPOINTER_OTHER);
  _V0vals_D61 = VEncodePointer(VInternSymbol(-1736375612, &_VW_V0vals_D61.sym), VPOINTER_OTHER);
  _V0xs_D60 = VEncodePointer(VInternSymbol(1915819983, &_VW_V0xs_D60.sym), VPOINTER_OTHER);
  _V0expr_D64 = VEncodePointer(VInternSymbol(-16134672, &_VW_V0expr_D64.sym), VPOINTER_OTHER);
  _V10_Dloop_D219 = VEncodePointer(VInternSymbol(-1815513471, &_VW_V10_Dloop_D219.sym), VPOINTER_OTHER);
  _V0kk_D62 = VEncodePointer(VInternSymbol(-1059400515, &_VW_V0kk_D62.sym), VPOINTER_OTHER);
  _V0expr_D57 = VEncodePointer(VInternSymbol(-1837321431, &_VW_V0expr_D57.sym), VPOINTER_OTHER);
  _V0expr_D58 = VEncodePointer(VInternSymbol(-1926369690, &_VW_V0expr_D58.sym), VPOINTER_OTHER);
  _V0expr_D59 = VEncodePointer(VInternSymbol(396530275, &_VW_V0expr_D59.sym), VPOINTER_OTHER);
  _V0expr_D55 = VEncodePointer(VInternSymbol(-1199215862, &_VW_V0expr_D55.sym), VPOINTER_OTHER);
  _V0vals = VEncodePointer(VInternSymbol(900385374, &_VW_V0vals.sym), VPOINTER_OTHER);
  _V0tail__expr = VEncodePointer(VInternSymbol(1213435809, &_VW_V0tail__expr.sym), VPOINTER_OTHER);
  _V0expr_D53 = VEncodePointer(VInternSymbol(85795106, &_VW_V0expr_D53.sym), VPOINTER_OTHER);
  _V0kk_D51 = VEncodePointer(VInternSymbol(-1519634114, &_VW_V0kk_D51.sym), VPOINTER_OTHER);
  _V0vals_D49 = VEncodePointer(VInternSymbol(-460670267, &_VW_V0vals_D49.sym), VPOINTER_OTHER);
  _V0xs_D48 = VEncodePointer(VInternSymbol(1314121753, &_VW_V0xs_D48.sym), VPOINTER_OTHER);
  _V0expr_D52 = VEncodePointer(VInternSymbol(1877625635, &_VW_V0expr_D52.sym), VPOINTER_OTHER);
  _V10_Dloop_D200 = VEncodePointer(VInternSymbol(1434402898, &_VW_V10_Dloop_D200.sym), VPOINTER_OTHER);
  _V0kk_D50 = VEncodePointer(VInternSymbol(-262514153, &_VW_V0kk_D50.sym), VPOINTER_OTHER);
  _V0expr_D46 = VEncodePointer(VInternSymbol(1480209784, &_VW_V0expr_D46.sym), VPOINTER_OTHER);
  _V0expr_D47 = VEncodePointer(VInternSymbol(-1211924941, &_VW_V0expr_D47.sym), VPOINTER_OTHER);
  _V0expr_D42 = VEncodePointer(VInternSymbol(-1983730220, &_VW_V0expr_D42.sym), VPOINTER_OTHER);
  _V0expr_D43 = VEncodePointer(VInternSymbol(-858196652, &_VW_V0expr_D43.sym), VPOINTER_OTHER);
  _V0expr_D44 = VEncodePointer(VInternSymbol(166717540, &_VW_V0expr_D44.sym), VPOINTER_OTHER);
  _V0expr_D38 = VEncodePointer(VInternSymbol(1190420271, &_VW_V0expr_D38.sym), VPOINTER_OTHER);
  _V0expr_D39 = VEncodePointer(VInternSymbol(-1813819538, &_VW_V0expr_D39.sym), VPOINTER_OTHER);
  _V0cont = VEncodePointer(VInternSymbol(-1246660262, &_VW_V0cont.sym), VPOINTER_OTHER);
  _V0expr_D40 = VEncodePointer(VInternSymbol(-1817317687, &_VW_V0expr_D40.sym), VPOINTER_OTHER);
  _V0define = VEncodePointer(VInternSymbol(-1044656496, &_VW_V0define.sym), VPOINTER_OTHER);
  _V0expr_D35 = VEncodePointer(VInternSymbol(-913066290, &_VW_V0expr_D35.sym), VPOINTER_OTHER);
  _V0expr_D36 = VEncodePointer(VInternSymbol(1003530614, &_VW_V0expr_D36.sym), VPOINTER_OTHER);
  _V0expr_D32 = VEncodePointer(VInternSymbol(1640869111, &_VW_V0expr_D32.sym), VPOINTER_OTHER);
  _V0expr_D33 = VEncodePointer(VInternSymbol(-1255757878, &_VW_V0expr_D33.sym), VPOINTER_OTHER);
  _V0x = VEncodePointer(VInternSymbol(-2096885469, &_VW_V0x.sym), VPOINTER_OTHER);
  _V0val = VEncodePointer(VInternSymbol(-1280639451, &_VW_V0val.sym), VPOINTER_OTHER);
  _V0expr_D29 = VEncodePointer(VInternSymbol(-206703007, &_VW_V0expr_D29.sym), VPOINTER_OTHER);
  _V0expr_D30 = VEncodePointer(VInternSymbol(-177645212, &_VW_V0expr_D30.sym), VPOINTER_OTHER);
  _V0expr_D24 = VEncodePointer(VInternSymbol(1205830416, &_VW_V0expr_D24.sym), VPOINTER_OTHER);
  _V0expr_D25 = VEncodePointer(VInternSymbol(733883527, &_VW_V0expr_D25.sym), VPOINTER_OTHER);
  _V0name = VEncodePointer(VInternSymbol(1249508717, &_VW_V0name.sym), VPOINTER_OTHER);
  _V0expr_D26 = VEncodePointer(VInternSymbol(-555246409, &_VW_V0expr_D26.sym), VPOINTER_OTHER);
  _V0static_Q = VEncodePointer(VInternSymbol(-717454776, &_VW_V0static_Q.sym), VPOINTER_OTHER);
  _V0expr_D27 = VEncodePointer(VInternSymbol(-164017570, &_VW_V0expr_D27.sym), VPOINTER_OTHER);
  _V0p = VEncodePointer(VInternSymbol(-1603972369, &_VW_V0p.sym), VPOINTER_OTHER);
  _V0bodies = VEncodePointer(VInternSymbol(-1372757451, &_VW_V0bodies.sym), VPOINTER_OTHER);
  _V0expr_D20 = VEncodePointer(VInternSymbol(-966905598, &_VW_V0expr_D20.sym), VPOINTER_OTHER);
  _V0expr_D21 = VEncodePointer(VInternSymbol(1780795813, &_VW_V0expr_D21.sym), VPOINTER_OTHER);
  _V0xs = VEncodePointer(VInternSymbol(-55341891, &_VW_V0xs.sym), VPOINTER_OTHER);
  _V0body = VEncodePointer(VInternSymbol(826092815, &_VW_V0body.sym), VPOINTER_OTHER);
  _V0unmangled__env = VEncodePointer(VInternSymbol(892869034, &_VW_V0unmangled__env.sym), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VInternSymbol(-374061087, &_VW_V0unquote.sym), VPOINTER_OTHER);
  _V0_U = VEncodePointer(VInternSymbol(-540102218, &_VW_V0_U.sym), VPOINTER_OTHER);
  _V0kk_D13 = VEncodePointer(VInternSymbol(683576469, &_VW_V0kk_D13.sym), VPOINTER_OTHER);
  _V0k = VEncodePointer(VInternSymbol(-989127837, &_VW_V0k.sym), VPOINTER_OTHER);
  _V0or = VEncodePointer(VInternSymbol(2016919801, &_VW_V0or.sym), VPOINTER_OTHER);
  _V0and = VEncodePointer(VInternSymbol(-2136794974, &_VW_V0and.sym), VPOINTER_OTHER);
  _V0e = VEncodePointer(VInternSymbol(-143554252, &_VW_V0e.sym), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VInternSymbol(-530681865, &_VW_V0set_B.sym), VPOINTER_OTHER);
  _V10letrec = VEncodePointer(VInternSymbol(-1037390401, &_VW_V10letrec.sym), VPOINTER_OTHER);
  _V0begin = VEncodePointer(VInternSymbol(1265111139, &_VW_V0begin.sym), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VInternSymbol(1712405540, &_VW_V0letrec.sym), VPOINTER_OTHER);
  _V10_Dloop2_D135 = VEncodePointer(VInternSymbol(683891465, &_VW_V10_Dloop2_D135.sym), VPOINTER_OTHER);
  _V10qualified__case__lambda = VEncodePointer(VInternSymbol(-473367874, &_VW_V10qualified__case__lambda.sym), VPOINTER_OTHER);
  _V0loop2 = VEncodePointer(VInternSymbol(-850504927, &_VW_V0loop2.sym), VPOINTER_OTHER);
  _V0cases = VEncodePointer(VInternSymbol(1333321918, &_VW_V0cases.sym), VPOINTER_OTHER);
  _V10_Dloop2_D133 = VEncodePointer(VInternSymbol(2089371320, &_VW_V10_Dloop2_D133.sym), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VInternSymbol(-1661638092, &_VW_V0case__lambda.sym), VPOINTER_OTHER);
  _V10qualified__lambda = VEncodePointer(VInternSymbol(905832333, &_VW_V10qualified__lambda.sym), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VInternSymbol(1054233532, &_VW_V0lambda.sym), VPOINTER_OTHER);
  _V0if = VEncodePointer(VInternSymbol(-1008835161, &_VW_V0if.sym), VPOINTER_OTHER);
  _V10basic__intrinsic = VEncodePointer(VInternSymbol(1331380390, &_VW_V10basic__intrinsic.sym), VPOINTER_OTHER);
  _V10intrinsic = VEncodePointer(VInternSymbol(-701633456, &_VW_V10intrinsic.sym), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VInternSymbol(1321977372, &_VW_V10foreign_Dfunction.sym), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VInternSymbol(-278310088, &_VW_V0quote.sym), VPOINTER_OTHER);
  _V0loop = VEncodePointer(VInternSymbol(-596409721, &_VW_V0loop.sym), VPOINTER_OTHER);
  _V0context = VEncodePointer(VInternSymbol(-107084772, &_VW_V0context.sym), VPOINTER_OTHER);
  _V0bound = VEncodePointer(VInternSymbol(159768787, &_VW_V0bound.sym), VPOINTER_OTHER);
  _V10_Dloop_D129 = VEncodePointer(VInternSymbol(-958506164, &_VW_V10_Dloop_D129.sym), VPOINTER_OTHER);
  _V10_Dappend__improper_D124 = VEncodePointer(VInternSymbol(1888502413, &_VW_V10_Dappend__improper_D124.sym), VPOINTER_OTHER);
  _V0_Mp = VEncodePointer(VInternSymbol(-513073359, &_VW_V0_Mp.sym), VPOINTER_OTHER);
  _V0append__improper = VEncodePointer(VInternSymbol(-650347936, &_VW_V0append__improper.sym), VPOINTER_OTHER);
  _V0merge = VEncodePointer(VInternSymbol(1813540228, &_VW_V0merge.sym), VPOINTER_OTHER);
  _V0b = VEncodePointer(VInternSymbol(452173723, &_VW_V0b.sym), VPOINTER_OTHER);
  _V0a = VEncodePointer(VInternSymbol(-1450414501, &_VW_V0a.sym), VPOINTER_OTHER);
  _V10_Dmerge_D123 = VEncodePointer(VInternSymbol(1378431048, &_VW_V10_Dmerge_D123.sym), VPOINTER_OTHER);
  _V0mangle__environment = VEncodePointer(VInternSymbol(724323660, &_VW_V0mangle__environment.sym), VPOINTER_OTHER);
  _V0mangle__qualified__function = VEncodePointer(VInternSymbol(1519413566, &_VW_V0mangle__qualified__function.sym), VPOINTER_OTHER);
  _V0mangle__symbol = VEncodePointer(VInternSymbol(-1891438302, &_VW_V0mangle__symbol.sym), VPOINTER_OTHER);
  _V0import__path = VEncodePointer(VInternSymbol(-195691845, &_VW_V0import__path.sym), VPOINTER_OTHER);
  _V0mangle__library = VEncodePointer(VInternSymbol(471189069, &_VW_V0mangle__library.sym), VPOINTER_OTHER);
  _V0memtail = VEncodePointer(VInternSymbol(1244263930, &_VW_V0memtail.sym), VPOINTER_OTHER);
  _V0variable__pure__body_Q = VEncodePointer(VInternSymbol(-1372456303, &_VW_V0variable__pure__body_Q.sym), VPOINTER_OTHER);
  _V0variable__pure_Q = VEncodePointer(VInternSymbol(426375154, &_VW_V0variable__pure_Q.sym), VPOINTER_OTHER);
  _V0expr = VEncodePointer(VInternSymbol(-1249073328, &_VW_V0expr.sym), VPOINTER_OTHER);
  _V0free__variables = VEncodePointer(VInternSymbol(1452788755, &_VW_V0free__variables.sym), VPOINTER_OTHER);
  _V0variables = VEncodePointer(VInternSymbol(-2058504899, &_VW_V0variables.sym), VPOINTER_OTHER);
  _V0compiler = VEncodePointer(VInternSymbol(-785018335, &_VW_V0compiler.sym), VPOINTER_OTHER);
  _V0vanity = VEncodePointer(VInternSymbol(-312377406, &_VW_V0vanity.sym), VPOINTER_OTHER);
  _V0fold__right = VEncodePointer(VInternSymbol(737791577, &_VW_V0fold__right.sym), VPOINTER_OTHER);
  _V0open__output__string = VEncodePointer(VInternSymbol(1528859113, &_VW_V0open__output__string.sym), VPOINTER_OTHER);
  _V0display = VEncodePointer(VInternSymbol(-911502848, &_VW_V0display.sym), VPOINTER_OTHER);
  _V0get__output__string = VEncodePointer(VInternSymbol(-1094109327, &_VW_V0get__output__string.sym), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VInternSymbol(-1573046396, &_VW_V0close__port.sym), VPOINTER_OTHER);
  _V0string__append = VEncodePointer(VInternSymbol(1893973929, &_VW_V0string__append.sym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VInternSymbol(1345485686, &_VW_V0compiler__error.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VInternSymbol(418515197, &_VW_V0reverse.sym), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VInternSymbol(-1259600321, &_VW_V0assv.sym), VPOINTER_OTHER);
  _V0fold = VEncodePointer(VInternSymbol(2090893058, &_VW_V0fold.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0cdddr = VEncodePointer(VInternSymbol(584415821, &_VW_V0cdddr.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VInternSymbol(396082650, &_VW_V0caddr.sym), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VInternSymbol(-569180081, &_VW_V0cddr.sym), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VInternSymbol(-1104539071, &_VW_V0cdar.sym), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VInternSymbol(-610927850, &_VW_V0caar.sym), VPOINTER_OTHER);
  _V0cddddr = VEncodePointer(VInternSymbol(-1400798210, &_VW_V0cddddr.sym), VPOINTER_OTHER);
  _V0cadddr = VEncodePointer(VInternSymbol(-448763463, &_VW_V0cadddr.sym), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VInternSymbol(157128241, &_VW_V0memv.sym), VPOINTER_OTHER);
  _V0atom_Q = VEncodePointer(VInternSymbol(2133063198, &_VW_V0atom_Q.sym), VPOINTER_OTHER);
  _V0lookup__intrinsic__name = VEncodePointer(VInternSymbol(451875892, &_VW_V0lookup__intrinsic__name.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0_Mx = VEncodePointer(VInternSymbol(-1853698215, &_VW_V0_Mx.sym), VPOINTER_OTHER);
  _V0_Mk = VEncodePointer(VInternSymbol(-865914236, &_VW_V0_Mk.sym), VPOINTER_OTHER);
  _V10_Dpair_D1975.first = VEncodePointer(&_V10_Dpair_D1974, VPOINTER_PAIR);
  _V10_Dpair_D1975.rest = VEncodePointer(&_V10_Dpair_D1061, VPOINTER_PAIR);
  _V10_Dpair_D1974.first = VEncodePointer(&_V10_Dpair_D1973, VPOINTER_PAIR);
  _V10_Dpair_D1974.rest = VEncodePointer(&_V10_Dpair_D1958, VPOINTER_PAIR);
  _V10_Dpair_D1973.first = _V0vanity;
  _V10_Dpair_D1973.rest = VEncodePointer(&_V10_Dpair_D1972, VPOINTER_PAIR);
  _V10_Dpair_D1972.first = _V0compiler;
  _V10_Dpair_D1972.rest = VEncodePointer(&_V10_Dpair_D1971, VPOINTER_PAIR);
  _V10_Dpair_D1971.first = _V0variables;
  _V10_Dpair_D1971.rest = VEncodePointer(&_V10_Dpair_D1050, VPOINTER_PAIR);
  _V40_V10vcore_Dsymbol___Gstring = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsymbol___Gstring", &_VW_V40_V10vcore_Dsymbol___Gstring), VPOINTER_CLOSURE);
  _V10_Dpair_D1969.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1969.rest = VEncodePointer(&_V10_Dpair_D1968, VPOINTER_PAIR);
  _V10_Dpair_D1968.first = VEncodePointer(&_V10_Dpair_D1967, VPOINTER_PAIR);
  _V10_Dpair_D1968.rest = VNULL;
  _V10_Dpair_D1967.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1967.rest = VEncodePointer(&_V10_Dpair_D1964, VPOINTER_PAIR);
  _V10_Dpair_D1966.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1966.rest = VEncodePointer(&_V10_Dpair_D1965, VPOINTER_PAIR);
  _V10_Dpair_D1965.first = VEncodePointer(&_V10_Dpair_D1964, VPOINTER_PAIR);
  _V10_Dpair_D1965.rest = VNULL;
  _V10_Dpair_D1964.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1964.rest = VEncodePointer(&_V10_Dpair_D1961, VPOINTER_PAIR);
  _V10_Dpair_D1963.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1963.rest = VEncodePointer(&_V10_Dpair_D1962, VPOINTER_PAIR);
  _V10_Dpair_D1962.first = VEncodePointer(&_V10_Dpair_D1961, VPOINTER_PAIR);
  _V10_Dpair_D1962.rest = VNULL;
  _V10_Dpair_D1961.first = VEncodePointer(&_V10_Dpair_D1957, VPOINTER_PAIR);
  _V10_Dpair_D1961.rest = VEncodePointer(&_V10_Dpair_D1060, VPOINTER_PAIR);
  _V10_Dpair_D1960.first = VEncodePointer(&_V10_Dpair_D1959, VPOINTER_PAIR);
  _V10_Dpair_D1960.rest = VEncodePointer(&_V10_Dpair_D1061, VPOINTER_PAIR);
  _V10_Dpair_D1959.first = VEncodePointer(&_V10_Dpair_D1955, VPOINTER_PAIR);
  _V10_Dpair_D1959.rest = VEncodePointer(&_V10_Dpair_D1958, VPOINTER_PAIR);
  _V10_Dpair_D1958.first = VEncodePointer(&_V10_Dpair_D1957, VPOINTER_PAIR);
  _V10_Dpair_D1958.rest = VNULL;
  _V10_Dpair_D1957.first = _V0_Mk;
  _V10_Dpair_D1957.rest = VEncodePointer(&_V10_Dpair_D1956, VPOINTER_PAIR);
  _V10_Dpair_D1956.first = _V0name;
  _V10_Dpair_D1956.rest = VNULL;
  _V10_Dpair_D1955.first = _V0vanity;
  _V10_Dpair_D1955.rest = VEncodePointer(&_V10_Dpair_D1954, VPOINTER_PAIR);
  _V10_Dpair_D1954.first = _V0compiler;
  _V10_Dpair_D1954.rest = VEncodePointer(&_V10_Dpair_D1953, VPOINTER_PAIR);
  _V10_Dpair_D1953.first = _V0variables;
  _V10_Dpair_D1953.rest = VEncodePointer(&_V10_Dpair_D1952, VPOINTER_PAIR);
  _V10_Dpair_D1952.first = _V0mangle__qualified__function;
  _V10_Dpair_D1952.rest = VNULL;
  _V10_Dpair_D1951.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1951.rest = VEncodePointer(&_V10_Dpair_D1930, VPOINTER_PAIR);
  _V10_Dpair_D1931.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1931.rest = VEncodePointer(&_V10_Dpair_D1930, VPOINTER_PAIR);
  _V10_Dpair_D1930.first = VEncodePointer(&_V10_Dpair_D1929, VPOINTER_PAIR);
  _V10_Dpair_D1930.rest = VNULL;
  _V10_Dpair_D1929.first = VEncodePointer(&_V10_Dpair_D1928, VPOINTER_PAIR);
  _V10_Dpair_D1929.rest = VEncodePointer(&_V10_Dpair_D1925, VPOINTER_PAIR);
  _V10_Dpair_D1928.first = _V0x_D1;
  _V10_Dpair_D1928.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1927.first = VEncodePointer(&_V10_Dpair_D1923, VPOINTER_PAIR);
  _V10_Dpair_D1927.rest = VEncodePointer(&_V10_Dpair_D1926, VPOINTER_PAIR);
  _V10_Dpair_D1926.first = VEncodePointer(&_V10_Dpair_D1925, VPOINTER_PAIR);
  _V10_Dpair_D1926.rest = VNULL;
  _V10_Dpair_D1925.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1925.rest = VEncodePointer(&_V10_Dpair_D1924, VPOINTER_PAIR);
  _V10_Dpair_D1924.first = VEncodePointer(&_V10_Dpair_D1915, VPOINTER_PAIR);
  _V10_Dpair_D1924.rest = VEncodePointer(&_V10_Dpair_D1918, VPOINTER_PAIR);
  _V10_Dpair_D1923.first = VEncodeBool(false);
  _V10_Dpair_D1923.rest = VEncodePointer(&_V10_Dpair_D1922, VPOINTER_PAIR);
  _V10_Dpair_D1922.first = VEncodePointer(&_V10_Dpair_D1921, VPOINTER_PAIR);
  _V10_Dpair_D1922.rest = VNULL;
  _V10_Dpair_D1921.first = _V0ret;
  _V10_Dpair_D1921.rest = VNULL;
  _V10_Dpair_D1920.first = VEncodePointer(&_V10_Dpair_D1917, VPOINTER_PAIR);
  _V10_Dpair_D1920.rest = VEncodePointer(&_V10_Dpair_D1919, VPOINTER_PAIR);
  _V10_Dpair_D1919.first = VEncodePointer(&_V10_Dpair_D1918, VPOINTER_PAIR);
  _V10_Dpair_D1919.rest = VNULL;
  _V10_Dpair_D1918.first = VEncodePointer(&_V10_Dpair_D1111, VPOINTER_PAIR);
  _V10_Dpair_D1918.rest = VEncodePointer(&_V10_Dpair_D1904, VPOINTER_PAIR);
  _V10_Dpair_D1917.first = VEncodePointer(&_V10_Dpair_D1913, VPOINTER_PAIR);
  _V10_Dpair_D1917.rest = VEncodePointer(&_V10_Dpair_D1916, VPOINTER_PAIR);
  _V10_Dpair_D1916.first = VEncodePointer(&_V10_Dpair_D1915, VPOINTER_PAIR);
  _V10_Dpair_D1916.rest = VNULL;
  _V10_Dpair_D1915.first = _V0_Mk;
  _V10_Dpair_D1915.rest = VEncodePointer(&_V10_Dpair_D1914, VPOINTER_PAIR);
  _V10_Dpair_D1914.first = _V0i;
  _V10_Dpair_D1914.rest = VNULL;
  _V10_Dpair_D1913.first = _V0vanity;
  _V10_Dpair_D1913.rest = VEncodePointer(&_V10_Dpair_D1912, VPOINTER_PAIR);
  _V10_Dpair_D1912.first = _V0compiler;
  _V10_Dpair_D1912.rest = VEncodePointer(&_V10_Dpair_D1911, VPOINTER_PAIR);
  _V10_Dpair_D1911.first = _V0variables;
  _V10_Dpair_D1911.rest = VEncodePointer(&_V10_Dpair_D1910, VPOINTER_PAIR);
  _V10_Dpair_D1910.first = _V0mangle__symbol;
  _V10_Dpair_D1910.rest = VEncodePointer(&_V10_Dpair_D1909, VPOINTER_PAIR);
  _V10_Dpair_D1909.first = _V10_Dloop_D276;
  _V10_Dpair_D1909.rest = VNULL;
  _V10_Dpair_D1906.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1906.rest = VEncodePointer(&_V10_Dpair_D1905, VPOINTER_PAIR);
  _V10_Dpair_D1905.first = VEncodePointer(&_V10_Dpair_D1904, VPOINTER_PAIR);
  _V10_Dpair_D1905.rest = VNULL;
  _V10_Dpair_D1904.first = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1904.rest = VEncodePointer(&_V10_Dpair_D1903, VPOINTER_PAIR);
  _V10_Dpair_D1903.first = VEncodePointer(&_V10_Dpair_D1895, VPOINTER_PAIR);
  _V10_Dpair_D1903.rest = VEncodePointer(&_V10_Dpair_D1900, VPOINTER_PAIR);
  _V10_Dpair_D1902.first = VEncodePointer(&_V10_Dpair_D1897, VPOINTER_PAIR);
  _V10_Dpair_D1902.rest = VEncodePointer(&_V10_Dpair_D1901, VPOINTER_PAIR);
  _V10_Dpair_D1901.first = VEncodePointer(&_V10_Dpair_D1900, VPOINTER_PAIR);
  _V10_Dpair_D1901.rest = VNULL;
  _V10_Dpair_D1900.first = VEncodePointer(&_V10_Dpair_D1898, VPOINTER_PAIR);
  _V10_Dpair_D1900.rest = VEncodePointer(&_V10_Dpair_D1899, VPOINTER_PAIR);
  _V10_Dpair_D1899.first = VEncodePointer(&_V10_Dpair_D1889, VPOINTER_PAIR);
  _V10_Dpair_D1899.rest = VEncodePointer(&_V10_Dpair_D1892, VPOINTER_PAIR);
  _V10_Dpair_D1898.first = _V0strlen;
  _V10_Dpair_D1898.rest = VNULL;
  _V10_Dpair_D1897.first = VEncodeBool(false);
  _V10_Dpair_D1897.rest = VEncodePointer(&_V10_Dpair_D1896, VPOINTER_PAIR);
  _V10_Dpair_D1896.first = VEncodePointer(&_V10_Dpair_D1895, VPOINTER_PAIR);
  _V10_Dpair_D1896.rest = VNULL;
  _V10_Dpair_D1895.first = _V0port;
  _V10_Dpair_D1895.rest = VNULL;
  _V10_Dpair_D1894.first = VEncodePointer(&_V10_Dpair_D1891, VPOINTER_PAIR);
  _V10_Dpair_D1894.rest = VEncodePointer(&_V10_Dpair_D1893, VPOINTER_PAIR);
  _V10_Dpair_D1893.first = VEncodePointer(&_V10_Dpair_D1892, VPOINTER_PAIR);
  _V10_Dpair_D1893.rest = VNULL;
  _V10_Dpair_D1892.first = VEncodePointer(&_V10_Dpair_D1885, VPOINTER_PAIR);
  _V10_Dpair_D1892.rest = VEncodePointer(&_V10_Dpair_D1060, VPOINTER_PAIR);
  _V10_Dpair_D1891.first = VEncodeBool(false);
  _V10_Dpair_D1891.rest = VEncodePointer(&_V10_Dpair_D1890, VPOINTER_PAIR);
  _V10_Dpair_D1890.first = VEncodePointer(&_V10_Dpair_D1889, VPOINTER_PAIR);
  _V10_Dpair_D1890.rest = VNULL;
  _V10_Dpair_D1889.first = _V0str;
  _V10_Dpair_D1889.rest = VNULL;
  _V10_Dpair_D1888.first = VEncodePointer(&_V10_Dpair_D1887, VPOINTER_PAIR);
  _V10_Dpair_D1888.rest = VEncodePointer(&_V10_Dpair_D1061, VPOINTER_PAIR);
  _V10_Dpair_D1887.first = VEncodePointer(&_V10_Dpair_D1883, VPOINTER_PAIR);
  _V10_Dpair_D1887.rest = VEncodePointer(&_V10_Dpair_D1886, VPOINTER_PAIR);
  _V10_Dpair_D1886.first = VEncodePointer(&_V10_Dpair_D1885, VPOINTER_PAIR);
  _V10_Dpair_D1886.rest = VNULL;
  _V10_Dpair_D1885.first = _V0_Mk;
  _V10_Dpair_D1885.rest = VEncodePointer(&_V10_Dpair_D1884, VPOINTER_PAIR);
  _V10_Dpair_D1884.first = _V0sym;
  _V10_Dpair_D1884.rest = VNULL;
  _V10_Dpair_D1883.first = _V0vanity;
  _V10_Dpair_D1883.rest = VEncodePointer(&_V10_Dpair_D1882, VPOINTER_PAIR);
  _V10_Dpair_D1882.first = _V0compiler;
  _V10_Dpair_D1882.rest = VEncodePointer(&_V10_Dpair_D1881, VPOINTER_PAIR);
  _V10_Dpair_D1881.first = _V0variables;
  _V10_Dpair_D1881.rest = VEncodePointer(&_V10_Dpair_D1880, VPOINTER_PAIR);
  _V10_Dpair_D1880.first = _V0mangle__symbol;
  _V10_Dpair_D1880.rest = VNULL;
  _V10_Dpair_D1879.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1879.rest = VEncodePointer(&_V10_Dpair_D1877, VPOINTER_PAIR);
  _V10_Dpair_D1878.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1878.rest = VEncodePointer(&_V10_Dpair_D1877, VPOINTER_PAIR);
  _V10_Dpair_D1877.first = VEncodePointer(&_V10_Dpair_D1876, VPOINTER_PAIR);
  _V10_Dpair_D1877.rest = VNULL;
  _V10_Dpair_D1876.first = VEncodePointer(&_V10_Dpair_D1807, VPOINTER_PAIR);
  _V10_Dpair_D1876.rest = VEncodePointer(&_V10_Dpair_D1875, VPOINTER_PAIR);
  _V10_Dpair_D1875.first = VEncodePointer(&_V10_Dpair_D1873, VPOINTER_PAIR);
  _V10_Dpair_D1875.rest = VEncodePointer(&_V10_Dpair_D1874, VPOINTER_PAIR);
  _V10_Dpair_D1874.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1874.rest = VEncodePointer(&_V10_Dpair_D1870, VPOINTER_PAIR);
  _V10_Dpair_D1873.first = _V0expr_D12;
  _V10_Dpair_D1873.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1872.first = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1872.rest = VEncodePointer(&_V10_Dpair_D1871, VPOINTER_PAIR);
  _V10_Dpair_D1871.first = VEncodePointer(&_V10_Dpair_D1870, VPOINTER_PAIR);
  _V10_Dpair_D1871.rest = VNULL;
  _V10_Dpair_D1870.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1870.rest = VEncodePointer(&_V10_Dpair_D1869, VPOINTER_PAIR);
  _V10_Dpair_D1869.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1869.rest = VEncodePointer(&_V10_Dpair_D1866, VPOINTER_PAIR);
  _V10_Dpair_D1868.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1868.rest = VEncodePointer(&_V10_Dpair_D1867, VPOINTER_PAIR);
  _V10_Dpair_D1867.first = VEncodePointer(&_V10_Dpair_D1866, VPOINTER_PAIR);
  _V10_Dpair_D1867.rest = VNULL;
  _V10_Dpair_D1866.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1866.rest = VEncodePointer(&_V10_Dpair_D1848, VPOINTER_PAIR);
  _V10_Dpair_D1865.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1865.rest = VEncodePointer(&_V10_Dpair_D1863, VPOINTER_PAIR);
  _V10_Dpair_D1864.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1864.rest = VEncodePointer(&_V10_Dpair_D1863, VPOINTER_PAIR);
  _V10_Dpair_D1863.first = VEncodePointer(&_V10_Dpair_D1862, VPOINTER_PAIR);
  _V10_Dpair_D1863.rest = VNULL;
  _V10_Dpair_D1862.first = VEncodePointer(&_V10_Dpair_D1855, VPOINTER_PAIR);
  _V10_Dpair_D1862.rest = VEncodePointer(&_V10_Dpair_D1861, VPOINTER_PAIR);
  _V10_Dpair_D1861.first = VEncodePointer(&_V10_Dpair_D1857, VPOINTER_PAIR);
  _V10_Dpair_D1861.rest = VEncodePointer(&_V10_Dpair_D1860, VPOINTER_PAIR);
  _V10_Dpair_D1860.first = VEncodePointer(&_V10_Dpair_D1858, VPOINTER_PAIR);
  _V10_Dpair_D1860.rest = VEncodePointer(&_V10_Dpair_D1859, VPOINTER_PAIR);
  _V10_Dpair_D1859.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1859.rest = VEncodePointer(&_V10_Dpair_D1852, VPOINTER_PAIR);
  _V10_Dpair_D1858.first = _V0expr_D9;
  _V10_Dpair_D1858.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1857.first = _V0import;
  _V10_Dpair_D1857.rest = VEncodePointer(&_V10_Dpair_D1856, VPOINTER_PAIR);
  _V10_Dpair_D1856.first = _V0expr_D10;
  _V10_Dpair_D1856.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1855.first = _V0prefix;
  _V10_Dpair_D1855.rest = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1854.first = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1854.rest = VEncodePointer(&_V10_Dpair_D1853, VPOINTER_PAIR);
  _V10_Dpair_D1853.first = VEncodePointer(&_V10_Dpair_D1852, VPOINTER_PAIR);
  _V10_Dpair_D1853.rest = VNULL;
  _V10_Dpair_D1852.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1852.rest = VEncodePointer(&_V10_Dpair_D1851, VPOINTER_PAIR);
  _V10_Dpair_D1851.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1851.rest = VEncodePointer(&_V10_Dpair_D1848, VPOINTER_PAIR);
  _V10_Dpair_D1850.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1850.rest = VEncodePointer(&_V10_Dpair_D1849, VPOINTER_PAIR);
  _V10_Dpair_D1849.first = VEncodePointer(&_V10_Dpair_D1848, VPOINTER_PAIR);
  _V10_Dpair_D1849.rest = VNULL;
  _V10_Dpair_D1848.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1848.rest = VEncodePointer(&_V10_Dpair_D1834, VPOINTER_PAIR);
  _V10_Dpair_D1847.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1847.rest = VEncodePointer(&_V10_Dpair_D1845, VPOINTER_PAIR);
  _V10_Dpair_D1846.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1846.rest = VEncodePointer(&_V10_Dpair_D1845, VPOINTER_PAIR);
  _V10_Dpair_D1845.first = VEncodePointer(&_V10_Dpair_D1844, VPOINTER_PAIR);
  _V10_Dpair_D1845.rest = VNULL;
  _V10_Dpair_D1844.first = VEncodePointer(&_V10_Dpair_D1807, VPOINTER_PAIR);
  _V10_Dpair_D1844.rest = VEncodePointer(&_V10_Dpair_D1843, VPOINTER_PAIR);
  _V10_Dpair_D1843.first = VEncodePointer(&_V10_Dpair_D1841, VPOINTER_PAIR);
  _V10_Dpair_D1843.rest = VEncodePointer(&_V10_Dpair_D1842, VPOINTER_PAIR);
  _V10_Dpair_D1842.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1842.rest = VEncodePointer(&_V10_Dpair_D1838, VPOINTER_PAIR);
  _V10_Dpair_D1841.first = _V0expr_D7;
  _V10_Dpair_D1841.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1840.first = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1840.rest = VEncodePointer(&_V10_Dpair_D1839, VPOINTER_PAIR);
  _V10_Dpair_D1839.first = VEncodePointer(&_V10_Dpair_D1838, VPOINTER_PAIR);
  _V10_Dpair_D1839.rest = VNULL;
  _V10_Dpair_D1838.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1838.rest = VEncodePointer(&_V10_Dpair_D1837, VPOINTER_PAIR);
  _V10_Dpair_D1837.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1837.rest = VEncodePointer(&_V10_Dpair_D1834, VPOINTER_PAIR);
  _V10_Dpair_D1836.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1836.rest = VEncodePointer(&_V10_Dpair_D1835, VPOINTER_PAIR);
  _V10_Dpair_D1835.first = VEncodePointer(&_V10_Dpair_D1834, VPOINTER_PAIR);
  _V10_Dpair_D1835.rest = VNULL;
  _V10_Dpair_D1834.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1834.rest = VEncodePointer(&_V10_Dpair_D1820, VPOINTER_PAIR);
  _V10_Dpair_D1833.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1833.rest = VEncodePointer(&_V10_Dpair_D1831, VPOINTER_PAIR);
  _V10_Dpair_D1832.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1832.rest = VEncodePointer(&_V10_Dpair_D1831, VPOINTER_PAIR);
  _V10_Dpair_D1831.first = VEncodePointer(&_V10_Dpair_D1830, VPOINTER_PAIR);
  _V10_Dpair_D1831.rest = VNULL;
  _V10_Dpair_D1830.first = VEncodePointer(&_V10_Dpair_D1807, VPOINTER_PAIR);
  _V10_Dpair_D1830.rest = VEncodePointer(&_V10_Dpair_D1829, VPOINTER_PAIR);
  _V10_Dpair_D1829.first = VEncodePointer(&_V10_Dpair_D1827, VPOINTER_PAIR);
  _V10_Dpair_D1829.rest = VEncodePointer(&_V10_Dpair_D1828, VPOINTER_PAIR);
  _V10_Dpair_D1828.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1828.rest = VEncodePointer(&_V10_Dpair_D1824, VPOINTER_PAIR);
  _V10_Dpair_D1827.first = _V0expr_D5;
  _V10_Dpair_D1827.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1826.first = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1826.rest = VEncodePointer(&_V10_Dpair_D1825, VPOINTER_PAIR);
  _V10_Dpair_D1825.first = VEncodePointer(&_V10_Dpair_D1824, VPOINTER_PAIR);
  _V10_Dpair_D1825.rest = VNULL;
  _V10_Dpair_D1824.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1824.rest = VEncodePointer(&_V10_Dpair_D1823, VPOINTER_PAIR);
  _V10_Dpair_D1823.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1823.rest = VEncodePointer(&_V10_Dpair_D1820, VPOINTER_PAIR);
  _V10_Dpair_D1822.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1822.rest = VEncodePointer(&_V10_Dpair_D1821, VPOINTER_PAIR);
  _V10_Dpair_D1821.first = VEncodePointer(&_V10_Dpair_D1820, VPOINTER_PAIR);
  _V10_Dpair_D1821.rest = VNULL;
  _V10_Dpair_D1820.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1820.rest = VEncodePointer(&_V10_Dpair_D1819, VPOINTER_PAIR);
  _V10_Dpair_D1819.first = VEncodePointer(&_V10_Dpair_D1813, VPOINTER_PAIR);
  _V10_Dpair_D1819.rest = VEncodePointer(&_V10_Dpair_D1816, VPOINTER_PAIR);
  _V10_Dpair_D1818.first = VEncodePointer(&_V10_Dpair_D1815, VPOINTER_PAIR);
  _V10_Dpair_D1818.rest = VEncodePointer(&_V10_Dpair_D1817, VPOINTER_PAIR);
  _V10_Dpair_D1817.first = VEncodePointer(&_V10_Dpair_D1816, VPOINTER_PAIR);
  _V10_Dpair_D1817.rest = VNULL;
  _V10_Dpair_D1816.first = VEncodePointer(&_V10_Dpair_D1808, VPOINTER_PAIR);
  _V10_Dpair_D1816.rest = VEncodePointer(&_V10_Dpair_D1060, VPOINTER_PAIR);
  _V10_Dpair_D1815.first = VEncodeBool(false);
  _V10_Dpair_D1815.rest = VEncodePointer(&_V10_Dpair_D1814, VPOINTER_PAIR);
  _V10_Dpair_D1814.first = VEncodePointer(&_V10_Dpair_D1813, VPOINTER_PAIR);
  _V10_Dpair_D1814.rest = VNULL;
  _V10_Dpair_D1813.first = _V0_Mk;
  _V10_Dpair_D1813.rest = VEncodePointer(&_V10_Dpair_D1812, VPOINTER_PAIR);
  _V10_Dpair_D1812.first = _V0kk_D2;
  _V10_Dpair_D1812.rest = VNULL;
  _V10_Dpair_D1811.first = VEncodePointer(&_V10_Dpair_D1810, VPOINTER_PAIR);
  _V10_Dpair_D1811.rest = VEncodePointer(&_V10_Dpair_D1061, VPOINTER_PAIR);
  _V10_Dpair_D1810.first = VEncodePointer(&_V10_Dpair_D1806, VPOINTER_PAIR);
  _V10_Dpair_D1810.rest = VEncodePointer(&_V10_Dpair_D1809, VPOINTER_PAIR);
  _V10_Dpair_D1809.first = VEncodePointer(&_V10_Dpair_D1808, VPOINTER_PAIR);
  _V10_Dpair_D1809.rest = VNULL;
  _V10_Dpair_D1808.first = _V0_Mk;
  _V10_Dpair_D1808.rest = VEncodePointer(&_V10_Dpair_D1807, VPOINTER_PAIR);
  _V10_Dpair_D1807.first = _V0import;
  _V10_Dpair_D1807.rest = VNULL;
  _V10_Dpair_D1806.first = _V0vanity;
  _V10_Dpair_D1806.rest = VEncodePointer(&_V10_Dpair_D1805, VPOINTER_PAIR);
  _V10_Dpair_D1805.first = _V0compiler;
  _V10_Dpair_D1805.rest = VEncodePointer(&_V10_Dpair_D1804, VPOINTER_PAIR);
  _V10_Dpair_D1804.first = _V0variables;
  _V10_Dpair_D1804.rest = VEncodePointer(&_V10_Dpair_D1803, VPOINTER_PAIR);
  _V10_Dpair_D1803.first = _V0import__path;
  _V10_Dpair_D1803.rest = VNULL;
  _V10_Dpair_D1800.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1800.rest = VEncodePointer(&_V10_Dpair_D1784, VPOINTER_PAIR);
  _V10_Dpair_D1799.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1799.rest = VEncodePointer(&_V10_Dpair_D1798, VPOINTER_PAIR);
  _V10_Dpair_D1798.first = VEncodePointer(&_V10_Dpair_D1797, VPOINTER_PAIR);
  _V10_Dpair_D1798.rest = VNULL;
  _V10_Dpair_D1797.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1797.rest = VEncodePointer(&_V10_Dpair_D1789, VPOINTER_PAIR);
  _V10_Dpair_D1796.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1796.rest = VEncodePointer(&_V10_Dpair_D1790, VPOINTER_PAIR);
  _V10_Dpair_D1794.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1794.rest = VEncodePointer(&_V10_Dpair_D1793, VPOINTER_PAIR);
  _V10_Dpair_D1793.first = VEncodePointer(&_V10_Dpair_D1792, VPOINTER_PAIR);
  _V10_Dpair_D1793.rest = VNULL;
  _V10_Dpair_D1792.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1792.rest = VEncodePointer(&_V10_Dpair_D1789, VPOINTER_PAIR);
  _V10_Dpair_D1791.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1791.rest = VEncodePointer(&_V10_Dpair_D1790, VPOINTER_PAIR);
  _V10_Dpair_D1790.first = VEncodePointer(&_V10_Dpair_D1789, VPOINTER_PAIR);
  _V10_Dpair_D1790.rest = VNULL;
  _V10_Dpair_D1789.first = VEncodePointer(&_V10_Dpair_D1786, VPOINTER_PAIR);
  _V10_Dpair_D1789.rest = VEncodePointer(&_V10_Dpair_D1788, VPOINTER_PAIR);
  _V10_Dpair_D1788.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1788.rest = VEncodePointer(&_V10_Dpair_D1787, VPOINTER_PAIR);
  _V10_Dpair_D1787.first = VEncodePointer(&_V10_Dpair_D1777, VPOINTER_PAIR);
  _V10_Dpair_D1787.rest = VEncodePointer(&_V10_Dpair_D1783, VPOINTER_PAIR);
  _V10_Dpair_D1786.first = _V0e;
  _V10_Dpair_D1786.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1785.first = VEncodePointer(&_V10_Dpair_D1779, VPOINTER_PAIR);
  _V10_Dpair_D1785.rest = VEncodePointer(&_V10_Dpair_D1784, VPOINTER_PAIR);
  _V10_Dpair_D1784.first = VEncodePointer(&_V10_Dpair_D1783, VPOINTER_PAIR);
  _V10_Dpair_D1784.rest = VNULL;
  _V10_Dpair_D1783.first = VEncodePointer(&_V10_Dpair_D1111, VPOINTER_PAIR);
  _V10_Dpair_D1783.rest = VEncodePointer(&_V10_Dpair_D1782, VPOINTER_PAIR);
  _V10_Dpair_D1782.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1782.rest = VEncodePointer(&_V10_Dpair_D1781, VPOINTER_PAIR);
  _V10_Dpair_D1781.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1781.rest = VEncodePointer(&_V10_Dpair_D1780, VPOINTER_PAIR);
  _V10_Dpair_D1780.first = VEncodePointer(&_V10_Dpair_D1760, VPOINTER_PAIR);
  _V10_Dpair_D1780.rest = VEncodePointer(&_V10_Dpair_D1767, VPOINTER_PAIR);
  _V10_Dpair_D1779.first = VEncodePointer(&_V10_Dpair_D1774, VPOINTER_PAIR);
  _V10_Dpair_D1779.rest = VEncodePointer(&_V10_Dpair_D1778, VPOINTER_PAIR);
  _V10_Dpair_D1778.first = VEncodePointer(&_V10_Dpair_D1777, VPOINTER_PAIR);
  _V10_Dpair_D1778.rest = VNULL;
  _V10_Dpair_D1777.first = _V0_Mk;
  _V10_Dpair_D1777.rest = VEncodePointer(&_V10_Dpair_D1776, VPOINTER_PAIR);
  _V10_Dpair_D1776.first = _V0knil;
  _V10_Dpair_D1776.rest = VEncodePointer(&_V10_Dpair_D1775, VPOINTER_PAIR);
  _V10_Dpair_D1775.first = _V0ks;
  _V10_Dpair_D1775.rest = VNULL;
  _V10_Dpair_D1774.first = _V0vanity;
  _V10_Dpair_D1774.rest = VEncodePointer(&_V10_Dpair_D1773, VPOINTER_PAIR);
  _V10_Dpair_D1773.first = _V0compiler;
  _V10_Dpair_D1773.rest = VEncodePointer(&_V10_Dpair_D1772, VPOINTER_PAIR);
  _V10_Dpair_D1772.first = _V0variables;
  _V10_Dpair_D1772.rest = VEncodePointer(&_V10_Dpair_D1771, VPOINTER_PAIR);
  _V10_Dpair_D1771.first = _V0mangle__library;
  _V10_Dpair_D1771.rest = VEncodePointer(&_V10_Dpair_D1770, VPOINTER_PAIR);
  _V10_Dpair_D1770.first = _V10_Dloop_D251;
  _V10_Dpair_D1770.rest = VNULL;
  _V10_Dpair_D1769.first = VEncodePointer(&_V10_Dpair_D1766, VPOINTER_PAIR);
  _V10_Dpair_D1769.rest = VEncodePointer(&_V10_Dpair_D1768, VPOINTER_PAIR);
  _V10_Dpair_D1768.first = VEncodePointer(&_V10_Dpair_D1767, VPOINTER_PAIR);
  _V10_Dpair_D1768.rest = VNULL;
  _V10_Dpair_D1767.first = VEncodePointer(&_V10_Dpair_D1761, VPOINTER_PAIR);
  _V10_Dpair_D1767.rest = VEncodePointer(&_V10_Dpair_D1060, VPOINTER_PAIR);
  _V10_Dpair_D1766.first = VEncodeBool(false);
  _V10_Dpair_D1766.rest = VEncodePointer(&_V10_Dpair_D1765, VPOINTER_PAIR);
  _V10_Dpair_D1765.first = VEncodePointer(&_V10_Dpair_D1760, VPOINTER_PAIR);
  _V10_Dpair_D1765.rest = VNULL;
  _V10_Dpair_D1764.first = VEncodePointer(&_V10_Dpair_D1763, VPOINTER_PAIR);
  _V10_Dpair_D1764.rest = VEncodePointer(&_V10_Dpair_D1061, VPOINTER_PAIR);
  _V10_Dpair_D1763.first = VEncodePointer(&_V10_Dpair_D1759, VPOINTER_PAIR);
  _V10_Dpair_D1763.rest = VEncodePointer(&_V10_Dpair_D1762, VPOINTER_PAIR);
  _V10_Dpair_D1762.first = VEncodePointer(&_V10_Dpair_D1761, VPOINTER_PAIR);
  _V10_Dpair_D1762.rest = VNULL;
  _V10_Dpair_D1761.first = _V0_Mk;
  _V10_Dpair_D1761.rest = VEncodePointer(&_V10_Dpair_D1760, VPOINTER_PAIR);
  _V10_Dpair_D1760.first = _V0lib;
  _V10_Dpair_D1760.rest = VNULL;
  _V10_Dpair_D1759.first = _V0vanity;
  _V10_Dpair_D1759.rest = VEncodePointer(&_V10_Dpair_D1758, VPOINTER_PAIR);
  _V10_Dpair_D1758.first = _V0compiler;
  _V10_Dpair_D1758.rest = VEncodePointer(&_V10_Dpair_D1757, VPOINTER_PAIR);
  _V10_Dpair_D1757.first = _V0variables;
  _V10_Dpair_D1757.rest = VEncodePointer(&_V10_Dpair_D1756, VPOINTER_PAIR);
  _V10_Dpair_D1756.first = _V0mangle__library;
  _V10_Dpair_D1756.rest = VNULL;
  _V10_Dpair_D1755.first = VEncodePointer(&_V10_Dpair_D1754, VPOINTER_PAIR);
  _V10_Dpair_D1755.rest = VEncodePointer(&_V10_Dpair_D1061, VPOINTER_PAIR);
  _V10_Dpair_D1754.first = VEncodePointer(&_V10_Dpair_D1749, VPOINTER_PAIR);
  _V10_Dpair_D1754.rest = VEncodePointer(&_V10_Dpair_D1753, VPOINTER_PAIR);
  _V10_Dpair_D1753.first = VEncodePointer(&_V10_Dpair_D1752, VPOINTER_PAIR);
  _V10_Dpair_D1753.rest = VNULL;
  _V10_Dpair_D1752.first = _V0_Mk;
  _V10_Dpair_D1752.rest = VEncodePointer(&_V10_Dpair_D1751, VPOINTER_PAIR);
  _V10_Dpair_D1751.first = _V0x;
  _V10_Dpair_D1751.rest = VEncodePointer(&_V10_Dpair_D1750, VPOINTER_PAIR);
  _V10_Dpair_D1750.first = _V0args;
  _V10_Dpair_D1750.rest = VNULL;
  _V10_Dpair_D1749.first = _V0vanity;
  _V10_Dpair_D1749.rest = VEncodePointer(&_V10_Dpair_D1748, VPOINTER_PAIR);
  _V10_Dpair_D1748.first = _V0compiler;
  _V10_Dpair_D1748.rest = VEncodePointer(&_V10_Dpair_D1747, VPOINTER_PAIR);
  _V10_Dpair_D1747.first = _V0variables;
  _V10_Dpair_D1747.rest = VEncodePointer(&_V10_Dpair_D1746, VPOINTER_PAIR);
  _V10_Dpair_D1746.first = _V0memtail;
  _V10_Dpair_D1746.rest = VNULL;
  _V10_Dpair_D1745.first = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1745.rest = VEncodePointer(&_V10_Dpair_D1744, VPOINTER_PAIR);
  _V10_Dpair_D1744.first = VEncodePointer(&_V10_Dpair_D1743, VPOINTER_PAIR);
  _V10_Dpair_D1744.rest = VNULL;
  _V10_Dpair_D1743.first = VEncodePointer(&_V10_Dpair_D1739, VPOINTER_PAIR);
  _V10_Dpair_D1743.rest = VEncodePointer(&_V10_Dpair_D1060, VPOINTER_PAIR);
  _V10_Dpair_D1742.first = VEncodePointer(&_V10_Dpair_D1741, VPOINTER_PAIR);
  _V10_Dpair_D1742.rest = VEncodePointer(&_V10_Dpair_D1061, VPOINTER_PAIR);
  _V10_Dpair_D1741.first = VEncodePointer(&_V10_Dpair_D1735, VPOINTER_PAIR);
  _V10_Dpair_D1741.rest = VEncodePointer(&_V10_Dpair_D1740, VPOINTER_PAIR);
  _V10_Dpair_D1740.first = VEncodePointer(&_V10_Dpair_D1739, VPOINTER_PAIR);
  _V10_Dpair_D1740.rest = VNULL;
  _V10_Dpair_D1739.first = _V0_Mk;
  _V10_Dpair_D1739.rest = VEncodePointer(&_V10_Dpair_D1738, VPOINTER_PAIR);
  _V10_Dpair_D1738.first = _V0k;
  _V10_Dpair_D1738.rest = VEncodePointer(&_V10_Dpair_D1737, VPOINTER_PAIR);
  _V10_Dpair_D1737.first = _V0xs;
  _V10_Dpair_D1737.rest = VEncodePointer(&_V10_Dpair_D1736, VPOINTER_PAIR);
  _V10_Dpair_D1736.first = _V0body;
  _V10_Dpair_D1736.rest = VNULL;
  _V10_Dpair_D1735.first = _V0vanity;
  _V10_Dpair_D1735.rest = VEncodePointer(&_V10_Dpair_D1734, VPOINTER_PAIR);
  _V10_Dpair_D1734.first = _V0compiler;
  _V10_Dpair_D1734.rest = VEncodePointer(&_V10_Dpair_D1733, VPOINTER_PAIR);
  _V10_Dpair_D1733.first = _V0variables;
  _V10_Dpair_D1733.rest = VEncodePointer(&_V10_Dpair_D1732, VPOINTER_PAIR);
  _V10_Dpair_D1732.first = _V0variable__pure__body_Q;
  _V10_Dpair_D1732.rest = VNULL;
  _V10_Dpair_D1731.first = VEncodePointer(&_V10_Dpair_D1728, VPOINTER_PAIR);
  _V10_Dpair_D1731.rest = VEncodePointer(&_V10_Dpair_D1730, VPOINTER_PAIR);
  _V10_Dpair_D1730.first = VEncodePointer(&_V10_Dpair_D1729, VPOINTER_PAIR);
  _V10_Dpair_D1730.rest = VNULL;
  _V10_Dpair_D1729.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1729.rest = VEncodePointer(&_V10_Dpair_D1721, VPOINTER_PAIR);
  _V10_Dpair_D1728.first = VEncodeBool(false);
  _V10_Dpair_D1728.rest = VEncodePointer(&_V10_Dpair_D1727, VPOINTER_PAIR);
  _V10_Dpair_D1727.first = VEncodePointer(&_V10_Dpair_D1726, VPOINTER_PAIR);
  _V10_Dpair_D1727.rest = VNULL;
  _V10_Dpair_D1726.first = _V0_Mk;
  _V10_Dpair_D1726.rest = VEncodePointer(&_V10_Dpair_D1725, VPOINTER_PAIR);
  _V10_Dpair_D1725.first = _V0x;
  _V10_Dpair_D1725.rest = VEncodePointer(&_V10_Dpair_D1388, VPOINTER_PAIR);
  _V10_Dpair_D1724.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1724.rest = VEncodePointer(&_V10_Dpair_D1722, VPOINTER_PAIR);
  _V10_Dpair_D1723.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1723.rest = VEncodePointer(&_V10_Dpair_D1722, VPOINTER_PAIR);
  _V10_Dpair_D1722.first = VEncodePointer(&_V10_Dpair_D1721, VPOINTER_PAIR);
  _V10_Dpair_D1722.rest = VNULL;
  _V10_Dpair_D1721.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1721.rest = VEncodePointer(&_V10_Dpair_D1720, VPOINTER_PAIR);
  _V10_Dpair_D1720.first = VEncodePointer(&_V10_Dpair_D1716, VPOINTER_PAIR);
  _V10_Dpair_D1720.rest = VEncodePointer(&_V10_Dpair_D1606, VPOINTER_PAIR);
  _V10_Dpair_D1719.first = VEncodePointer(&_V10_Dpair_D1718, VPOINTER_PAIR);
  _V10_Dpair_D1719.rest = VEncodePointer(&_V10_Dpair_D1607, VPOINTER_PAIR);
  _V10_Dpair_D1718.first = VEncodeBool(false);
  _V10_Dpair_D1718.rest = VEncodePointer(&_V10_Dpair_D1717, VPOINTER_PAIR);
  _V10_Dpair_D1717.first = VEncodePointer(&_V10_Dpair_D1716, VPOINTER_PAIR);
  _V10_Dpair_D1717.rest = VNULL;
  _V10_Dpair_D1716.first = _V0_Mk;
  _V10_Dpair_D1716.rest = VEncodePointer(&_V10_Dpair_D1715, VPOINTER_PAIR);
  _V10_Dpair_D1715.first = _V0tail__expr;
  _V10_Dpair_D1715.rest = VEncodePointer(&_V10_Dpair_D1714, VPOINTER_PAIR);
  _V10_Dpair_D1714.first = _V0xs;
  _V10_Dpair_D1714.rest = VNULL;
  _V10_Dpair_D1713.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1713.rest = VEncodePointer(&_V10_Dpair_D1712, VPOINTER_PAIR);
  _V10_Dpair_D1712.first = VEncodePointer(&_V10_Dpair_D1711, VPOINTER_PAIR);
  _V10_Dpair_D1712.rest = VNULL;
  _V10_Dpair_D1711.first = VEncodePointer(&_V10_Dpair_D1709, VPOINTER_PAIR);
  _V10_Dpair_D1711.rest = VEncodePointer(&_V10_Dpair_D1710, VPOINTER_PAIR);
  _V10_Dpair_D1710.first = VEncodePointer(&_V10_Dpair_D1705, VPOINTER_PAIR);
  _V10_Dpair_D1710.rest = VEncodePointer(&_V10_Dpair_D1701, VPOINTER_PAIR);
  _V10_Dpair_D1709.first = _V0xs;
  _V10_Dpair_D1709.rest = VEncodePointer(&_V10_Dpair_D1096, VPOINTER_PAIR);
  _V10_Dpair_D1708.first = VEncodePointer(&_V10_Dpair_D1707, VPOINTER_PAIR);
  _V10_Dpair_D1708.rest = VEncodePointer(&_V10_Dpair_D1702, VPOINTER_PAIR);
  _V10_Dpair_D1707.first = VEncodeBool(false);
  _V10_Dpair_D1707.rest = VEncodePointer(&_V10_Dpair_D1706, VPOINTER_PAIR);
  _V10_Dpair_D1706.first = VEncodePointer(&_V10_Dpair_D1705, VPOINTER_PAIR);
  _V10_Dpair_D1706.rest = VNULL;
  _V10_Dpair_D1705.first = _V0_Mk;
  _V10_Dpair_D1705.rest = VEncodePointer(&_V10_Dpair_D1704, VPOINTER_PAIR);
  _V10_Dpair_D1704.first = _V0kk_D71;
  _V10_Dpair_D1704.rest = VNULL;
  _V10_Dpair_D1703.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1703.rest = VEncodePointer(&_V10_Dpair_D1702, VPOINTER_PAIR);
  _V10_Dpair_D1702.first = VEncodePointer(&_V10_Dpair_D1701, VPOINTER_PAIR);
  _V10_Dpair_D1702.rest = VNULL;
  _V10_Dpair_D1701.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1701.rest = VEncodePointer(&_V10_Dpair_D1698, VPOINTER_PAIR);
  _V10_Dpair_D1700.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1700.rest = VEncodePointer(&_V10_Dpair_D1699, VPOINTER_PAIR);
  _V10_Dpair_D1699.first = VEncodePointer(&_V10_Dpair_D1698, VPOINTER_PAIR);
  _V10_Dpair_D1699.rest = VNULL;
  _V10_Dpair_D1698.first = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1698.rest = VEncodePointer(&_V10_Dpair_D1697, VPOINTER_PAIR);
  _V10_Dpair_D1697.first = VEncodePointer(&_V10_Dpair_D1690, VPOINTER_PAIR);
  _V10_Dpair_D1697.rest = VEncodePointer(&_V10_Dpair_D1694, VPOINTER_PAIR);
  _V10_Dpair_D1696.first = VEncodePointer(&_V10_Dpair_D1692, VPOINTER_PAIR);
  _V10_Dpair_D1696.rest = VEncodePointer(&_V10_Dpair_D1695, VPOINTER_PAIR);
  _V10_Dpair_D1695.first = VEncodePointer(&_V10_Dpair_D1694, VPOINTER_PAIR);
  _V10_Dpair_D1695.rest = VNULL;
  _V10_Dpair_D1694.first = VEncodePointer(&_V10_Dpair_D1111, VPOINTER_PAIR);
  _V10_Dpair_D1694.rest = VEncodePointer(&_V10_Dpair_D1693, VPOINTER_PAIR);
  _V10_Dpair_D1693.first = VEncodePointer(&_V10_Dpair_D1678, VPOINTER_PAIR);
  _V10_Dpair_D1693.rest = VEncodePointer(&_V10_Dpair_D1609, VPOINTER_PAIR);
  _V10_Dpair_D1692.first = VEncodePointer(&_V10_Dpair_D1687, VPOINTER_PAIR);
  _V10_Dpair_D1692.rest = VEncodePointer(&_V10_Dpair_D1691, VPOINTER_PAIR);
  _V10_Dpair_D1691.first = VEncodePointer(&_V10_Dpair_D1690, VPOINTER_PAIR);
  _V10_Dpair_D1691.rest = VNULL;
  _V10_Dpair_D1690.first = _V0_Mk;
  _V10_Dpair_D1690.rest = VEncodePointer(&_V10_Dpair_D1689, VPOINTER_PAIR);
  _V10_Dpair_D1689.first = _V0expr_D72;
  _V10_Dpair_D1689.rest = VEncodePointer(&_V10_Dpair_D1688, VPOINTER_PAIR);
  _V10_Dpair_D1688.first = _V0xs_D69;
  _V10_Dpair_D1688.rest = VNULL;
  _V10_Dpair_D1687.first = _V0vanity;
  _V10_Dpair_D1687.rest = VEncodePointer(&_V10_Dpair_D1686, VPOINTER_PAIR);
  _V10_Dpair_D1686.first = _V0compiler;
  _V10_Dpair_D1686.rest = VEncodePointer(&_V10_Dpair_D1685, VPOINTER_PAIR);
  _V10_Dpair_D1685.first = _V0variables;
  _V10_Dpair_D1685.rest = VEncodePointer(&_V10_Dpair_D1684, VPOINTER_PAIR);
  _V10_Dpair_D1684.first = _V0variable__pure_Q;
  _V10_Dpair_D1684.rest = VEncodePointer(&_V10_Dpair_D1683, VPOINTER_PAIR);
  _V10_Dpair_D1683.first = _V10_Dloop_D235;
  _V10_Dpair_D1683.rest = VNULL;
  _V10_Dpair_D1682.first = VEncodePointer(&_V10_Dpair_D1680, VPOINTER_PAIR);
  _V10_Dpair_D1682.rest = VEncodePointer(&_V10_Dpair_D1681, VPOINTER_PAIR);
  _V10_Dpair_D1681.first = VEncodePointer(&_V10_Dpair_D1609, VPOINTER_PAIR);
  _V10_Dpair_D1681.rest = VNULL;
  _V10_Dpair_D1680.first = VEncodeBool(false);
  _V10_Dpair_D1680.rest = VEncodePointer(&_V10_Dpair_D1679, VPOINTER_PAIR);
  _V10_Dpair_D1679.first = VEncodePointer(&_V10_Dpair_D1678, VPOINTER_PAIR);
  _V10_Dpair_D1679.rest = VNULL;
  _V10_Dpair_D1678.first = _V0_Mk;
  _V10_Dpair_D1678.rest = VEncodePointer(&_V10_Dpair_D1677, VPOINTER_PAIR);
  _V10_Dpair_D1677.first = _V0kk_D70;
  _V10_Dpair_D1677.rest = VNULL;
  _V10_Dpair_D1676.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1676.rest = VEncodePointer(&_V10_Dpair_D1674, VPOINTER_PAIR);
  _V10_Dpair_D1675.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1675.rest = VEncodePointer(&_V10_Dpair_D1674, VPOINTER_PAIR);
  _V10_Dpair_D1674.first = VEncodePointer(&_V10_Dpair_D1673, VPOINTER_PAIR);
  _V10_Dpair_D1674.rest = VNULL;
  _V10_Dpair_D1673.first = VEncodePointer(&_V10_Dpair_D1364, VPOINTER_PAIR);
  _V10_Dpair_D1673.rest = VEncodePointer(&_V10_Dpair_D1672, VPOINTER_PAIR);
  _V10_Dpair_D1672.first = VEncodePointer(&_V10_Dpair_D1669, VPOINTER_PAIR);
  _V10_Dpair_D1672.rest = VEncodePointer(&_V10_Dpair_D1671, VPOINTER_PAIR);
  _V10_Dpair_D1671.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1671.rest = VEncodePointer(&_V10_Dpair_D1670, VPOINTER_PAIR);
  _V10_Dpair_D1670.first = VEncodePointer(&_V10_Dpair_D1594, VPOINTER_PAIR);
  _V10_Dpair_D1670.rest = VEncodePointer(&_V10_Dpair_D1619, VPOINTER_PAIR);
  _V10_Dpair_D1669.first = _V0expr_D67;
  _V10_Dpair_D1669.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1668.first = VEncodePointer(&_V10_Dpair_D1596, VPOINTER_PAIR);
  _V10_Dpair_D1668.rest = VEncodePointer(&_V10_Dpair_D1620, VPOINTER_PAIR);
  _V10_Dpair_D1667.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1667.rest = VEncodePointer(&_V10_Dpair_D1666, VPOINTER_PAIR);
  _V10_Dpair_D1666.first = VEncodePointer(&_V10_Dpair_D1665, VPOINTER_PAIR);
  _V10_Dpair_D1666.rest = VNULL;
  _V10_Dpair_D1665.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1665.rest = VEncodePointer(&_V10_Dpair_D1661, VPOINTER_PAIR);
  _V10_Dpair_D1664.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1664.rest = VEncodePointer(&_V10_Dpair_D1662, VPOINTER_PAIR);
  _V10_Dpair_D1663.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1663.rest = VEncodePointer(&_V10_Dpair_D1662, VPOINTER_PAIR);
  _V10_Dpair_D1662.first = VEncodePointer(&_V10_Dpair_D1661, VPOINTER_PAIR);
  _V10_Dpair_D1662.rest = VNULL;
  _V10_Dpair_D1661.first = VEncodePointer(&_V10_Dpair_D1659, VPOINTER_PAIR);
  _V10_Dpair_D1661.rest = VEncodePointer(&_V10_Dpair_D1660, VPOINTER_PAIR);
  _V10_Dpair_D1660.first = VEncodePointer(&_V10_Dpair_D1655, VPOINTER_PAIR);
  _V10_Dpair_D1660.rest = VEncodePointer(&_V10_Dpair_D1648, VPOINTER_PAIR);
  _V10_Dpair_D1659.first = _V0expr_D65;
  _V10_Dpair_D1659.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1658.first = VEncodePointer(&_V10_Dpair_D1657, VPOINTER_PAIR);
  _V10_Dpair_D1658.rest = VEncodePointer(&_V10_Dpair_D1649, VPOINTER_PAIR);
  _V10_Dpair_D1657.first = VEncodeBool(false);
  _V10_Dpair_D1657.rest = VEncodePointer(&_V10_Dpair_D1656, VPOINTER_PAIR);
  _V10_Dpair_D1656.first = VEncodePointer(&_V10_Dpair_D1655, VPOINTER_PAIR);
  _V10_Dpair_D1656.rest = VNULL;
  _V10_Dpair_D1655.first = _V0_Mk;
  _V10_Dpair_D1655.rest = VEncodePointer(&_V10_Dpair_D1654, VPOINTER_PAIR);
  _V10_Dpair_D1654.first = _V0kk_D63;
  _V10_Dpair_D1654.rest = VNULL;
  _V10_Dpair_D1653.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1653.rest = VEncodePointer(&_V10_Dpair_D1652, VPOINTER_PAIR);
  _V10_Dpair_D1652.first = VEncodePointer(&_V10_Dpair_D1651, VPOINTER_PAIR);
  _V10_Dpair_D1652.rest = VNULL;
  _V10_Dpair_D1651.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1651.rest = VEncodePointer(&_V10_Dpair_D1648, VPOINTER_PAIR);
  _V10_Dpair_D1650.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1650.rest = VEncodePointer(&_V10_Dpair_D1649, VPOINTER_PAIR);
  _V10_Dpair_D1649.first = VEncodePointer(&_V10_Dpair_D1648, VPOINTER_PAIR);
  _V10_Dpair_D1649.rest = VNULL;
  _V10_Dpair_D1648.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1648.rest = VEncodePointer(&_V10_Dpair_D1645, VPOINTER_PAIR);
  _V10_Dpair_D1647.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1647.rest = VEncodePointer(&_V10_Dpair_D1646, VPOINTER_PAIR);
  _V10_Dpair_D1646.first = VEncodePointer(&_V10_Dpair_D1645, VPOINTER_PAIR);
  _V10_Dpair_D1646.rest = VNULL;
  _V10_Dpair_D1645.first = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1645.rest = VEncodePointer(&_V10_Dpair_D1644, VPOINTER_PAIR);
  _V10_Dpair_D1644.first = VEncodePointer(&_V10_Dpair_D1637, VPOINTER_PAIR);
  _V10_Dpair_D1644.rest = VEncodePointer(&_V10_Dpair_D1641, VPOINTER_PAIR);
  _V10_Dpair_D1643.first = VEncodePointer(&_V10_Dpair_D1639, VPOINTER_PAIR);
  _V10_Dpair_D1643.rest = VEncodePointer(&_V10_Dpair_D1642, VPOINTER_PAIR);
  _V10_Dpair_D1642.first = VEncodePointer(&_V10_Dpair_D1641, VPOINTER_PAIR);
  _V10_Dpair_D1642.rest = VNULL;
  _V10_Dpair_D1641.first = VEncodePointer(&_V10_Dpair_D1111, VPOINTER_PAIR);
  _V10_Dpair_D1641.rest = VEncodePointer(&_V10_Dpair_D1640, VPOINTER_PAIR);
  _V10_Dpair_D1640.first = VEncodePointer(&_V10_Dpair_D1623, VPOINTER_PAIR);
  _V10_Dpair_D1640.rest = VEncodePointer(&_V10_Dpair_D1626, VPOINTER_PAIR);
  _V10_Dpair_D1639.first = VEncodePointer(&_V10_Dpair_D1633, VPOINTER_PAIR);
  _V10_Dpair_D1639.rest = VEncodePointer(&_V10_Dpair_D1638, VPOINTER_PAIR);
  _V10_Dpair_D1638.first = VEncodePointer(&_V10_Dpair_D1637, VPOINTER_PAIR);
  _V10_Dpair_D1638.rest = VNULL;
  _V10_Dpair_D1637.first = _V0_Mk;
  _V10_Dpair_D1637.rest = VEncodePointer(&_V10_Dpair_D1636, VPOINTER_PAIR);
  _V10_Dpair_D1636.first = _V0expr_D64;
  _V10_Dpair_D1636.rest = VEncodePointer(&_V10_Dpair_D1635, VPOINTER_PAIR);
  _V10_Dpair_D1635.first = _V0xs_D60;
  _V10_Dpair_D1635.rest = VEncodePointer(&_V10_Dpair_D1634, VPOINTER_PAIR);
  _V10_Dpair_D1634.first = _V0vals_D61;
  _V10_Dpair_D1634.rest = VNULL;
  _V10_Dpair_D1633.first = _V0vanity;
  _V10_Dpair_D1633.rest = VEncodePointer(&_V10_Dpair_D1632, VPOINTER_PAIR);
  _V10_Dpair_D1632.first = _V0compiler;
  _V10_Dpair_D1632.rest = VEncodePointer(&_V10_Dpair_D1631, VPOINTER_PAIR);
  _V10_Dpair_D1631.first = _V0variables;
  _V10_Dpair_D1631.rest = VEncodePointer(&_V10_Dpair_D1630, VPOINTER_PAIR);
  _V10_Dpair_D1630.first = _V0variable__pure_Q;
  _V10_Dpair_D1630.rest = VEncodePointer(&_V10_Dpair_D1629, VPOINTER_PAIR);
  _V10_Dpair_D1629.first = _V10_Dloop_D219;
  _V10_Dpair_D1629.rest = VNULL;
  _V10_Dpair_D1628.first = VEncodePointer(&_V10_Dpair_D1625, VPOINTER_PAIR);
  _V10_Dpair_D1628.rest = VEncodePointer(&_V10_Dpair_D1627, VPOINTER_PAIR);
  _V10_Dpair_D1627.first = VEncodePointer(&_V10_Dpair_D1626, VPOINTER_PAIR);
  _V10_Dpair_D1627.rest = VNULL;
  _V10_Dpair_D1626.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1626.rest = VEncodePointer(&_V10_Dpair_D1619, VPOINTER_PAIR);
  _V10_Dpair_D1625.first = VEncodeBool(false);
  _V10_Dpair_D1625.rest = VEncodePointer(&_V10_Dpair_D1624, VPOINTER_PAIR);
  _V10_Dpair_D1624.first = VEncodePointer(&_V10_Dpair_D1623, VPOINTER_PAIR);
  _V10_Dpair_D1624.rest = VNULL;
  _V10_Dpair_D1623.first = _V0_Mk;
  _V10_Dpair_D1623.rest = VEncodePointer(&_V10_Dpair_D1622, VPOINTER_PAIR);
  _V10_Dpair_D1622.first = _V0kk_D62;
  _V10_Dpair_D1622.rest = VNULL;
  _V10_Dpair_D1621.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1621.rest = VEncodePointer(&_V10_Dpair_D1620, VPOINTER_PAIR);
  _V10_Dpair_D1620.first = VEncodePointer(&_V10_Dpair_D1619, VPOINTER_PAIR);
  _V10_Dpair_D1620.rest = VNULL;
  _V10_Dpair_D1619.first = VEncodePointer(&_V10_Dpair_D1613, VPOINTER_PAIR);
  _V10_Dpair_D1619.rest = VEncodePointer(&_V10_Dpair_D1618, VPOINTER_PAIR);
  _V10_Dpair_D1618.first = VEncodePointer(&_V10_Dpair_D1614, VPOINTER_PAIR);
  _V10_Dpair_D1618.rest = VEncodePointer(&_V10_Dpair_D1617, VPOINTER_PAIR);
  _V10_Dpair_D1617.first = VEncodePointer(&_V10_Dpair_D1615, VPOINTER_PAIR);
  _V10_Dpair_D1617.rest = VEncodePointer(&_V10_Dpair_D1616, VPOINTER_PAIR);
  _V10_Dpair_D1616.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1616.rest = VEncodePointer(&_V10_Dpair_D1610, VPOINTER_PAIR);
  _V10_Dpair_D1615.first = _V0expr_D57;
  _V10_Dpair_D1615.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1614.first = _V0expr_D58;
  _V10_Dpair_D1614.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1613.first = _V0expr_D59;
  _V10_Dpair_D1613.rest = VNULL;
  _V10_Dpair_D1612.first = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1612.rest = VEncodePointer(&_V10_Dpair_D1611, VPOINTER_PAIR);
  _V10_Dpair_D1611.first = VEncodePointer(&_V10_Dpair_D1610, VPOINTER_PAIR);
  _V10_Dpair_D1611.rest = VNULL;
  _V10_Dpair_D1610.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1610.rest = VEncodePointer(&_V10_Dpair_D1609, VPOINTER_PAIR);
  _V10_Dpair_D1609.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1609.rest = VEncodePointer(&_V10_Dpair_D1606, VPOINTER_PAIR);
  _V10_Dpair_D1608.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1608.rest = VEncodePointer(&_V10_Dpair_D1607, VPOINTER_PAIR);
  _V10_Dpair_D1607.first = VEncodePointer(&_V10_Dpair_D1606, VPOINTER_PAIR);
  _V10_Dpair_D1607.rest = VNULL;
  _V10_Dpair_D1606.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1606.rest = VEncodePointer(&_V10_Dpair_D1531, VPOINTER_PAIR);
  _V10_Dpair_D1605.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1605.rest = VEncodePointer(&_V10_Dpair_D1603, VPOINTER_PAIR);
  _V10_Dpair_D1604.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1604.rest = VEncodePointer(&_V10_Dpair_D1603, VPOINTER_PAIR);
  _V10_Dpair_D1603.first = VEncodePointer(&_V10_Dpair_D1602, VPOINTER_PAIR);
  _V10_Dpair_D1603.rest = VNULL;
  _V10_Dpair_D1602.first = VEncodePointer(&_V10_Dpair_D1364, VPOINTER_PAIR);
  _V10_Dpair_D1602.rest = VEncodePointer(&_V10_Dpair_D1601, VPOINTER_PAIR);
  _V10_Dpair_D1601.first = VEncodePointer(&_V10_Dpair_D1598, VPOINTER_PAIR);
  _V10_Dpair_D1601.rest = VEncodePointer(&_V10_Dpair_D1600, VPOINTER_PAIR);
  _V10_Dpair_D1600.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1600.rest = VEncodePointer(&_V10_Dpair_D1599, VPOINTER_PAIR);
  _V10_Dpair_D1599.first = VEncodePointer(&_V10_Dpair_D1594, VPOINTER_PAIR);
  _V10_Dpair_D1599.rest = VEncodePointer(&_V10_Dpair_D1542, VPOINTER_PAIR);
  _V10_Dpair_D1598.first = _V0expr_D55;
  _V10_Dpair_D1598.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1597.first = VEncodePointer(&_V10_Dpair_D1596, VPOINTER_PAIR);
  _V10_Dpair_D1597.rest = VEncodePointer(&_V10_Dpair_D1543, VPOINTER_PAIR);
  _V10_Dpair_D1596.first = VEncodeBool(false);
  _V10_Dpair_D1596.rest = VEncodePointer(&_V10_Dpair_D1595, VPOINTER_PAIR);
  _V10_Dpair_D1595.first = VEncodePointer(&_V10_Dpair_D1594, VPOINTER_PAIR);
  _V10_Dpair_D1595.rest = VNULL;
  _V10_Dpair_D1594.first = _V0_Mk;
  _V10_Dpair_D1594.rest = VEncodePointer(&_V10_Dpair_D1593, VPOINTER_PAIR);
  _V10_Dpair_D1593.first = _V0tail__expr;
  _V10_Dpair_D1593.rest = VEncodePointer(&_V10_Dpair_D1592, VPOINTER_PAIR);
  _V10_Dpair_D1592.first = _V0xs;
  _V10_Dpair_D1592.rest = VEncodePointer(&_V10_Dpair_D1591, VPOINTER_PAIR);
  _V10_Dpair_D1591.first = _V0vals;
  _V10_Dpair_D1591.rest = VNULL;
  _V10_Dpair_D1590.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1590.rest = VEncodePointer(&_V10_Dpair_D1589, VPOINTER_PAIR);
  _V10_Dpair_D1589.first = VEncodePointer(&_V10_Dpair_D1588, VPOINTER_PAIR);
  _V10_Dpair_D1589.rest = VNULL;
  _V10_Dpair_D1588.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1588.rest = VEncodePointer(&_V10_Dpair_D1584, VPOINTER_PAIR);
  _V10_Dpair_D1587.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1587.rest = VEncodePointer(&_V10_Dpair_D1585, VPOINTER_PAIR);
  _V10_Dpair_D1586.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1586.rest = VEncodePointer(&_V10_Dpair_D1585, VPOINTER_PAIR);
  _V10_Dpair_D1585.first = VEncodePointer(&_V10_Dpair_D1584, VPOINTER_PAIR);
  _V10_Dpair_D1585.rest = VNULL;
  _V10_Dpair_D1584.first = VEncodePointer(&_V10_Dpair_D1582, VPOINTER_PAIR);
  _V10_Dpair_D1584.rest = VEncodePointer(&_V10_Dpair_D1583, VPOINTER_PAIR);
  _V10_Dpair_D1583.first = VEncodePointer(&_V10_Dpair_D1578, VPOINTER_PAIR);
  _V10_Dpair_D1583.rest = VEncodePointer(&_V10_Dpair_D1571, VPOINTER_PAIR);
  _V10_Dpair_D1582.first = _V0expr_D53;
  _V10_Dpair_D1582.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1581.first = VEncodePointer(&_V10_Dpair_D1580, VPOINTER_PAIR);
  _V10_Dpair_D1581.rest = VEncodePointer(&_V10_Dpair_D1572, VPOINTER_PAIR);
  _V10_Dpair_D1580.first = VEncodeBool(false);
  _V10_Dpair_D1580.rest = VEncodePointer(&_V10_Dpair_D1579, VPOINTER_PAIR);
  _V10_Dpair_D1579.first = VEncodePointer(&_V10_Dpair_D1578, VPOINTER_PAIR);
  _V10_Dpair_D1579.rest = VNULL;
  _V10_Dpair_D1578.first = _V0_Mk;
  _V10_Dpair_D1578.rest = VEncodePointer(&_V10_Dpair_D1577, VPOINTER_PAIR);
  _V10_Dpair_D1577.first = _V0kk_D51;
  _V10_Dpair_D1577.rest = VNULL;
  _V10_Dpair_D1576.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1576.rest = VEncodePointer(&_V10_Dpair_D1575, VPOINTER_PAIR);
  _V10_Dpair_D1575.first = VEncodePointer(&_V10_Dpair_D1574, VPOINTER_PAIR);
  _V10_Dpair_D1575.rest = VNULL;
  _V10_Dpair_D1574.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1574.rest = VEncodePointer(&_V10_Dpair_D1571, VPOINTER_PAIR);
  _V10_Dpair_D1573.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1573.rest = VEncodePointer(&_V10_Dpair_D1572, VPOINTER_PAIR);
  _V10_Dpair_D1572.first = VEncodePointer(&_V10_Dpair_D1571, VPOINTER_PAIR);
  _V10_Dpair_D1572.rest = VNULL;
  _V10_Dpair_D1571.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1571.rest = VEncodePointer(&_V10_Dpair_D1568, VPOINTER_PAIR);
  _V10_Dpair_D1570.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1570.rest = VEncodePointer(&_V10_Dpair_D1569, VPOINTER_PAIR);
  _V10_Dpair_D1569.first = VEncodePointer(&_V10_Dpair_D1568, VPOINTER_PAIR);
  _V10_Dpair_D1569.rest = VNULL;
  _V10_Dpair_D1568.first = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1568.rest = VEncodePointer(&_V10_Dpair_D1567, VPOINTER_PAIR);
  _V10_Dpair_D1567.first = VEncodePointer(&_V10_Dpair_D1560, VPOINTER_PAIR);
  _V10_Dpair_D1567.rest = VEncodePointer(&_V10_Dpair_D1564, VPOINTER_PAIR);
  _V10_Dpair_D1566.first = VEncodePointer(&_V10_Dpair_D1562, VPOINTER_PAIR);
  _V10_Dpair_D1566.rest = VEncodePointer(&_V10_Dpair_D1565, VPOINTER_PAIR);
  _V10_Dpair_D1565.first = VEncodePointer(&_V10_Dpair_D1564, VPOINTER_PAIR);
  _V10_Dpair_D1565.rest = VNULL;
  _V10_Dpair_D1564.first = VEncodePointer(&_V10_Dpair_D1111, VPOINTER_PAIR);
  _V10_Dpair_D1564.rest = VEncodePointer(&_V10_Dpair_D1563, VPOINTER_PAIR);
  _V10_Dpair_D1563.first = VEncodePointer(&_V10_Dpair_D1546, VPOINTER_PAIR);
  _V10_Dpair_D1563.rest = VEncodePointer(&_V10_Dpair_D1549, VPOINTER_PAIR);
  _V10_Dpair_D1562.first = VEncodePointer(&_V10_Dpair_D1556, VPOINTER_PAIR);
  _V10_Dpair_D1562.rest = VEncodePointer(&_V10_Dpair_D1561, VPOINTER_PAIR);
  _V10_Dpair_D1561.first = VEncodePointer(&_V10_Dpair_D1560, VPOINTER_PAIR);
  _V10_Dpair_D1561.rest = VNULL;
  _V10_Dpair_D1560.first = _V0_Mk;
  _V10_Dpair_D1560.rest = VEncodePointer(&_V10_Dpair_D1559, VPOINTER_PAIR);
  _V10_Dpair_D1559.first = _V0expr_D52;
  _V10_Dpair_D1559.rest = VEncodePointer(&_V10_Dpair_D1558, VPOINTER_PAIR);
  _V10_Dpair_D1558.first = _V0xs_D48;
  _V10_Dpair_D1558.rest = VEncodePointer(&_V10_Dpair_D1557, VPOINTER_PAIR);
  _V10_Dpair_D1557.first = _V0vals_D49;
  _V10_Dpair_D1557.rest = VNULL;
  _V10_Dpair_D1556.first = _V0vanity;
  _V10_Dpair_D1556.rest = VEncodePointer(&_V10_Dpair_D1555, VPOINTER_PAIR);
  _V10_Dpair_D1555.first = _V0compiler;
  _V10_Dpair_D1555.rest = VEncodePointer(&_V10_Dpair_D1554, VPOINTER_PAIR);
  _V10_Dpair_D1554.first = _V0variables;
  _V10_Dpair_D1554.rest = VEncodePointer(&_V10_Dpair_D1553, VPOINTER_PAIR);
  _V10_Dpair_D1553.first = _V0variable__pure_Q;
  _V10_Dpair_D1553.rest = VEncodePointer(&_V10_Dpair_D1552, VPOINTER_PAIR);
  _V10_Dpair_D1552.first = _V10_Dloop_D200;
  _V10_Dpair_D1552.rest = VNULL;
  _V10_Dpair_D1551.first = VEncodePointer(&_V10_Dpair_D1548, VPOINTER_PAIR);
  _V10_Dpair_D1551.rest = VEncodePointer(&_V10_Dpair_D1550, VPOINTER_PAIR);
  _V10_Dpair_D1550.first = VEncodePointer(&_V10_Dpair_D1549, VPOINTER_PAIR);
  _V10_Dpair_D1550.rest = VNULL;
  _V10_Dpair_D1549.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1549.rest = VEncodePointer(&_V10_Dpair_D1542, VPOINTER_PAIR);
  _V10_Dpair_D1548.first = VEncodeBool(false);
  _V10_Dpair_D1548.rest = VEncodePointer(&_V10_Dpair_D1547, VPOINTER_PAIR);
  _V10_Dpair_D1547.first = VEncodePointer(&_V10_Dpair_D1546, VPOINTER_PAIR);
  _V10_Dpair_D1547.rest = VNULL;
  _V10_Dpair_D1546.first = _V0_Mk;
  _V10_Dpair_D1546.rest = VEncodePointer(&_V10_Dpair_D1545, VPOINTER_PAIR);
  _V10_Dpair_D1545.first = _V0kk_D50;
  _V10_Dpair_D1545.rest = VNULL;
  _V10_Dpair_D1544.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1544.rest = VEncodePointer(&_V10_Dpair_D1543, VPOINTER_PAIR);
  _V10_Dpair_D1543.first = VEncodePointer(&_V10_Dpair_D1542, VPOINTER_PAIR);
  _V10_Dpair_D1543.rest = VNULL;
  _V10_Dpair_D1542.first = VEncodePointer(&_V10_Dpair_D1538, VPOINTER_PAIR);
  _V10_Dpair_D1542.rest = VEncodePointer(&_V10_Dpair_D1541, VPOINTER_PAIR);
  _V10_Dpair_D1541.first = VEncodePointer(&_V10_Dpair_D1539, VPOINTER_PAIR);
  _V10_Dpair_D1541.rest = VEncodePointer(&_V10_Dpair_D1540, VPOINTER_PAIR);
  _V10_Dpair_D1540.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1540.rest = VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR);
  _V10_Dpair_D1539.first = _V0expr_D46;
  _V10_Dpair_D1539.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1538.first = _V0expr_D47;
  _V10_Dpair_D1538.rest = VNULL;
  _V10_Dpair_D1537.first = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1537.rest = VEncodePointer(&_V10_Dpair_D1536, VPOINTER_PAIR);
  _V10_Dpair_D1536.first = VEncodePointer(&_V10_Dpair_D1535, VPOINTER_PAIR);
  _V10_Dpair_D1536.rest = VNULL;
  _V10_Dpair_D1535.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1535.rest = VEncodePointer(&_V10_Dpair_D1534, VPOINTER_PAIR);
  _V10_Dpair_D1534.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1534.rest = VEncodePointer(&_V10_Dpair_D1531, VPOINTER_PAIR);
  _V10_Dpair_D1533.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1533.rest = VEncodePointer(&_V10_Dpair_D1532, VPOINTER_PAIR);
  _V10_Dpair_D1532.first = VEncodePointer(&_V10_Dpair_D1531, VPOINTER_PAIR);
  _V10_Dpair_D1532.rest = VNULL;
  _V10_Dpair_D1531.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1531.rest = VEncodePointer(&_V10_Dpair_D1507, VPOINTER_PAIR);
  _V10_Dpair_D1530.first = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1530.rest = VEncodePointer(&_V10_Dpair_D1529, VPOINTER_PAIR);
  _V10_Dpair_D1529.first = VEncodePointer(&_V10_Dpair_D1528, VPOINTER_PAIR);
  _V10_Dpair_D1529.rest = VNULL;
  _V10_Dpair_D1528.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1528.rest = VEncodePointer(&_V10_Dpair_D1527, VPOINTER_PAIR);
  _V10_Dpair_D1527.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1527.rest = VEncodePointer(&_V10_Dpair_D1523, VPOINTER_PAIR);
  _V10_Dpair_D1526.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1526.rest = VEncodePointer(&_V10_Dpair_D1524, VPOINTER_PAIR);
  _V10_Dpair_D1525.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1525.rest = VEncodePointer(&_V10_Dpair_D1524, VPOINTER_PAIR);
  _V10_Dpair_D1524.first = VEncodePointer(&_V10_Dpair_D1523, VPOINTER_PAIR);
  _V10_Dpair_D1524.rest = VNULL;
  _V10_Dpair_D1523.first = VEncodePointer(&_V10_Dpair_D1455, VPOINTER_PAIR);
  _V10_Dpair_D1523.rest = VEncodePointer(&_V10_Dpair_D1522, VPOINTER_PAIR);
  _V10_Dpair_D1522.first = VEncodePointer(&_V10_Dpair_D1515, VPOINTER_PAIR);
  _V10_Dpair_D1522.rest = VEncodePointer(&_V10_Dpair_D1521, VPOINTER_PAIR);
  _V10_Dpair_D1521.first = VEncodePointer(&_V10_Dpair_D1517, VPOINTER_PAIR);
  _V10_Dpair_D1521.rest = VEncodePointer(&_V10_Dpair_D1520, VPOINTER_PAIR);
  _V10_Dpair_D1520.first = VEncodePointer(&_V10_Dpair_D1518, VPOINTER_PAIR);
  _V10_Dpair_D1520.rest = VEncodePointer(&_V10_Dpair_D1519, VPOINTER_PAIR);
  _V10_Dpair_D1519.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1519.rest = VEncodePointer(&_V10_Dpair_D1511, VPOINTER_PAIR);
  _V10_Dpair_D1518.first = _V0expr_D42;
  _V10_Dpair_D1518.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1517.first = _V0cont;
  _V10_Dpair_D1517.rest = VEncodePointer(&_V10_Dpair_D1516, VPOINTER_PAIR);
  _V10_Dpair_D1516.first = _V0expr_D43;
  _V10_Dpair_D1516.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1515.first = _V0x;
  _V10_Dpair_D1515.rest = VEncodePointer(&_V10_Dpair_D1514, VPOINTER_PAIR);
  _V10_Dpair_D1514.first = _V0expr_D44;
  _V10_Dpair_D1514.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1513.first = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1513.rest = VEncodePointer(&_V10_Dpair_D1512, VPOINTER_PAIR);
  _V10_Dpair_D1512.first = VEncodePointer(&_V10_Dpair_D1511, VPOINTER_PAIR);
  _V10_Dpair_D1512.rest = VNULL;
  _V10_Dpair_D1511.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1511.rest = VEncodePointer(&_V10_Dpair_D1510, VPOINTER_PAIR);
  _V10_Dpair_D1510.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1510.rest = VEncodePointer(&_V10_Dpair_D1507, VPOINTER_PAIR);
  _V10_Dpair_D1509.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1509.rest = VEncodePointer(&_V10_Dpair_D1508, VPOINTER_PAIR);
  _V10_Dpair_D1508.first = VEncodePointer(&_V10_Dpair_D1507, VPOINTER_PAIR);
  _V10_Dpair_D1508.rest = VNULL;
  _V10_Dpair_D1507.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1507.rest = VEncodePointer(&_V10_Dpair_D1483, VPOINTER_PAIR);
  _V10_Dpair_D1506.first = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1506.rest = VEncodePointer(&_V10_Dpair_D1505, VPOINTER_PAIR);
  _V10_Dpair_D1505.first = VEncodePointer(&_V10_Dpair_D1504, VPOINTER_PAIR);
  _V10_Dpair_D1505.rest = VNULL;
  _V10_Dpair_D1504.first = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1504.rest = VEncodePointer(&_V10_Dpair_D1503, VPOINTER_PAIR);
  _V10_Dpair_D1503.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1503.rest = VEncodePointer(&_V10_Dpair_D1499, VPOINTER_PAIR);
  _V10_Dpair_D1502.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1502.rest = VEncodePointer(&_V10_Dpair_D1500, VPOINTER_PAIR);
  _V10_Dpair_D1501.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1501.rest = VEncodePointer(&_V10_Dpair_D1500, VPOINTER_PAIR);
  _V10_Dpair_D1500.first = VEncodePointer(&_V10_Dpair_D1499, VPOINTER_PAIR);
  _V10_Dpair_D1500.rest = VNULL;
  _V10_Dpair_D1499.first = VEncodePointer(&_V10_Dpair_D1455, VPOINTER_PAIR);
  _V10_Dpair_D1499.rest = VEncodePointer(&_V10_Dpair_D1498, VPOINTER_PAIR);
  _V10_Dpair_D1498.first = VEncodePointer(&_V10_Dpair_D1491, VPOINTER_PAIR);
  _V10_Dpair_D1498.rest = VEncodePointer(&_V10_Dpair_D1497, VPOINTER_PAIR);
  _V10_Dpair_D1497.first = VEncodePointer(&_V10_Dpair_D1493, VPOINTER_PAIR);
  _V10_Dpair_D1497.rest = VEncodePointer(&_V10_Dpair_D1496, VPOINTER_PAIR);
  _V10_Dpair_D1496.first = VEncodePointer(&_V10_Dpair_D1494, VPOINTER_PAIR);
  _V10_Dpair_D1496.rest = VEncodePointer(&_V10_Dpair_D1495, VPOINTER_PAIR);
  _V10_Dpair_D1495.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1495.rest = VEncodePointer(&_V10_Dpair_D1487, VPOINTER_PAIR);
  _V10_Dpair_D1494.first = _V0expr_D38;
  _V10_Dpair_D1494.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1493.first = _V0cont;
  _V10_Dpair_D1493.rest = VEncodePointer(&_V10_Dpair_D1492, VPOINTER_PAIR);
  _V10_Dpair_D1492.first = _V0expr_D39;
  _V10_Dpair_D1492.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1491.first = _V0x;
  _V10_Dpair_D1491.rest = VEncodePointer(&_V10_Dpair_D1490, VPOINTER_PAIR);
  _V10_Dpair_D1490.first = _V0expr_D40;
  _V10_Dpair_D1490.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1489.first = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1489.rest = VEncodePointer(&_V10_Dpair_D1488, VPOINTER_PAIR);
  _V10_Dpair_D1488.first = VEncodePointer(&_V10_Dpair_D1487, VPOINTER_PAIR);
  _V10_Dpair_D1488.rest = VNULL;
  _V10_Dpair_D1487.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1487.rest = VEncodePointer(&_V10_Dpair_D1486, VPOINTER_PAIR);
  _V10_Dpair_D1486.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1486.rest = VEncodePointer(&_V10_Dpair_D1483, VPOINTER_PAIR);
  _V10_Dpair_D1485.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1485.rest = VEncodePointer(&_V10_Dpair_D1484, VPOINTER_PAIR);
  _V10_Dpair_D1484.first = VEncodePointer(&_V10_Dpair_D1483, VPOINTER_PAIR);
  _V10_Dpair_D1484.rest = VNULL;
  _V10_Dpair_D1483.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1483.rest = VEncodePointer(&_V10_Dpair_D1466, VPOINTER_PAIR);
  _V10_Dpair_D1482.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1482.rest = VEncodePointer(&_V10_Dpair_D1480, VPOINTER_PAIR);
  _V10_Dpair_D1481.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1481.rest = VEncodePointer(&_V10_Dpair_D1480, VPOINTER_PAIR);
  _V10_Dpair_D1480.first = VEncodePointer(&_V10_Dpair_D1479, VPOINTER_PAIR);
  _V10_Dpair_D1480.rest = VNULL;
  _V10_Dpair_D1479.first = VEncodePointer(&_V10_Dpair_D1455, VPOINTER_PAIR);
  _V10_Dpair_D1479.rest = VEncodePointer(&_V10_Dpair_D1478, VPOINTER_PAIR);
  _V10_Dpair_D1478.first = VEncodePointer(&_V10_Dpair_D1474, VPOINTER_PAIR);
  _V10_Dpair_D1478.rest = VEncodePointer(&_V10_Dpair_D1477, VPOINTER_PAIR);
  _V10_Dpair_D1477.first = VEncodePointer(&_V10_Dpair_D1475, VPOINTER_PAIR);
  _V10_Dpair_D1477.rest = VEncodePointer(&_V10_Dpair_D1476, VPOINTER_PAIR);
  _V10_Dpair_D1476.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1476.rest = VEncodePointer(&_V10_Dpair_D1470, VPOINTER_PAIR);
  _V10_Dpair_D1475.first = _V0expr_D35;
  _V10_Dpair_D1475.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1474.first = _V0x;
  _V10_Dpair_D1474.rest = VEncodePointer(&_V10_Dpair_D1473, VPOINTER_PAIR);
  _V10_Dpair_D1473.first = _V0expr_D36;
  _V10_Dpair_D1473.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1472.first = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1472.rest = VEncodePointer(&_V10_Dpair_D1471, VPOINTER_PAIR);
  _V10_Dpair_D1471.first = VEncodePointer(&_V10_Dpair_D1470, VPOINTER_PAIR);
  _V10_Dpair_D1471.rest = VNULL;
  _V10_Dpair_D1470.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1470.rest = VEncodePointer(&_V10_Dpair_D1469, VPOINTER_PAIR);
  _V10_Dpair_D1469.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1469.rest = VEncodePointer(&_V10_Dpair_D1466, VPOINTER_PAIR);
  _V10_Dpair_D1468.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1468.rest = VEncodePointer(&_V10_Dpair_D1467, VPOINTER_PAIR);
  _V10_Dpair_D1467.first = VEncodePointer(&_V10_Dpair_D1466, VPOINTER_PAIR);
  _V10_Dpair_D1467.rest = VNULL;
  _V10_Dpair_D1466.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1466.rest = VEncodePointer(&_V10_Dpair_D1448, VPOINTER_PAIR);
  _V10_Dpair_D1465.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1465.rest = VEncodePointer(&_V10_Dpair_D1463, VPOINTER_PAIR);
  _V10_Dpair_D1464.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1464.rest = VEncodePointer(&_V10_Dpair_D1463, VPOINTER_PAIR);
  _V10_Dpair_D1463.first = VEncodePointer(&_V10_Dpair_D1462, VPOINTER_PAIR);
  _V10_Dpair_D1463.rest = VNULL;
  _V10_Dpair_D1462.first = VEncodePointer(&_V10_Dpair_D1455, VPOINTER_PAIR);
  _V10_Dpair_D1462.rest = VEncodePointer(&_V10_Dpair_D1461, VPOINTER_PAIR);
  _V10_Dpair_D1461.first = VEncodePointer(&_V10_Dpair_D1457, VPOINTER_PAIR);
  _V10_Dpair_D1461.rest = VEncodePointer(&_V10_Dpair_D1460, VPOINTER_PAIR);
  _V10_Dpair_D1460.first = VEncodePointer(&_V10_Dpair_D1458, VPOINTER_PAIR);
  _V10_Dpair_D1460.rest = VEncodePointer(&_V10_Dpair_D1459, VPOINTER_PAIR);
  _V10_Dpair_D1459.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1459.rest = VEncodePointer(&_V10_Dpair_D1452, VPOINTER_PAIR);
  _V10_Dpair_D1458.first = _V0expr_D32;
  _V10_Dpair_D1458.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1457.first = _V0x;
  _V10_Dpair_D1457.rest = VEncodePointer(&_V10_Dpair_D1456, VPOINTER_PAIR);
  _V10_Dpair_D1456.first = _V0expr_D33;
  _V10_Dpair_D1456.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1455.first = _V0val;
  _V10_Dpair_D1455.rest = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1454.first = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1454.rest = VEncodePointer(&_V10_Dpair_D1453, VPOINTER_PAIR);
  _V10_Dpair_D1453.first = VEncodePointer(&_V10_Dpair_D1452, VPOINTER_PAIR);
  _V10_Dpair_D1453.rest = VNULL;
  _V10_Dpair_D1452.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1452.rest = VEncodePointer(&_V10_Dpair_D1451, VPOINTER_PAIR);
  _V10_Dpair_D1451.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1451.rest = VEncodePointer(&_V10_Dpair_D1448, VPOINTER_PAIR);
  _V10_Dpair_D1450.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1450.rest = VEncodePointer(&_V10_Dpair_D1449, VPOINTER_PAIR);
  _V10_Dpair_D1449.first = VEncodePointer(&_V10_Dpair_D1448, VPOINTER_PAIR);
  _V10_Dpair_D1449.rest = VNULL;
  _V10_Dpair_D1448.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1448.rest = VEncodePointer(&_V10_Dpair_D1423, VPOINTER_PAIR);
  _V10_Dpair_D1447.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1447.rest = VEncodePointer(&_V10_Dpair_D1446, VPOINTER_PAIR);
  _V10_Dpair_D1446.first = VEncodePointer(&_V10_Dpair_D1445, VPOINTER_PAIR);
  _V10_Dpair_D1446.rest = VNULL;
  _V10_Dpair_D1445.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1445.rest = VEncodePointer(&_V10_Dpair_D1444, VPOINTER_PAIR);
  _V10_Dpair_D1444.first = VEncodePointer(&_V10_Dpair_D1390, VPOINTER_PAIR);
  _V10_Dpair_D1444.rest = VEncodePointer(&_V10_Dpair_D1441, VPOINTER_PAIR);
  _V10_Dpair_D1443.first = VEncodePointer(&_V10_Dpair_D1392, VPOINTER_PAIR);
  _V10_Dpair_D1443.rest = VEncodePointer(&_V10_Dpair_D1442, VPOINTER_PAIR);
  _V10_Dpair_D1442.first = VEncodePointer(&_V10_Dpair_D1441, VPOINTER_PAIR);
  _V10_Dpair_D1442.rest = VNULL;
  _V10_Dpair_D1441.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1441.rest = VEncodePointer(&_V10_Dpair_D1437, VPOINTER_PAIR);
  _V10_Dpair_D1440.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1440.rest = VEncodePointer(&_V10_Dpair_D1438, VPOINTER_PAIR);
  _V10_Dpair_D1439.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1439.rest = VEncodePointer(&_V10_Dpair_D1438, VPOINTER_PAIR);
  _V10_Dpair_D1438.first = VEncodePointer(&_V10_Dpair_D1437, VPOINTER_PAIR);
  _V10_Dpair_D1438.rest = VNULL;
  _V10_Dpair_D1437.first = VEncodePointer(&_V10_Dpair_D1430, VPOINTER_PAIR);
  _V10_Dpair_D1437.rest = VEncodePointer(&_V10_Dpair_D1436, VPOINTER_PAIR);
  _V10_Dpair_D1436.first = VEncodePointer(&_V10_Dpair_D1432, VPOINTER_PAIR);
  _V10_Dpair_D1436.rest = VEncodePointer(&_V10_Dpair_D1435, VPOINTER_PAIR);
  _V10_Dpair_D1435.first = VEncodePointer(&_V10_Dpair_D1433, VPOINTER_PAIR);
  _V10_Dpair_D1435.rest = VEncodePointer(&_V10_Dpair_D1434, VPOINTER_PAIR);
  _V10_Dpair_D1434.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1434.rest = VEncodePointer(&_V10_Dpair_D1427, VPOINTER_PAIR);
  _V10_Dpair_D1433.first = _V0expr_D29;
  _V10_Dpair_D1433.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1432.first = _V0name;
  _V10_Dpair_D1432.rest = VEncodePointer(&_V10_Dpair_D1431, VPOINTER_PAIR);
  _V10_Dpair_D1431.first = _V0expr_D30;
  _V10_Dpair_D1431.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1430.first = _V0static_Q;
  _V10_Dpair_D1430.rest = VEncodePointer(&_V10_Dpair_D1382, VPOINTER_PAIR);
  _V10_Dpair_D1429.first = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1429.rest = VEncodePointer(&_V10_Dpair_D1428, VPOINTER_PAIR);
  _V10_Dpair_D1428.first = VEncodePointer(&_V10_Dpair_D1427, VPOINTER_PAIR);
  _V10_Dpair_D1428.rest = VNULL;
  _V10_Dpair_D1427.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1427.rest = VEncodePointer(&_V10_Dpair_D1426, VPOINTER_PAIR);
  _V10_Dpair_D1426.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1426.rest = VEncodePointer(&_V10_Dpair_D1423, VPOINTER_PAIR);
  _V10_Dpair_D1425.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1425.rest = VEncodePointer(&_V10_Dpair_D1424, VPOINTER_PAIR);
  _V10_Dpair_D1424.first = VEncodePointer(&_V10_Dpair_D1423, VPOINTER_PAIR);
  _V10_Dpair_D1424.rest = VNULL;
  _V10_Dpair_D1423.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1423.rest = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D1422.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1422.rest = VEncodePointer(&_V10_Dpair_D1420, VPOINTER_PAIR);
  _V10_Dpair_D1421.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1421.rest = VEncodePointer(&_V10_Dpair_D1420, VPOINTER_PAIR);
  _V10_Dpair_D1420.first = VEncodePointer(&_V10_Dpair_D1419, VPOINTER_PAIR);
  _V10_Dpair_D1420.rest = VNULL;
  _V10_Dpair_D1419.first = VEncodePointer(&_V10_Dpair_D1364, VPOINTER_PAIR);
  _V10_Dpair_D1419.rest = VEncodePointer(&_V10_Dpair_D1418, VPOINTER_PAIR);
  _V10_Dpair_D1418.first = VEncodePointer(&_V10_Dpair_D1408, VPOINTER_PAIR);
  _V10_Dpair_D1418.rest = VEncodePointer(&_V10_Dpair_D1417, VPOINTER_PAIR);
  _V10_Dpair_D1417.first = VEncodePointer(&_V10_Dpair_D1410, VPOINTER_PAIR);
  _V10_Dpair_D1417.rest = VEncodePointer(&_V10_Dpair_D1416, VPOINTER_PAIR);
  _V10_Dpair_D1416.first = VEncodePointer(&_V10_Dpair_D1412, VPOINTER_PAIR);
  _V10_Dpair_D1416.rest = VEncodePointer(&_V10_Dpair_D1415, VPOINTER_PAIR);
  _V10_Dpair_D1415.first = VEncodePointer(&_V10_Dpair_D1413, VPOINTER_PAIR);
  _V10_Dpair_D1415.rest = VEncodePointer(&_V10_Dpair_D1414, VPOINTER_PAIR);
  _V10_Dpair_D1414.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1414.rest = VEncodePointer(&_V10_Dpair_D1404, VPOINTER_PAIR);
  _V10_Dpair_D1413.first = _V0expr_D24;
  _V10_Dpair_D1413.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1412.first = _V0name;
  _V10_Dpair_D1412.rest = VEncodePointer(&_V10_Dpair_D1411, VPOINTER_PAIR);
  _V10_Dpair_D1411.first = _V0expr_D25;
  _V10_Dpair_D1411.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1410.first = _V0static_Q;
  _V10_Dpair_D1410.rest = VEncodePointer(&_V10_Dpair_D1409, VPOINTER_PAIR);
  _V10_Dpair_D1409.first = _V0expr_D26;
  _V10_Dpair_D1409.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1408.first = _V0xs;
  _V10_Dpair_D1408.rest = VEncodePointer(&_V10_Dpair_D1407, VPOINTER_PAIR);
  _V10_Dpair_D1407.first = _V0expr_D27;
  _V10_Dpair_D1407.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1406.first = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1406.rest = VEncodePointer(&_V10_Dpair_D1405, VPOINTER_PAIR);
  _V10_Dpair_D1405.first = VEncodePointer(&_V10_Dpair_D1404, VPOINTER_PAIR);
  _V10_Dpair_D1405.rest = VNULL;
  _V10_Dpair_D1404.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1404.rest = VEncodePointer(&_V10_Dpair_D1403, VPOINTER_PAIR);
  _V10_Dpair_D1403.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1403.rest = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D1402.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1402.rest = VEncodePointer(&_V10_Dpair_D1401, VPOINTER_PAIR);
  _V10_Dpair_D1401.first = VEncodePointer(&_V10_Dpair_D1400, VPOINTER_PAIR);
  _V10_Dpair_D1401.rest = VNULL;
  _V10_Dpair_D1400.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1400.rest = VEncodePointer(&_V10_Dpair_D1375, VPOINTER_PAIR);
  _V10_Dpair_D1399.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1399.rest = VEncodePointer(&_V10_Dpair_D1398, VPOINTER_PAIR);
  _V10_Dpair_D1398.first = VEncodePointer(&_V10_Dpair_D1397, VPOINTER_PAIR);
  _V10_Dpair_D1398.rest = VNULL;
  _V10_Dpair_D1397.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1397.rest = VEncodePointer(&_V10_Dpair_D1396, VPOINTER_PAIR);
  _V10_Dpair_D1396.first = VEncodePointer(&_V10_Dpair_D1390, VPOINTER_PAIR);
  _V10_Dpair_D1396.rest = VEncodePointer(&_V10_Dpair_D1393, VPOINTER_PAIR);
  _V10_Dpair_D1395.first = VEncodePointer(&_V10_Dpair_D1392, VPOINTER_PAIR);
  _V10_Dpair_D1395.rest = VEncodePointer(&_V10_Dpair_D1394, VPOINTER_PAIR);
  _V10_Dpair_D1394.first = VEncodePointer(&_V10_Dpair_D1393, VPOINTER_PAIR);
  _V10_Dpair_D1394.rest = VNULL;
  _V10_Dpair_D1393.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1393.rest = VEncodePointer(&_V10_Dpair_D1384, VPOINTER_PAIR);
  _V10_Dpair_D1392.first = VEncodeBool(false);
  _V10_Dpair_D1392.rest = VEncodePointer(&_V10_Dpair_D1391, VPOINTER_PAIR);
  _V10_Dpair_D1391.first = VEncodePointer(&_V10_Dpair_D1390, VPOINTER_PAIR);
  _V10_Dpair_D1391.rest = VNULL;
  _V10_Dpair_D1390.first = _V0_Mk;
  _V10_Dpair_D1390.rest = VEncodePointer(&_V10_Dpair_D1389, VPOINTER_PAIR);
  _V10_Dpair_D1389.first = _V0body;
  _V10_Dpair_D1389.rest = VEncodePointer(&_V10_Dpair_D1388, VPOINTER_PAIR);
  _V10_Dpair_D1388.first = _V0p;
  _V10_Dpair_D1388.rest = VNULL;
  _V10_Dpair_D1387.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1387.rest = VEncodePointer(&_V10_Dpair_D1385, VPOINTER_PAIR);
  _V10_Dpair_D1386.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1386.rest = VEncodePointer(&_V10_Dpair_D1385, VPOINTER_PAIR);
  _V10_Dpair_D1385.first = VEncodePointer(&_V10_Dpair_D1384, VPOINTER_PAIR);
  _V10_Dpair_D1385.rest = VNULL;
  _V10_Dpair_D1384.first = VEncodePointer(&_V10_Dpair_D1382, VPOINTER_PAIR);
  _V10_Dpair_D1384.rest = VEncodePointer(&_V10_Dpair_D1383, VPOINTER_PAIR);
  _V10_Dpair_D1383.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1383.rest = VEncodePointer(&_V10_Dpair_D1379, VPOINTER_PAIR);
  _V10_Dpair_D1382.first = _V0bodies;
  _V10_Dpair_D1382.rest = VNULL;
  _V10_Dpair_D1381.first = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1381.rest = VEncodePointer(&_V10_Dpair_D1380, VPOINTER_PAIR);
  _V10_Dpair_D1380.first = VEncodePointer(&_V10_Dpair_D1379, VPOINTER_PAIR);
  _V10_Dpair_D1380.rest = VNULL;
  _V10_Dpair_D1379.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1379.rest = VEncodePointer(&_V10_Dpair_D1378, VPOINTER_PAIR);
  _V10_Dpair_D1378.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1378.rest = VEncodePointer(&_V10_Dpair_D1375, VPOINTER_PAIR);
  _V10_Dpair_D1377.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1377.rest = VEncodePointer(&_V10_Dpair_D1376, VPOINTER_PAIR);
  _V10_Dpair_D1376.first = VEncodePointer(&_V10_Dpair_D1375, VPOINTER_PAIR);
  _V10_Dpair_D1376.rest = VNULL;
  _V10_Dpair_D1375.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1375.rest = VEncodePointer(&_V10_Dpair_D1357, VPOINTER_PAIR);
  _V10_Dpair_D1374.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1374.rest = VEncodePointer(&_V10_Dpair_D1372, VPOINTER_PAIR);
  _V10_Dpair_D1373.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1373.rest = VEncodePointer(&_V10_Dpair_D1372, VPOINTER_PAIR);
  _V10_Dpair_D1372.first = VEncodePointer(&_V10_Dpair_D1371, VPOINTER_PAIR);
  _V10_Dpair_D1372.rest = VNULL;
  _V10_Dpair_D1371.first = VEncodePointer(&_V10_Dpair_D1364, VPOINTER_PAIR);
  _V10_Dpair_D1371.rest = VEncodePointer(&_V10_Dpair_D1370, VPOINTER_PAIR);
  _V10_Dpair_D1370.first = VEncodePointer(&_V10_Dpair_D1366, VPOINTER_PAIR);
  _V10_Dpair_D1370.rest = VEncodePointer(&_V10_Dpair_D1369, VPOINTER_PAIR);
  _V10_Dpair_D1369.first = VEncodePointer(&_V10_Dpair_D1367, VPOINTER_PAIR);
  _V10_Dpair_D1369.rest = VEncodePointer(&_V10_Dpair_D1368, VPOINTER_PAIR);
  _V10_Dpair_D1368.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1368.rest = VEncodePointer(&_V10_Dpair_D1361, VPOINTER_PAIR);
  _V10_Dpair_D1367.first = _V0expr_D20;
  _V10_Dpair_D1367.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1366.first = _V0xs;
  _V10_Dpair_D1366.rest = VEncodePointer(&_V10_Dpair_D1365, VPOINTER_PAIR);
  _V10_Dpair_D1365.first = _V0expr_D21;
  _V10_Dpair_D1365.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1364.first = _V0body;
  _V10_Dpair_D1364.rest = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1363.first = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1363.rest = VEncodePointer(&_V10_Dpair_D1362, VPOINTER_PAIR);
  _V10_Dpair_D1362.first = VEncodePointer(&_V10_Dpair_D1361, VPOINTER_PAIR);
  _V10_Dpair_D1362.rest = VNULL;
  _V10_Dpair_D1361.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1361.rest = VEncodePointer(&_V10_Dpair_D1360, VPOINTER_PAIR);
  _V10_Dpair_D1360.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1360.rest = VEncodePointer(&_V10_Dpair_D1357, VPOINTER_PAIR);
  _V10_Dpair_D1359.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1359.rest = VEncodePointer(&_V10_Dpair_D1358, VPOINTER_PAIR);
  _V10_Dpair_D1358.first = VEncodePointer(&_V10_Dpair_D1357, VPOINTER_PAIR);
  _V10_Dpair_D1358.rest = VNULL;
  _V10_Dpair_D1357.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1357.rest = VEncodePointer(&_V10_Dpair_D1346, VPOINTER_PAIR);
  _V10_Dpair_D1356.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1356.rest = VEncodePointer(&_V10_Dpair_D1354, VPOINTER_PAIR);
  _V10_Dpair_D1355.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1355.rest = VEncodePointer(&_V10_Dpair_D1354, VPOINTER_PAIR);
  _V10_Dpair_D1354.first = VEncodePointer(&_V10_Dpair_D1353, VPOINTER_PAIR);
  _V10_Dpair_D1354.rest = VNULL;
  _V10_Dpair_D1353.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1353.rest = VEncodePointer(&_V10_Dpair_D1350, VPOINTER_PAIR);
  _V10_Dpair_D1352.first = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1352.rest = VEncodePointer(&_V10_Dpair_D1351, VPOINTER_PAIR);
  _V10_Dpair_D1351.first = VEncodePointer(&_V10_Dpair_D1350, VPOINTER_PAIR);
  _V10_Dpair_D1351.rest = VNULL;
  _V10_Dpair_D1350.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1350.rest = VEncodePointer(&_V10_Dpair_D1349, VPOINTER_PAIR);
  _V10_Dpair_D1349.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1349.rest = VEncodePointer(&_V10_Dpair_D1346, VPOINTER_PAIR);
  _V10_Dpair_D1348.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1348.rest = VEncodePointer(&_V10_Dpair_D1347, VPOINTER_PAIR);
  _V10_Dpair_D1347.first = VEncodePointer(&_V10_Dpair_D1346, VPOINTER_PAIR);
  _V10_Dpair_D1347.rest = VNULL;
  _V10_Dpair_D1346.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1346.rest = VEncodePointer(&_V10_Dpair_D1335, VPOINTER_PAIR);
  _V10_Dpair_D1345.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1345.rest = VEncodePointer(&_V10_Dpair_D1343, VPOINTER_PAIR);
  _V10_Dpair_D1344.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1344.rest = VEncodePointer(&_V10_Dpair_D1343, VPOINTER_PAIR);
  _V10_Dpair_D1343.first = VEncodePointer(&_V10_Dpair_D1342, VPOINTER_PAIR);
  _V10_Dpair_D1343.rest = VNULL;
  _V10_Dpair_D1342.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1342.rest = VEncodePointer(&_V10_Dpair_D1339, VPOINTER_PAIR);
  _V10_Dpair_D1341.first = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1341.rest = VEncodePointer(&_V10_Dpair_D1340, VPOINTER_PAIR);
  _V10_Dpair_D1340.first = VEncodePointer(&_V10_Dpair_D1339, VPOINTER_PAIR);
  _V10_Dpair_D1340.rest = VNULL;
  _V10_Dpair_D1339.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1339.rest = VEncodePointer(&_V10_Dpair_D1338, VPOINTER_PAIR);
  _V10_Dpair_D1338.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1338.rest = VEncodePointer(&_V10_Dpair_D1335, VPOINTER_PAIR);
  _V10_Dpair_D1337.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1337.rest = VEncodePointer(&_V10_Dpair_D1336, VPOINTER_PAIR);
  _V10_Dpair_D1336.first = VEncodePointer(&_V10_Dpair_D1335, VPOINTER_PAIR);
  _V10_Dpair_D1336.rest = VNULL;
  _V10_Dpair_D1335.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1335.rest = VEncodePointer(&_V10_Dpair_D1324, VPOINTER_PAIR);
  _V10_Dpair_D1334.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1334.rest = VEncodePointer(&_V10_Dpair_D1332, VPOINTER_PAIR);
  _V10_Dpair_D1333.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1333.rest = VEncodePointer(&_V10_Dpair_D1332, VPOINTER_PAIR);
  _V10_Dpair_D1332.first = VEncodePointer(&_V10_Dpair_D1331, VPOINTER_PAIR);
  _V10_Dpair_D1332.rest = VNULL;
  _V10_Dpair_D1331.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1331.rest = VEncodePointer(&_V10_Dpair_D1328, VPOINTER_PAIR);
  _V10_Dpair_D1330.first = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1330.rest = VEncodePointer(&_V10_Dpair_D1329, VPOINTER_PAIR);
  _V10_Dpair_D1329.first = VEncodePointer(&_V10_Dpair_D1328, VPOINTER_PAIR);
  _V10_Dpair_D1329.rest = VNULL;
  _V10_Dpair_D1328.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1328.rest = VEncodePointer(&_V10_Dpair_D1327, VPOINTER_PAIR);
  _V10_Dpair_D1327.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1327.rest = VEncodePointer(&_V10_Dpair_D1324, VPOINTER_PAIR);
  _V10_Dpair_D1326.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1326.rest = VEncodePointer(&_V10_Dpair_D1325, VPOINTER_PAIR);
  _V10_Dpair_D1325.first = VEncodePointer(&_V10_Dpair_D1324, VPOINTER_PAIR);
  _V10_Dpair_D1325.rest = VNULL;
  _V10_Dpair_D1324.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1324.rest = VEncodePointer(&_V10_Dpair_D1307, VPOINTER_PAIR);
  _V10_Dpair_D1323.first = VEncodePointer(&_V10_Dpair_D1319, VPOINTER_PAIR);
  _V10_Dpair_D1323.rest = VEncodePointer(&_V10_Dpair_D1322, VPOINTER_PAIR);
  _V10_Dpair_D1322.first = VEncodePointer(&_V10_Dpair_D1321, VPOINTER_PAIR);
  _V10_Dpair_D1322.rest = VNULL;
  _V10_Dpair_D1321.first = _V0unquote;
  _V10_Dpair_D1321.rest = VEncodePointer(&_V10_Dpair_D1320, VPOINTER_PAIR);
  _V10_Dpair_D1320.first = _V0unmangled__env;
  _V10_Dpair_D1320.rest = VNULL;
  _V10_Dpair_D1319.first = VEncodeBool(false);
  _V10_Dpair_D1319.rest = VEncodePointer(&_V10_Dpair_D1318, VPOINTER_PAIR);
  _V10_Dpair_D1318.first = _V0_U;
  _V10_Dpair_D1318.rest = VNULL;
  _V10_Dpair_D1317.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1317.rest = VEncodePointer(&_V10_Dpair_D1315, VPOINTER_PAIR);
  _V10_Dpair_D1316.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1316.rest = VEncodePointer(&_V10_Dpair_D1315, VPOINTER_PAIR);
  _V10_Dpair_D1315.first = VEncodePointer(&_V10_Dpair_D1314, VPOINTER_PAIR);
  _V10_Dpair_D1315.rest = VNULL;
  _V10_Dpair_D1314.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1314.rest = VEncodePointer(&_V10_Dpair_D1311, VPOINTER_PAIR);
  _V10_Dpair_D1313.first = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1313.rest = VEncodePointer(&_V10_Dpair_D1312, VPOINTER_PAIR);
  _V10_Dpair_D1312.first = VEncodePointer(&_V10_Dpair_D1311, VPOINTER_PAIR);
  _V10_Dpair_D1312.rest = VNULL;
  _V10_Dpair_D1311.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1311.rest = VEncodePointer(&_V10_Dpair_D1310, VPOINTER_PAIR);
  _V10_Dpair_D1310.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D1310.rest = VEncodePointer(&_V10_Dpair_D1307, VPOINTER_PAIR);
  _V10_Dpair_D1309.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1309.rest = VEncodePointer(&_V10_Dpair_D1308, VPOINTER_PAIR);
  _V10_Dpair_D1308.first = VEncodePointer(&_V10_Dpair_D1307, VPOINTER_PAIR);
  _V10_Dpair_D1308.rest = VNULL;
  _V10_Dpair_D1307.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1307.rest = VEncodePointer(&_V10_Dpair_D1306, VPOINTER_PAIR);
  _V10_Dpair_D1306.first = VEncodePointer(&_V10_Dpair_D1300, VPOINTER_PAIR);
  _V10_Dpair_D1306.rest = VEncodePointer(&_V10_Dpair_D1303, VPOINTER_PAIR);
  _V10_Dpair_D1305.first = VEncodePointer(&_V10_Dpair_D1302, VPOINTER_PAIR);
  _V10_Dpair_D1305.rest = VEncodePointer(&_V10_Dpair_D1304, VPOINTER_PAIR);
  _V10_Dpair_D1304.first = VEncodePointer(&_V10_Dpair_D1303, VPOINTER_PAIR);
  _V10_Dpair_D1304.rest = VNULL;
  _V10_Dpair_D1303.first = VEncodePointer(&_V10_Dpair_D1295, VPOINTER_PAIR);
  _V10_Dpair_D1303.rest = VEncodePointer(&_V10_Dpair_D1060, VPOINTER_PAIR);
  _V10_Dpair_D1302.first = VEncodeBool(false);
  _V10_Dpair_D1302.rest = VEncodePointer(&_V10_Dpair_D1301, VPOINTER_PAIR);
  _V10_Dpair_D1301.first = VEncodePointer(&_V10_Dpair_D1300, VPOINTER_PAIR);
  _V10_Dpair_D1301.rest = VNULL;
  _V10_Dpair_D1300.first = _V0_Mk;
  _V10_Dpair_D1300.rest = VEncodePointer(&_V10_Dpair_D1299, VPOINTER_PAIR);
  _V10_Dpair_D1299.first = _V0kk_D13;
  _V10_Dpair_D1299.rest = VNULL;
  _V10_Dpair_D1298.first = VEncodePointer(&_V10_Dpair_D1297, VPOINTER_PAIR);
  _V10_Dpair_D1298.rest = VEncodePointer(&_V10_Dpair_D1061, VPOINTER_PAIR);
  _V10_Dpair_D1297.first = VEncodePointer(&_V10_Dpair_D1293, VPOINTER_PAIR);
  _V10_Dpair_D1297.rest = VEncodePointer(&_V10_Dpair_D1296, VPOINTER_PAIR);
  _V10_Dpair_D1296.first = VEncodePointer(&_V10_Dpair_D1295, VPOINTER_PAIR);
  _V10_Dpair_D1296.rest = VNULL;
  _V10_Dpair_D1295.first = _V0_Mk;
  _V10_Dpair_D1295.rest = VEncodePointer(&_V10_Dpair_D1294, VPOINTER_PAIR);
  _V10_Dpair_D1294.first = _V0k;
  _V10_Dpair_D1294.rest = VEncodePointer(&_V10_Dpair_D1046, VPOINTER_PAIR);
  _V10_Dpair_D1293.first = _V0vanity;
  _V10_Dpair_D1293.rest = VEncodePointer(&_V10_Dpair_D1292, VPOINTER_PAIR);
  _V10_Dpair_D1292.first = _V0compiler;
  _V10_Dpair_D1292.rest = VEncodePointer(&_V10_Dpair_D1291, VPOINTER_PAIR);
  _V10_Dpair_D1291.first = _V0variables;
  _V10_Dpair_D1291.rest = VEncodePointer(&_V10_Dpair_D1290, VPOINTER_PAIR);
  _V10_Dpair_D1290.first = _V0variable__pure_Q;
  _V10_Dpair_D1290.rest = VNULL;
  _V10_Dpair_D1289.first = _V0begin;
  _V10_Dpair_D1289.rest = VEncodePointer(&_V10_Dpair_D1288, VPOINTER_PAIR);
  _V10_Dpair_D1288.first = _V0and;
  _V10_Dpair_D1288.rest = VEncodePointer(&_V10_Dpair_D1287, VPOINTER_PAIR);
  _V10_Dpair_D1287.first = _V0or;
  _V10_Dpair_D1287.rest = VNULL;
  _V10_Dpair_D1286.first = VEncodePointer(&_V10_Dpair_D1285, VPOINTER_PAIR);
  _V10_Dpair_D1286.rest = VEncodePointer(&_V10_Dpair_D1280, VPOINTER_PAIR);
  _V10_Dpair_D1285.first = VEncodeBool(false);
  _V10_Dpair_D1285.rest = VEncodePointer(&_V10_Dpair_D1284, VPOINTER_PAIR);
  _V10_Dpair_D1284.first = VEncodePointer(&_V10_Dpair_D1283, VPOINTER_PAIR);
  _V10_Dpair_D1284.rest = VNULL;
  _V10_Dpair_D1283.first = _V0_Mk;
  _V10_Dpair_D1283.rest = VEncodePointer(&_V10_Dpair_D1282, VPOINTER_PAIR);
  _V10_Dpair_D1282.first = _V0e;
  _V10_Dpair_D1282.rest = VNULL;
  _V10_Dpair_D1281.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1281.rest = VEncodePointer(&_V10_Dpair_D1280, VPOINTER_PAIR);
  _V10_Dpair_D1280.first = VEncodePointer(&_V10_Dpair_D1279, VPOINTER_PAIR);
  _V10_Dpair_D1280.rest = VNULL;
  _V10_Dpair_D1279.first = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1279.rest = VEncodePointer(&_V10_Dpair_D1261, VPOINTER_PAIR);
  _V10_Dpair_D1278.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1278.rest = VEncodePointer(&_V10_Dpair_D1277, VPOINTER_PAIR);
  _V10_Dpair_D1277.first = VEncodePointer(&_V10_Dpair_D1276, VPOINTER_PAIR);
  _V10_Dpair_D1277.rest = VNULL;
  _V10_Dpair_D1276.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1276.rest = VEncodePointer(&_V10_Dpair_D1273, VPOINTER_PAIR);
  _V10_Dpair_D1275.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1275.rest = VEncodePointer(&_V10_Dpair_D1274, VPOINTER_PAIR);
  _V10_Dpair_D1274.first = VEncodePointer(&_V10_Dpair_D1273, VPOINTER_PAIR);
  _V10_Dpair_D1274.rest = VNULL;
  _V10_Dpair_D1273.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1273.rest = VEncodePointer(&_V10_Dpair_D1270, VPOINTER_PAIR);
  _V10_Dpair_D1272.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1272.rest = VEncodePointer(&_V10_Dpair_D1271, VPOINTER_PAIR);
  _V10_Dpair_D1271.first = VEncodePointer(&_V10_Dpair_D1270, VPOINTER_PAIR);
  _V10_Dpair_D1271.rest = VNULL;
  _V10_Dpair_D1270.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1270.rest = VEncodePointer(&_V10_Dpair_D1267, VPOINTER_PAIR);
  _V10_Dpair_D1269.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1269.rest = VEncodePointer(&_V10_Dpair_D1268, VPOINTER_PAIR);
  _V10_Dpair_D1268.first = VEncodePointer(&_V10_Dpair_D1267, VPOINTER_PAIR);
  _V10_Dpair_D1268.rest = VNULL;
  _V10_Dpair_D1267.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1267.rest = VEncodePointer(&_V10_Dpair_D1264, VPOINTER_PAIR);
  _V10_Dpair_D1266.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1266.rest = VEncodePointer(&_V10_Dpair_D1265, VPOINTER_PAIR);
  _V10_Dpair_D1265.first = VEncodePointer(&_V10_Dpair_D1264, VPOINTER_PAIR);
  _V10_Dpair_D1265.rest = VNULL;
  _V10_Dpair_D1264.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1264.rest = VEncodePointer(&_V10_Dpair_D1261, VPOINTER_PAIR);
  _V10_Dpair_D1263.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1263.rest = VEncodePointer(&_V10_Dpair_D1262, VPOINTER_PAIR);
  _V10_Dpair_D1262.first = VEncodePointer(&_V10_Dpair_D1261, VPOINTER_PAIR);
  _V10_Dpair_D1262.rest = VNULL;
  _V10_Dpair_D1261.first = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1261.rest = VEncodePointer(&_V10_Dpair_D1243, VPOINTER_PAIR);
  _V40_V10vcore_Dcar = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcar", &_VW_V40_V10vcore_Dcar), VPOINTER_CLOSURE);
  _V10_Dpair_D1260.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1260.rest = VEncodePointer(&_V10_Dpair_D1259, VPOINTER_PAIR);
  _V10_Dpair_D1259.first = VEncodePointer(&_V10_Dpair_D1258, VPOINTER_PAIR);
  _V10_Dpair_D1259.rest = VNULL;
  _V10_Dpair_D1258.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1258.rest = VEncodePointer(&_V10_Dpair_D1255, VPOINTER_PAIR);
  _V10_Dpair_D1257.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1257.rest = VEncodePointer(&_V10_Dpair_D1256, VPOINTER_PAIR);
  _V10_Dpair_D1256.first = VEncodePointer(&_V10_Dpair_D1255, VPOINTER_PAIR);
  _V10_Dpair_D1256.rest = VNULL;
  _V10_Dpair_D1255.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1255.rest = VEncodePointer(&_V10_Dpair_D1252, VPOINTER_PAIR);
  _V10_Dpair_D1254.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1254.rest = VEncodePointer(&_V10_Dpair_D1253, VPOINTER_PAIR);
  _V10_Dpair_D1253.first = VEncodePointer(&_V10_Dpair_D1252, VPOINTER_PAIR);
  _V10_Dpair_D1253.rest = VNULL;
  _V10_Dpair_D1252.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1252.rest = VEncodePointer(&_V10_Dpair_D1249, VPOINTER_PAIR);
  _V10_Dpair_D1251.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1251.rest = VEncodePointer(&_V10_Dpair_D1250, VPOINTER_PAIR);
  _V10_Dpair_D1250.first = VEncodePointer(&_V10_Dpair_D1249, VPOINTER_PAIR);
  _V10_Dpair_D1250.rest = VNULL;
  _V10_Dpair_D1249.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1249.rest = VEncodePointer(&_V10_Dpair_D1246, VPOINTER_PAIR);
  _V10_Dpair_D1248.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1248.rest = VEncodePointer(&_V10_Dpair_D1247, VPOINTER_PAIR);
  _V10_Dpair_D1247.first = VEncodePointer(&_V10_Dpair_D1246, VPOINTER_PAIR);
  _V10_Dpair_D1247.rest = VNULL;
  _V10_Dpair_D1246.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1246.rest = VEncodePointer(&_V10_Dpair_D1243, VPOINTER_PAIR);
  _V10_Dpair_D1245.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1245.rest = VEncodePointer(&_V10_Dpair_D1244, VPOINTER_PAIR);
  _V10_Dpair_D1244.first = VEncodePointer(&_V10_Dpair_D1243, VPOINTER_PAIR);
  _V10_Dpair_D1244.rest = VNULL;
  _V10_Dpair_D1243.first = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1243.rest = VEncodePointer(&_V10_Dpair_D1220, VPOINTER_PAIR);
  _V10_Dpair_D1242.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1242.rest = VEncodePointer(&_V10_Dpair_D1222, VPOINTER_PAIR);
  _V10_Dpair_D1241.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1241.rest = VEncodePointer(&_V10_Dpair_D1240, VPOINTER_PAIR);
  _V10_Dpair_D1240.first = VEncodePointer(&_V10_Dpair_D1239, VPOINTER_PAIR);
  _V10_Dpair_D1240.rest = VNULL;
  _V10_Dpair_D1239.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1239.rest = VEncodePointer(&_V10_Dpair_D1238, VPOINTER_PAIR);
  _V10_Dpair_D1238.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1238.rest = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1237.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1237.rest = VEncodePointer(&_V10_Dpair_D1236, VPOINTER_PAIR);
  _V10_Dpair_D1236.first = VEncodePointer(&_V10_Dpair_D1235, VPOINTER_PAIR);
  _V10_Dpair_D1236.rest = VNULL;
  _V10_Dpair_D1235.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1235.rest = VEncodePointer(&_V10_Dpair_D1234, VPOINTER_PAIR);
  _V10_Dpair_D1234.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1234.rest = VEncodePointer(&_V10_Dpair_D1231, VPOINTER_PAIR);
  _V10_Dpair_D1233.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1233.rest = VEncodePointer(&_V10_Dpair_D1232, VPOINTER_PAIR);
  _V10_Dpair_D1232.first = VEncodePointer(&_V10_Dpair_D1231, VPOINTER_PAIR);
  _V10_Dpair_D1232.rest = VNULL;
  _V10_Dpair_D1231.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1231.rest = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1230.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1230.rest = VEncodePointer(&_V10_Dpair_D1229, VPOINTER_PAIR);
  _V10_Dpair_D1229.first = VEncodePointer(&_V10_Dpair_D1228, VPOINTER_PAIR);
  _V10_Dpair_D1229.rest = VNULL;
  _V10_Dpair_D1228.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1228.rest = VEncodePointer(&_V10_Dpair_D1225, VPOINTER_PAIR);
  _V10_Dpair_D1227.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1227.rest = VEncodePointer(&_V10_Dpair_D1226, VPOINTER_PAIR);
  _V10_Dpair_D1226.first = VEncodePointer(&_V10_Dpair_D1225, VPOINTER_PAIR);
  _V10_Dpair_D1226.rest = VNULL;
  _V10_Dpair_D1225.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1225.rest = VEncodePointer(&_V10_Dpair_D1224, VPOINTER_PAIR);
  _V10_Dpair_D1224.first = VEncodePointer(&_V10_Dpair_D1187, VPOINTER_PAIR);
  _V10_Dpair_D1224.rest = VEncodePointer(&_V10_Dpair_D1221, VPOINTER_PAIR);
  _V10_Dpair_D1223.first = VEncodePointer(&_V10_Dpair_D1219, VPOINTER_PAIR);
  _V10_Dpair_D1223.rest = VEncodePointer(&_V10_Dpair_D1222, VPOINTER_PAIR);
  _V10_Dpair_D1222.first = VEncodePointer(&_V10_Dpair_D1221, VPOINTER_PAIR);
  _V10_Dpair_D1222.rest = VNULL;
  _V10_Dpair_D1221.first = VEncodePointer(&_V10_Dpair_D1190, VPOINTER_PAIR);
  _V10_Dpair_D1221.rest = VEncodePointer(&_V10_Dpair_D1220, VPOINTER_PAIR);
  _V10_Dpair_D1220.first = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1220.rest = VEncodePointer(&_V10_Dpair_D1191, VPOINTER_PAIR);
  _V10_Dpair_D1219.first = VEncodePointer(&_V10_Dpair_D1218, VPOINTER_PAIR);
  _V10_Dpair_D1219.rest = VEncodePointer(&_V10_Dpair_D1188, VPOINTER_PAIR);
  _V10_Dpair_D1218.first = _V0vanity;
  _V10_Dpair_D1218.rest = VEncodePointer(&_V10_Dpair_D1217, VPOINTER_PAIR);
  _V10_Dpair_D1217.first = _V0compiler;
  _V10_Dpair_D1217.rest = VEncodePointer(&_V10_Dpair_D1216, VPOINTER_PAIR);
  _V10_Dpair_D1216.first = _V0variables;
  _V10_Dpair_D1216.rest = VEncodePointer(&_V10_Dpair_D1215, VPOINTER_PAIR);
  _V10_Dpair_D1215.first = _V0free__variables;
  _V10_Dpair_D1215.rest = VEncodePointer(&_V10_Dpair_D1214, VPOINTER_PAIR);
  _V10_Dpair_D1214.first = _V10_Dloop_D129;
  _V10_Dpair_D1214.rest = VEncodePointer(&_V10_Dpair_D1213, VPOINTER_PAIR);
  _V10_Dpair_D1213.first = _V10_Dloop2_D135;
  _V10_Dpair_D1213.rest = VNULL;
  _V10_Dpair_D1212.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1212.rest = VEncodePointer(&_V10_Dpair_D1211, VPOINTER_PAIR);
  _V10_Dpair_D1211.first = VEncodePointer(&_V10_Dpair_D1210, VPOINTER_PAIR);
  _V10_Dpair_D1211.rest = VNULL;
  _V10_Dpair_D1210.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1210.rest = VEncodePointer(&_V10_Dpair_D1209, VPOINTER_PAIR);
  _V10_Dpair_D1209.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1209.rest = VEncodePointer(&_V10_Dpair_D1206, VPOINTER_PAIR);
  _V10_Dpair_D1208.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1208.rest = VEncodePointer(&_V10_Dpair_D1207, VPOINTER_PAIR);
  _V10_Dpair_D1207.first = VEncodePointer(&_V10_Dpair_D1206, VPOINTER_PAIR);
  _V10_Dpair_D1207.rest = VNULL;
  _V10_Dpair_D1206.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1206.rest = VEncodePointer(&_V10_Dpair_D1205, VPOINTER_PAIR);
  _V10_Dpair_D1205.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1205.rest = VEncodePointer(&_V10_Dpair_D1202, VPOINTER_PAIR);
  _V10_Dpair_D1204.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1204.rest = VEncodePointer(&_V10_Dpair_D1203, VPOINTER_PAIR);
  _V10_Dpair_D1203.first = VEncodePointer(&_V10_Dpair_D1202, VPOINTER_PAIR);
  _V10_Dpair_D1203.rest = VNULL;
  _V10_Dpair_D1202.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1202.rest = VEncodePointer(&_V10_Dpair_D1199, VPOINTER_PAIR);
  _V10_Dpair_D1201.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1201.rest = VEncodePointer(&_V10_Dpair_D1200, VPOINTER_PAIR);
  _V10_Dpair_D1200.first = VEncodePointer(&_V10_Dpair_D1199, VPOINTER_PAIR);
  _V10_Dpair_D1200.rest = VNULL;
  _V10_Dpair_D1199.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1199.rest = VEncodePointer(&_V10_Dpair_D1196, VPOINTER_PAIR);
  _V10_Dpair_D1198.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1198.rest = VEncodePointer(&_V10_Dpair_D1197, VPOINTER_PAIR);
  _V10_Dpair_D1197.first = VEncodePointer(&_V10_Dpair_D1196, VPOINTER_PAIR);
  _V10_Dpair_D1197.rest = VNULL;
  _V10_Dpair_D1196.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1196.rest = VEncodePointer(&_V10_Dpair_D1195, VPOINTER_PAIR);
  _V10_Dpair_D1195.first = VEncodePointer(&_V10_Dpair_D1187, VPOINTER_PAIR);
  _V10_Dpair_D1195.rest = VEncodePointer(&_V10_Dpair_D1192, VPOINTER_PAIR);
  _V10_Dpair_D1194.first = VEncodePointer(&_V10_Dpair_D1189, VPOINTER_PAIR);
  _V10_Dpair_D1194.rest = VEncodePointer(&_V10_Dpair_D1193, VPOINTER_PAIR);
  _V10_Dpair_D1193.first = VEncodePointer(&_V10_Dpair_D1192, VPOINTER_PAIR);
  _V10_Dpair_D1193.rest = VNULL;
  _V10_Dpair_D1192.first = VEncodePointer(&_V10_Dpair_D1190, VPOINTER_PAIR);
  _V10_Dpair_D1192.rest = VEncodePointer(&_V10_Dpair_D1191, VPOINTER_PAIR);
  _V10_Dpair_D1191.first = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1191.rest = VEncodePointer(&_V10_Dpair_D1171, VPOINTER_PAIR);
  _V10_Dpair_D1190.first = _V0loop2;
  _V10_Dpair_D1190.rest = VNULL;
  _V10_Dpair_D1189.first = VEncodePointer(&_V10_Dpair_D1185, VPOINTER_PAIR);
  _V10_Dpair_D1189.rest = VEncodePointer(&_V10_Dpair_D1188, VPOINTER_PAIR);
  _V10_Dpair_D1188.first = VEncodePointer(&_V10_Dpair_D1187, VPOINTER_PAIR);
  _V10_Dpair_D1188.rest = VNULL;
  _V10_Dpair_D1187.first = _V0_Mk;
  _V10_Dpair_D1187.rest = VEncodePointer(&_V10_Dpair_D1186, VPOINTER_PAIR);
  _V10_Dpair_D1186.first = _V0cases;
  _V10_Dpair_D1186.rest = VNULL;
  _V10_Dpair_D1185.first = _V0vanity;
  _V10_Dpair_D1185.rest = VEncodePointer(&_V10_Dpair_D1184, VPOINTER_PAIR);
  _V10_Dpair_D1184.first = _V0compiler;
  _V10_Dpair_D1184.rest = VEncodePointer(&_V10_Dpair_D1183, VPOINTER_PAIR);
  _V10_Dpair_D1183.first = _V0variables;
  _V10_Dpair_D1183.rest = VEncodePointer(&_V10_Dpair_D1182, VPOINTER_PAIR);
  _V10_Dpair_D1182.first = _V0free__variables;
  _V10_Dpair_D1182.rest = VEncodePointer(&_V10_Dpair_D1181, VPOINTER_PAIR);
  _V10_Dpair_D1181.first = _V10_Dloop_D129;
  _V10_Dpair_D1181.rest = VEncodePointer(&_V10_Dpair_D1180, VPOINTER_PAIR);
  _V10_Dpair_D1180.first = _V10_Dloop2_D133;
  _V10_Dpair_D1180.rest = VNULL;
  _V10_Dpair_D1179.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1179.rest = VEncodePointer(&_V10_Dpair_D1178, VPOINTER_PAIR);
  _V10_Dpair_D1178.first = VEncodePointer(&_V10_Dpair_D1177, VPOINTER_PAIR);
  _V10_Dpair_D1178.rest = VNULL;
  _V10_Dpair_D1177.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1177.rest = VEncodePointer(&_V10_Dpair_D1174, VPOINTER_PAIR);
  _V10_Dpair_D1176.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1176.rest = VEncodePointer(&_V10_Dpair_D1175, VPOINTER_PAIR);
  _V10_Dpair_D1175.first = VEncodePointer(&_V10_Dpair_D1174, VPOINTER_PAIR);
  _V10_Dpair_D1175.rest = VNULL;
  _V10_Dpair_D1174.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1174.rest = VEncodePointer(&_V10_Dpair_D1171, VPOINTER_PAIR);
  _V10_Dpair_D1173.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1173.rest = VEncodePointer(&_V10_Dpair_D1172, VPOINTER_PAIR);
  _V10_Dpair_D1172.first = VEncodePointer(&_V10_Dpair_D1171, VPOINTER_PAIR);
  _V10_Dpair_D1172.rest = VNULL;
  _V10_Dpair_D1171.first = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1171.rest = VEncodePointer(&_V10_Dpair_D1162, VPOINTER_PAIR);
  _V10_Dpair_D1170.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1170.rest = VEncodePointer(&_V10_Dpair_D1169, VPOINTER_PAIR);
  _V10_Dpair_D1169.first = VEncodePointer(&_V10_Dpair_D1168, VPOINTER_PAIR);
  _V10_Dpair_D1169.rest = VNULL;
  _V10_Dpair_D1168.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1168.rest = VEncodePointer(&_V10_Dpair_D1165, VPOINTER_PAIR);
  _V10_Dpair_D1167.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1167.rest = VEncodePointer(&_V10_Dpair_D1166, VPOINTER_PAIR);
  _V10_Dpair_D1166.first = VEncodePointer(&_V10_Dpair_D1165, VPOINTER_PAIR);
  _V10_Dpair_D1166.rest = VNULL;
  _V10_Dpair_D1165.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1165.rest = VEncodePointer(&_V10_Dpair_D1162, VPOINTER_PAIR);
  _V10_Dpair_D1164.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1164.rest = VEncodePointer(&_V10_Dpair_D1163, VPOINTER_PAIR);
  _V10_Dpair_D1163.first = VEncodePointer(&_V10_Dpair_D1162, VPOINTER_PAIR);
  _V10_Dpair_D1163.rest = VNULL;
  _V10_Dpair_D1162.first = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1162.rest = VEncodePointer(&_V10_Dpair_D1150, VPOINTER_PAIR);
  _V10_Dpair_D1161.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1161.rest = VEncodePointer(&_V10_Dpair_D1160, VPOINTER_PAIR);
  _V10_Dpair_D1160.first = VEncodePointer(&_V10_Dpair_D1159, VPOINTER_PAIR);
  _V10_Dpair_D1160.rest = VNULL;
  _V10_Dpair_D1159.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1159.rest = VEncodePointer(&_V10_Dpair_D1156, VPOINTER_PAIR);
  _V10_Dpair_D1158.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1158.rest = VEncodePointer(&_V10_Dpair_D1157, VPOINTER_PAIR);
  _V10_Dpair_D1157.first = VEncodePointer(&_V10_Dpair_D1156, VPOINTER_PAIR);
  _V10_Dpair_D1157.rest = VNULL;
  _V10_Dpair_D1156.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1156.rest = VEncodePointer(&_V10_Dpair_D1153, VPOINTER_PAIR);
  _V10_Dpair_D1155.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1155.rest = VEncodePointer(&_V10_Dpair_D1154, VPOINTER_PAIR);
  _V10_Dpair_D1154.first = VEncodePointer(&_V10_Dpair_D1153, VPOINTER_PAIR);
  _V10_Dpair_D1154.rest = VNULL;
  _V10_Dpair_D1153.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1153.rest = VEncodePointer(&_V10_Dpair_D1150, VPOINTER_PAIR);
  _V10_Dpair_D1152.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1152.rest = VEncodePointer(&_V10_Dpair_D1151, VPOINTER_PAIR);
  _V10_Dpair_D1151.first = VEncodePointer(&_V10_Dpair_D1150, VPOINTER_PAIR);
  _V10_Dpair_D1151.rest = VNULL;
  _V10_Dpair_D1150.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1150.rest = VEncodePointer(&_V10_Dpair_D1131, VPOINTER_PAIR);
  _V10_Dpair_D1149.first = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1149.rest = VEncodePointer(&_V10_Dpair_D1132, VPOINTER_PAIR);
  _V10_Dpair_D1148.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1148.rest = VEncodePointer(&_V10_Dpair_D1147, VPOINTER_PAIR);
  _V10_Dpair_D1147.first = VEncodePointer(&_V10_Dpair_D1146, VPOINTER_PAIR);
  _V10_Dpair_D1147.rest = VNULL;
  _V10_Dpair_D1146.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1146.rest = VEncodePointer(&_V10_Dpair_D1143, VPOINTER_PAIR);
  _V10_Dpair_D1145.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1145.rest = VEncodePointer(&_V10_Dpair_D1144, VPOINTER_PAIR);
  _V10_Dpair_D1144.first = VEncodePointer(&_V10_Dpair_D1143, VPOINTER_PAIR);
  _V10_Dpair_D1144.rest = VNULL;
  _V10_Dpair_D1143.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1143.rest = VEncodePointer(&_V10_Dpair_D1140, VPOINTER_PAIR);
  _V10_Dpair_D1142.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1142.rest = VEncodePointer(&_V10_Dpair_D1141, VPOINTER_PAIR);
  _V10_Dpair_D1141.first = VEncodePointer(&_V10_Dpair_D1140, VPOINTER_PAIR);
  _V10_Dpair_D1141.rest = VNULL;
  _V10_Dpair_D1140.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1140.rest = VEncodePointer(&_V10_Dpair_D1137, VPOINTER_PAIR);
  _V10_Dpair_D1139.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1139.rest = VEncodePointer(&_V10_Dpair_D1138, VPOINTER_PAIR);
  _V10_Dpair_D1138.first = VEncodePointer(&_V10_Dpair_D1137, VPOINTER_PAIR);
  _V10_Dpair_D1138.rest = VNULL;
  _V10_Dpair_D1137.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1137.rest = VEncodePointer(&_V10_Dpair_D1134, VPOINTER_PAIR);
  _V10_Dpair_D1136.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1136.rest = VEncodePointer(&_V10_Dpair_D1135, VPOINTER_PAIR);
  _V10_Dpair_D1135.first = VEncodePointer(&_V10_Dpair_D1134, VPOINTER_PAIR);
  _V10_Dpair_D1135.rest = VNULL;
  _V10_Dpair_D1134.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1134.rest = VEncodePointer(&_V10_Dpair_D1131, VPOINTER_PAIR);
  _V10_Dpair_D1133.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1133.rest = VEncodePointer(&_V10_Dpair_D1132, VPOINTER_PAIR);
  _V10_Dpair_D1132.first = VEncodePointer(&_V10_Dpair_D1131, VPOINTER_PAIR);
  _V10_Dpair_D1132.rest = VNULL;
  _V10_Dpair_D1131.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1131.rest = VEncodePointer(&_V10_Dpair_D1128, VPOINTER_PAIR);
  _V10_Dpair_D1130.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1130.rest = VEncodePointer(&_V10_Dpair_D1129, VPOINTER_PAIR);
  _V10_Dpair_D1129.first = VEncodePointer(&_V10_Dpair_D1128, VPOINTER_PAIR);
  _V10_Dpair_D1129.rest = VNULL;
  _V10_Dpair_D1128.first = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1128.rest = VEncodePointer(&_V10_Dpair_D1127, VPOINTER_PAIR);
  _V10_Dpair_D1127.first = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1127.rest = VEncodePointer(&_V10_Dpair_D1126, VPOINTER_PAIR);
  _V10_Dpair_D1126.first = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1126.rest = VEncodePointer(&_V10_Dpair_D1125, VPOINTER_PAIR);
  _V10_Dpair_D1125.first = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1125.rest = VEncodePointer(&_V10_Dpair_D1124, VPOINTER_PAIR);
  _V10_Dpair_D1124.first = VEncodePointer(&_V10_Dpair_D1123, VPOINTER_PAIR);
  _V10_Dpair_D1124.rest = VEncodePointer(&_V10_Dpair_D1119, VPOINTER_PAIR);
  _V10_Dpair_D1123.first = _V0_Mx;
  _V10_Dpair_D1123.rest = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1122.first = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1122.rest = VEncodePointer(&_V10_Dpair_D1120, VPOINTER_PAIR);
  _V10_Dpair_D1121.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D1121.rest = VEncodePointer(&_V10_Dpair_D1120, VPOINTER_PAIR);
  _V10_Dpair_D1120.first = VEncodePointer(&_V10_Dpair_D1119, VPOINTER_PAIR);
  _V10_Dpair_D1120.rest = VNULL;
  _V10_Dpair_D1119.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1119.rest = VEncodePointer(&_V10_Dpair_D1116, VPOINTER_PAIR);
  _V10_Dpair_D1118.first = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1118.rest = VEncodePointer(&_V10_Dpair_D1117, VPOINTER_PAIR);
  _V10_Dpair_D1117.first = VEncodePointer(&_V10_Dpair_D1116, VPOINTER_PAIR);
  _V10_Dpair_D1117.rest = VNULL;
  _V10_Dpair_D1116.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1116.rest = VEncodePointer(&_V10_Dpair_D1115, VPOINTER_PAIR);
  _V10_Dpair_D1115.first = VEncodePointer(&_V10_Dpair_D1108, VPOINTER_PAIR);
  _V10_Dpair_D1115.rest = VEncodePointer(&_V10_Dpair_D1112, VPOINTER_PAIR);
  _V10_Dpair_D1114.first = VEncodePointer(&_V10_Dpair_D1110, VPOINTER_PAIR);
  _V10_Dpair_D1114.rest = VEncodePointer(&_V10_Dpair_D1113, VPOINTER_PAIR);
  _V10_Dpair_D1113.first = VEncodePointer(&_V10_Dpair_D1112, VPOINTER_PAIR);
  _V10_Dpair_D1113.rest = VNULL;
  _V10_Dpair_D1112.first = VEncodePointer(&_V10_Dpair_D1111, VPOINTER_PAIR);
  _V10_Dpair_D1112.rest = VEncodePointer(&_V10_Dpair_D1076, VPOINTER_PAIR);
  _V10_Dpair_D1111.first = _V0loop;
  _V10_Dpair_D1111.rest = VNULL;
  _V10_Dpair_D1110.first = VEncodePointer(&_V10_Dpair_D1104, VPOINTER_PAIR);
  _V10_Dpair_D1110.rest = VEncodePointer(&_V10_Dpair_D1109, VPOINTER_PAIR);
  _V10_Dpair_D1109.first = VEncodePointer(&_V10_Dpair_D1108, VPOINTER_PAIR);
  _V10_Dpair_D1109.rest = VNULL;
  _V10_Dpair_D1108.first = _V0_Mk;
  _V10_Dpair_D1108.rest = VEncodePointer(&_V10_Dpair_D1107, VPOINTER_PAIR);
  _V10_Dpair_D1107.first = _V0bound;
  _V10_Dpair_D1107.rest = VEncodePointer(&_V10_Dpair_D1106, VPOINTER_PAIR);
  _V10_Dpair_D1106.first = _V0expr;
  _V10_Dpair_D1106.rest = VEncodePointer(&_V10_Dpair_D1105, VPOINTER_PAIR);
  _V10_Dpair_D1105.first = _V0context;
  _V10_Dpair_D1105.rest = VNULL;
  _V10_Dpair_D1104.first = _V0vanity;
  _V10_Dpair_D1104.rest = VEncodePointer(&_V10_Dpair_D1103, VPOINTER_PAIR);
  _V10_Dpair_D1103.first = _V0compiler;
  _V10_Dpair_D1103.rest = VEncodePointer(&_V10_Dpair_D1102, VPOINTER_PAIR);
  _V10_Dpair_D1102.first = _V0variables;
  _V10_Dpair_D1102.rest = VEncodePointer(&_V10_Dpair_D1101, VPOINTER_PAIR);
  _V10_Dpair_D1101.first = _V0free__variables;
  _V10_Dpair_D1101.rest = VEncodePointer(&_V10_Dpair_D1100, VPOINTER_PAIR);
  _V10_Dpair_D1100.first = _V10_Dloop_D129;
  _V10_Dpair_D1100.rest = VNULL;
  _V10_Dpair_D1099.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1099.rest = VEncodePointer(&_V10_Dpair_D1098, VPOINTER_PAIR);
  _V10_Dpair_D1098.first = VEncodePointer(&_V10_Dpair_D1097, VPOINTER_PAIR);
  _V10_Dpair_D1098.rest = VNULL;
  _V10_Dpair_D1097.first = VEncodePointer(&_V10_Dpair_D1096, VPOINTER_PAIR);
  _V10_Dpair_D1097.rest = VEncodePointer(&_V10_Dpair_D1081, VPOINTER_PAIR);
  _V10_Dpair_D1096.first = _V0_Mx;
  _V10_Dpair_D1096.rest = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1095.first = VEncodePointer(&_V10_Dpair_D1094, VPOINTER_PAIR);
  _V10_Dpair_D1095.rest = VEncodePointer(&_V10_Dpair_D1077, VPOINTER_PAIR);
  _V10_Dpair_D1094.first = VEncodePointer(&_V10_Dpair_D1093, VPOINTER_PAIR);
  _V10_Dpair_D1094.rest = VEncodePointer(&_V10_Dpair_D1071, VPOINTER_PAIR);
  _V10_Dpair_D1093.first = _V0vanity;
  _V10_Dpair_D1093.rest = VEncodePointer(&_V10_Dpair_D1092, VPOINTER_PAIR);
  _V10_Dpair_D1092.first = _V0compiler;
  _V10_Dpair_D1092.rest = VEncodePointer(&_V10_Dpair_D1091, VPOINTER_PAIR);
  _V10_Dpair_D1091.first = _V0variables;
  _V10_Dpair_D1091.rest = VEncodePointer(&_V10_Dpair_D1090, VPOINTER_PAIR);
  _V10_Dpair_D1090.first = _V0free__variables;
  _V10_Dpair_D1090.rest = VEncodePointer(&_V10_Dpair_D1089, VPOINTER_PAIR);
  _V10_Dpair_D1089.first = _V10_Dappend__improper_D124;
  _V10_Dpair_D1089.rest = VNULL;
  _V10_Dpair_D1088.first = VEncodePointer(&_V10_Dpair_D1085, VPOINTER_PAIR);
  _V10_Dpair_D1088.rest = VEncodePointer(&_V10_Dpair_D1087, VPOINTER_PAIR);
  _V10_Dpair_D1087.first = VEncodePointer(&_V10_Dpair_D1086, VPOINTER_PAIR);
  _V10_Dpair_D1087.rest = VNULL;
  _V10_Dpair_D1086.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1086.rest = VEncodePointer(&_V10_Dpair_D1081, VPOINTER_PAIR);
  _V10_Dpair_D1085.first = VEncodeBool(false);
  _V10_Dpair_D1085.rest = VEncodePointer(&_V10_Dpair_D1084, VPOINTER_PAIR);
  _V10_Dpair_D1084.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1084.rest = VNULL;
  _V10_Dpair_D1083.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1083.rest = VEncodePointer(&_V10_Dpair_D1082, VPOINTER_PAIR);
  _V10_Dpair_D1082.first = VEncodePointer(&_V10_Dpair_D1081, VPOINTER_PAIR);
  _V10_Dpair_D1082.rest = VNULL;
  _V10_Dpair_D1081.first = VEncodePointer(&_V10_Dpair_D1079, VPOINTER_PAIR);
  _V10_Dpair_D1081.rest = VEncodePointer(&_V10_Dpair_D1080, VPOINTER_PAIR);
  _V10_Dpair_D1080.first = VEncodePointer(&_V10_Dpair_D1070, VPOINTER_PAIR);
  _V10_Dpair_D1080.rest = VEncodePointer(&_V10_Dpair_D1076, VPOINTER_PAIR);
  _V10_Dpair_D1079.first = _V0_Mp;
  _V10_Dpair_D1079.rest = VNULL;
  _V10_Dpair_D1078.first = VEncodePointer(&_V10_Dpair_D1072, VPOINTER_PAIR);
  _V10_Dpair_D1078.rest = VEncodePointer(&_V10_Dpair_D1077, VPOINTER_PAIR);
  _V10_Dpair_D1077.first = VEncodePointer(&_V10_Dpair_D1076, VPOINTER_PAIR);
  _V10_Dpair_D1077.rest = VNULL;
  _V10_Dpair_D1076.first = VEncodePointer(&_V10_Dpair_D1074, VPOINTER_PAIR);
  _V10_Dpair_D1076.rest = VEncodePointer(&_V10_Dpair_D1075, VPOINTER_PAIR);
  _V10_Dpair_D1075.first = VEncodePointer(&_V10_Dpair_D1047, VPOINTER_PAIR);
  _V10_Dpair_D1075.rest = VEncodePointer(&_V10_Dpair_D1060, VPOINTER_PAIR);
  _V10_Dpair_D1074.first = _V0merge;
  _V10_Dpair_D1074.rest = VEncodePointer(&_V10_Dpair_D1073, VPOINTER_PAIR);
  _V10_Dpair_D1073.first = _V0append__improper;
  _V10_Dpair_D1073.rest = VNULL;
  _V10_Dpair_D1072.first = VEncodePointer(&_V10_Dpair_D1067, VPOINTER_PAIR);
  _V10_Dpair_D1072.rest = VEncodePointer(&_V10_Dpair_D1071, VPOINTER_PAIR);
  _V10_Dpair_D1071.first = VEncodePointer(&_V10_Dpair_D1070, VPOINTER_PAIR);
  _V10_Dpair_D1071.rest = VNULL;
  _V10_Dpair_D1070.first = _V0_Mk;
  _V10_Dpair_D1070.rest = VEncodePointer(&_V10_Dpair_D1069, VPOINTER_PAIR);
  _V10_Dpair_D1069.first = _V0a;
  _V10_Dpair_D1069.rest = VEncodePointer(&_V10_Dpair_D1068, VPOINTER_PAIR);
  _V10_Dpair_D1068.first = _V0b;
  _V10_Dpair_D1068.rest = VNULL;
  _V10_Dpair_D1067.first = _V0vanity;
  _V10_Dpair_D1067.rest = VEncodePointer(&_V10_Dpair_D1066, VPOINTER_PAIR);
  _V10_Dpair_D1066.first = _V0compiler;
  _V10_Dpair_D1066.rest = VEncodePointer(&_V10_Dpair_D1065, VPOINTER_PAIR);
  _V10_Dpair_D1065.first = _V0variables;
  _V10_Dpair_D1065.rest = VEncodePointer(&_V10_Dpair_D1064, VPOINTER_PAIR);
  _V10_Dpair_D1064.first = _V0free__variables;
  _V10_Dpair_D1064.rest = VEncodePointer(&_V10_Dpair_D1063, VPOINTER_PAIR);
  _V10_Dpair_D1063.first = _V10_Dmerge_D123;
  _V10_Dpair_D1063.rest = VNULL;
  _V10_Dpair_D1062.first = VEncodePointer(&_V10_Dpair_D1049, VPOINTER_PAIR);
  _V10_Dpair_D1062.rest = VEncodePointer(&_V10_Dpair_D1061, VPOINTER_PAIR);
  _V10_Dpair_D1061.first = VEncodePointer(&_V10_Dpair_D1060, VPOINTER_PAIR);
  _V10_Dpair_D1061.rest = VNULL;
  _V10_Dpair_D1060.first = VEncodePointer(&_V10_Dpair_D1058, VPOINTER_PAIR);
  _V10_Dpair_D1060.rest = VEncodePointer(&_V10_Dpair_D1059, VPOINTER_PAIR);
  _V10_Dpair_D1059.first = VEncodePointer(&_V10_Dpair_D1038, VPOINTER_PAIR);
  _V10_Dpair_D1059.rest = VEncodePointer(&_V10_Dpair_D985, VPOINTER_PAIR);
  _V10_Dpair_D1058.first = _V0free__variables;
  _V10_Dpair_D1058.rest = VEncodePointer(&_V10_Dpair_D1057, VPOINTER_PAIR);
  _V10_Dpair_D1057.first = _V0variable__pure_Q;
  _V10_Dpair_D1057.rest = VEncodePointer(&_V10_Dpair_D1056, VPOINTER_PAIR);
  _V10_Dpair_D1056.first = _V0variable__pure__body_Q;
  _V10_Dpair_D1056.rest = VEncodePointer(&_V10_Dpair_D1055, VPOINTER_PAIR);
  _V10_Dpair_D1055.first = _V0memtail;
  _V10_Dpair_D1055.rest = VEncodePointer(&_V10_Dpair_D1054, VPOINTER_PAIR);
  _V10_Dpair_D1054.first = _V0mangle__library;
  _V10_Dpair_D1054.rest = VEncodePointer(&_V10_Dpair_D1053, VPOINTER_PAIR);
  _V10_Dpair_D1053.first = _V0import__path;
  _V10_Dpair_D1053.rest = VEncodePointer(&_V10_Dpair_D1052, VPOINTER_PAIR);
  _V10_Dpair_D1052.first = _V0mangle__symbol;
  _V10_Dpair_D1052.rest = VEncodePointer(&_V10_Dpair_D1051, VPOINTER_PAIR);
  _V10_Dpair_D1051.first = _V0mangle__qualified__function;
  _V10_Dpair_D1051.rest = VEncodePointer(&_V10_Dpair_D1050, VPOINTER_PAIR);
  _V10_Dpair_D1050.first = _V0mangle__environment;
  _V10_Dpair_D1050.rest = VNULL;
  _V10_Dpair_D1049.first = VEncodePointer(&_V10_Dpair_D1045, VPOINTER_PAIR);
  _V10_Dpair_D1049.rest = VEncodePointer(&_V10_Dpair_D1048, VPOINTER_PAIR);
  _V10_Dpair_D1048.first = VEncodePointer(&_V10_Dpair_D1047, VPOINTER_PAIR);
  _V10_Dpair_D1048.rest = VNULL;
  _V10_Dpair_D1047.first = _V0_Mk;
  _V10_Dpair_D1047.rest = VEncodePointer(&_V10_Dpair_D1046, VPOINTER_PAIR);
  _V10_Dpair_D1046.first = _V0expr;
  _V10_Dpair_D1046.rest = VNULL;
  _V10_Dpair_D1045.first = _V0vanity;
  _V10_Dpair_D1045.rest = VEncodePointer(&_V10_Dpair_D1044, VPOINTER_PAIR);
  _V10_Dpair_D1044.first = _V0compiler;
  _V10_Dpair_D1044.rest = VEncodePointer(&_V10_Dpair_D1043, VPOINTER_PAIR);
  _V10_Dpair_D1043.first = _V0variables;
  _V10_Dpair_D1043.rest = VEncodePointer(&_V10_Dpair_D1042, VPOINTER_PAIR);
  _V10_Dpair_D1042.first = _V0free__variables;
  _V10_Dpair_D1042.rest = VNULL;
  _V10_Dpair_D1041.first = VEncodePointer(&_V10_Dpair_D1040, VPOINTER_PAIR);
  _V10_Dpair_D1041.rest = VEncodePointer(&_V10_Dpair_D989, VPOINTER_PAIR);
  _V10_Dpair_D1040.first = VEncodeBool(false);
  _V10_Dpair_D1040.rest = VEncodePointer(&_V10_Dpair_D1039, VPOINTER_PAIR);
  _V10_Dpair_D1039.first = VEncodePointer(&_V10_Dpair_D1038, VPOINTER_PAIR);
  _V10_Dpair_D1039.rest = VNULL;
  _V10_Dpair_D1038.first = _V0_Mk;
  _V10_Dpair_D1038.rest = VEncodePointer(&_V10_Dpair_D1037, VPOINTER_PAIR);
  _V10_Dpair_D1037.first = _V0list;
  _V10_Dpair_D1037.rest = VEncodePointer(&_V10_Dpair_D1036, VPOINTER_PAIR);
  _V10_Dpair_D1036.first = _V0lookup__intrinsic__name;
  _V10_Dpair_D1036.rest = VEncodePointer(&_V10_Dpair_D1035, VPOINTER_PAIR);
  _V10_Dpair_D1035.first = _V0atom_Q;
  _V10_Dpair_D1035.rest = VEncodePointer(&_V10_Dpair_D1034, VPOINTER_PAIR);
  _V10_Dpair_D1034.first = _V0memv;
  _V10_Dpair_D1034.rest = VEncodePointer(&_V10_Dpair_D1033, VPOINTER_PAIR);
  _V10_Dpair_D1033.first = _V0cadddr;
  _V10_Dpair_D1033.rest = VEncodePointer(&_V10_Dpair_D1032, VPOINTER_PAIR);
  _V10_Dpair_D1032.first = _V0cddddr;
  _V10_Dpair_D1032.rest = VEncodePointer(&_V10_Dpair_D1031, VPOINTER_PAIR);
  _V10_Dpair_D1031.first = _V0caar;
  _V10_Dpair_D1031.rest = VEncodePointer(&_V10_Dpair_D1030, VPOINTER_PAIR);
  _V10_Dpair_D1030.first = _V0cdar;
  _V10_Dpair_D1030.rest = VEncodePointer(&_V10_Dpair_D1029, VPOINTER_PAIR);
  _V10_Dpair_D1029.first = _V0cddr;
  _V10_Dpair_D1029.rest = VEncodePointer(&_V10_Dpair_D1028, VPOINTER_PAIR);
  _V10_Dpair_D1028.first = _V0caddr;
  _V10_Dpair_D1028.rest = VEncodePointer(&_V10_Dpair_D1027, VPOINTER_PAIR);
  _V10_Dpair_D1027.first = _V0cadr;
  _V10_Dpair_D1027.rest = VEncodePointer(&_V10_Dpair_D1026, VPOINTER_PAIR);
  _V10_Dpair_D1026.first = _V0cdddr;
  _V10_Dpair_D1026.rest = VEncodePointer(&_V10_Dpair_D1025, VPOINTER_PAIR);
  _V10_Dpair_D1025.first = _V0map;
  _V10_Dpair_D1025.rest = VEncodePointer(&_V10_Dpair_D1024, VPOINTER_PAIR);
  _V10_Dpair_D1024.first = _V0fold;
  _V10_Dpair_D1024.rest = VEncodePointer(&_V10_Dpair_D1023, VPOINTER_PAIR);
  _V10_Dpair_D1023.first = _V0assv;
  _V10_Dpair_D1023.rest = VEncodePointer(&_V10_Dpair_D1022, VPOINTER_PAIR);
  _V10_Dpair_D1022.first = _V0reverse;
  _V10_Dpair_D1022.rest = VEncodePointer(&_V10_Dpair_D1021, VPOINTER_PAIR);
  _V10_Dpair_D1021.first = _V0equal_Q;
  _V10_Dpair_D1021.rest = VEncodePointer(&_V10_Dpair_D1020, VPOINTER_PAIR);
  _V10_Dpair_D1020.first = _V0compiler__error;
  _V10_Dpair_D1020.rest = VEncodePointer(&_V10_Dpair_D1019, VPOINTER_PAIR);
  _V10_Dpair_D1019.first = _V0string__append;
  _V10_Dpair_D1019.rest = VEncodePointer(&_V10_Dpair_D1018, VPOINTER_PAIR);
  _V10_Dpair_D1018.first = _V0close__port;
  _V10_Dpair_D1018.rest = VEncodePointer(&_V10_Dpair_D1017, VPOINTER_PAIR);
  _V10_Dpair_D1017.first = _V0get__output__string;
  _V10_Dpair_D1017.rest = VEncodePointer(&_V10_Dpair_D1016, VPOINTER_PAIR);
  _V10_Dpair_D1016.first = _V0display;
  _V10_Dpair_D1016.rest = VEncodePointer(&_V10_Dpair_D1015, VPOINTER_PAIR);
  _V10_Dpair_D1015.first = _V0open__output__string;
  _V10_Dpair_D1015.rest = VEncodePointer(&_V10_Dpair_D1014, VPOINTER_PAIR);
  _V10_Dpair_D1014.first = _V0fold__right;
  _V10_Dpair_D1014.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
  _V10_Dpair_D1008.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1008.rest = VEncodePointer(&_V10_Dpair_D1007, VPOINTER_PAIR);
  _V10_Dpair_D1007.first = VEncodePointer(&_V10_Dpair_D1006, VPOINTER_PAIR);
  _V10_Dpair_D1007.rest = VNULL;
  _V10_Dpair_D1006.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1006.rest = VEncodePointer(&_V10_Dpair_D1003, VPOINTER_PAIR);
  _V10_Dpair_D1005.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1005.rest = VEncodePointer(&_V10_Dpair_D1004, VPOINTER_PAIR);
  _V10_Dpair_D1004.first = VEncodePointer(&_V10_Dpair_D1003, VPOINTER_PAIR);
  _V10_Dpair_D1004.rest = VNULL;
  _V10_Dpair_D1003.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1003.rest = VEncodePointer(&_V10_Dpair_D1000, VPOINTER_PAIR);
  _V10_Dpair_D1002.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D1002.rest = VEncodePointer(&_V10_Dpair_D1001, VPOINTER_PAIR);
  _V10_Dpair_D1001.first = VEncodePointer(&_V10_Dpair_D1000, VPOINTER_PAIR);
  _V10_Dpair_D1001.rest = VNULL;
  _V10_Dpair_D1000.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D1000.rest = VEncodePointer(&_V10_Dpair_D997, VPOINTER_PAIR);
  _V10_Dpair_D999.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D999.rest = VEncodePointer(&_V10_Dpair_D998, VPOINTER_PAIR);
  _V10_Dpair_D998.first = VEncodePointer(&_V10_Dpair_D997, VPOINTER_PAIR);
  _V10_Dpair_D998.rest = VNULL;
  _V10_Dpair_D997.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D997.rest = VEncodePointer(&_V10_Dpair_D994, VPOINTER_PAIR);
  _V10_Dpair_D996.first = VEncodePointer(&_V10_Dpair_D993, VPOINTER_PAIR);
  _V10_Dpair_D996.rest = VEncodePointer(&_V10_Dpair_D995, VPOINTER_PAIR);
  _V10_Dpair_D995.first = VEncodePointer(&_V10_Dpair_D994, VPOINTER_PAIR);
  _V10_Dpair_D995.rest = VNULL;
  _V10_Dpair_D994.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D994.rest = VEncodePointer(&_V10_Dpair_D985, VPOINTER_PAIR);
  _V10_Dpair_D993.first = VEncodeBool(false);
  _V10_Dpair_D993.rest = VEncodePointer(&_V10_Dpair_D992, VPOINTER_PAIR);
  _V10_Dpair_D992.first = VEncodePointer(&_V10_Dpair_D991, VPOINTER_PAIR);
  _V10_Dpair_D992.rest = VNULL;
  _V10_Dpair_D991.first = _V0_Mx;
  _V10_Dpair_D991.rest = VNULL;
  _V10_Dpair_D990.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D990.rest = VEncodePointer(&_V10_Dpair_D989, VPOINTER_PAIR);
  _V10_Dpair_D989.first = VEncodePointer(&_V10_Dpair_D985, VPOINTER_PAIR);
  _V10_Dpair_D989.rest = VNULL;
  _V10_Dpair_D988.first = VEncodePointer(&_V10_Dpair_D986, VPOINTER_PAIR);
  _V10_Dpair_D988.rest = VEncodePointer(&_V10_Dpair_D987, VPOINTER_PAIR);
  _V10_Dpair_D987.first = VNULL;
  _V10_Dpair_D987.rest = VNULL;
  _V10_Dpair_D986.first = VEncodeBool(false);
  _V10_Dpair_D986.rest = VEncodePointer(&_V10_Dpair_D985, VPOINTER_PAIR);
  _V10_Dpair_D985.first = VEncodePointer(&_V10_Dpair_D984, VPOINTER_PAIR);
  _V10_Dpair_D985.rest = VNULL;
  _V10_Dpair_D984.first = _V0_Mk;
  _V10_Dpair_D984.rest = VNULL;
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k5, VEncodePointer(&_V10_Dpair_D1008, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k4, VEncodePointer(&_V10_Dpair_D1005, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k3, VEncodePointer(&_V10_Dpair_D1002, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k2, VEncodePointer(&_V10_Dpair_D999, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0variables_V20_V0k1, VEncodePointer(&_V10_Dpair_D996, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0variables_V20_V0lambda2, VEncodePointer(&_V10_Dpair_D990, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D123_V0k7, VEncodePointer(&_V10_Dpair_D1088, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D123_V0k6, VEncodePointer(&_V10_Dpair_D1083, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dmerge_D123, VEncodePointer(&_V10_Dpair_D1078, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D124_V0k8, VEncodePointer(&_V10_Dpair_D1099, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dappend__improper_D124, VEncodePointer(&_V10_Dpair_D1095, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k10, VEncodePointer(&_V10_Dpair_D1121, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k11, VEncodePointer(&_V10_Dpair_D1122, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k9, VEncodePointer(&_V10_Dpair_D1118, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k19, VEncodePointer(&_V10_Dpair_D1148, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k18, VEncodePointer(&_V10_Dpair_D1145, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k17, VEncodePointer(&_V10_Dpair_D1142, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k16, VEncodePointer(&_V10_Dpair_D1139, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k15, VEncodePointer(&_V10_Dpair_D1136, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k14, VEncodePointer(&_V10_Dpair_D1133, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k13, VEncodePointer(&_V10_Dpair_D1130, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k24, VEncodePointer(&_V10_Dpair_D1161, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k23, VEncodePointer(&_V10_Dpair_D1158, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k22, VEncodePointer(&_V10_Dpair_D1155, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k21, VEncodePointer(&_V10_Dpair_D1152, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k27, VEncodePointer(&_V10_Dpair_D1170, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k26, VEncodePointer(&_V10_Dpair_D1167, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k25, VEncodePointer(&_V10_Dpair_D1164, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k30, VEncodePointer(&_V10_Dpair_D1179, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k29, VEncodePointer(&_V10_Dpair_D1176, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k28, VEncodePointer(&_V10_Dpair_D1173, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k35, VEncodePointer(&_V10_Dpair_D1212, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k34, VEncodePointer(&_V10_Dpair_D1208, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k33, VEncodePointer(&_V10_Dpair_D1204, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k32, VEncodePointer(&_V10_Dpair_D1201, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133_V0k31, VEncodePointer(&_V10_Dpair_D1198, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D133, VEncodePointer(&_V10_Dpair_D1194, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k40, VEncodePointer(&_V10_Dpair_D1241, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k39, VEncodePointer(&_V10_Dpair_D1237, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k38, VEncodePointer(&_V10_Dpair_D1233, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k37, VEncodePointer(&_V10_Dpair_D1230, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135_V0k36, VEncodePointer(&_V10_Dpair_D1227, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V10_Dloop2_D135, VEncodePointer(&_V10_Dpair_D1223, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k41, VEncodePointer(&_V10_Dpair_D1242, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k47, VEncodePointer(&_V10_Dpair_D1260, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k46, VEncodePointer(&_V10_Dpair_D1257, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k45, VEncodePointer(&_V10_Dpair_D1254, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k44, VEncodePointer(&_V10_Dpair_D1251, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k43, VEncodePointer(&_V10_Dpair_D1248, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k42, VEncodePointer(&_V10_Dpair_D1245, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k53, VEncodePointer(&_V10_Dpair_D1278, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k52, VEncodePointer(&_V10_Dpair_D1275, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k51, VEncodePointer(&_V10_Dpair_D1272, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k50, VEncodePointer(&_V10_Dpair_D1269, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k49, VEncodePointer(&_V10_Dpair_D1266, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k48, VEncodePointer(&_V10_Dpair_D1263, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k54, VEncodePointer(&_V10_Dpair_D1281, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0lambda4, VEncodePointer(&_V10_Dpair_D1286, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k20, VEncodePointer(&_V10_Dpair_D1149, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129_V0k12, VEncodePointer(&_V10_Dpair_D1118, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables_V10_Dloop_D129, VEncodePointer(&_V10_Dpair_D1114, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0free__variables, VEncodePointer(&_V10_Dpair_D1062, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k57, VEncodePointer(&_V10_Dpair_D1316, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda6, VEncodePointer(&_V10_Dpair_D1317, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k56, VEncodePointer(&_V10_Dpair_D1313, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k55, VEncodePointer(&_V10_Dpair_D1309, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k61, VEncodePointer(&_V10_Dpair_D1333, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda7, VEncodePointer(&_V10_Dpair_D1334, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k60, VEncodePointer(&_V10_Dpair_D1330, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k59, VEncodePointer(&_V10_Dpair_D1326, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k65, VEncodePointer(&_V10_Dpair_D1344, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda8, VEncodePointer(&_V10_Dpair_D1345, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k64, VEncodePointer(&_V10_Dpair_D1341, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k63, VEncodePointer(&_V10_Dpair_D1337, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k69, VEncodePointer(&_V10_Dpair_D1355, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda9, VEncodePointer(&_V10_Dpair_D1356, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k68, VEncodePointer(&_V10_Dpair_D1352, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k67, VEncodePointer(&_V10_Dpair_D1348, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k73, VEncodePointer(&_V10_Dpair_D1373, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda10, VEncodePointer(&_V10_Dpair_D1374, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k72, VEncodePointer(&_V10_Dpair_D1363, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k71, VEncodePointer(&_V10_Dpair_D1359, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k77, VEncodePointer(&_V10_Dpair_D1386, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k78, VEncodePointer(&_V10_Dpair_D1399, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda12, VEncodePointer(&_V10_Dpair_D1395, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda11, VEncodePointer(&_V10_Dpair_D1387, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k76, VEncodePointer(&_V10_Dpair_D1381, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k75, VEncodePointer(&_V10_Dpair_D1377, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k82, VEncodePointer(&_V10_Dpair_D1421, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda13, VEncodePointer(&_V10_Dpair_D1422, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k81, VEncodePointer(&_V10_Dpair_D1406, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k80, VEncodePointer(&_V10_Dpair_D1402, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k86, VEncodePointer(&_V10_Dpair_D1439, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k87, VEncodePointer(&_V10_Dpair_D1447, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda15, VEncodePointer(&_V10_Dpair_D1443, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda14, VEncodePointer(&_V10_Dpair_D1440, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k85, VEncodePointer(&_V10_Dpair_D1429, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k84, VEncodePointer(&_V10_Dpair_D1425, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k91, VEncodePointer(&_V10_Dpair_D1464, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda16, VEncodePointer(&_V10_Dpair_D1465, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k90, VEncodePointer(&_V10_Dpair_D1454, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k89, VEncodePointer(&_V10_Dpair_D1450, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k95, VEncodePointer(&_V10_Dpair_D1481, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda17, VEncodePointer(&_V10_Dpair_D1482, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k94, VEncodePointer(&_V10_Dpair_D1472, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k93, VEncodePointer(&_V10_Dpair_D1468, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k99, VEncodePointer(&_V10_Dpair_D1501, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k100, VEncodePointer(&_V10_Dpair_D1506, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda18, VEncodePointer(&_V10_Dpair_D1502, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k98, VEncodePointer(&_V10_Dpair_D1489, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k97, VEncodePointer(&_V10_Dpair_D1485, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k104, VEncodePointer(&_V10_Dpair_D1525, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k105, VEncodePointer(&_V10_Dpair_D1530, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda19, VEncodePointer(&_V10_Dpair_D1526, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k103, VEncodePointer(&_V10_Dpair_D1513, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k102, VEncodePointer(&_V10_Dpair_D1509, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k111, VEncodePointer(&_V10_Dpair_D1576, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k110, VEncodePointer(&_V10_Dpair_D1573, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k109, VEncodePointer(&_V10_Dpair_D1570, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k113, VEncodePointer(&_V10_Dpair_D1586, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k116, VEncodePointer(&_V10_Dpair_D1590, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k115, VEncodePointer(&_V10_Dpair_D1587, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k114, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0lambda23, VEncodePointer(&_V10_Dpair_D1581, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0lambda22, VEncodePointer(&_V10_Dpair_D1570, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200_V0k112, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D200, VEncodePointer(&_V10_Dpair_D1566, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda21, VEncodePointer(&_V10_Dpair_D1551, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda20, VEncodePointer(&_V10_Dpair_D1544, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k117, VEncodePointer(&_V10_Dpair_D1604, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda25, VEncodePointer(&_V10_Dpair_D1605, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda24, VEncodePointer(&_V10_Dpair_D1597, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k108, VEncodePointer(&_V10_Dpair_D1537, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k107, VEncodePointer(&_V10_Dpair_D1533, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k123, VEncodePointer(&_V10_Dpair_D1653, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k122, VEncodePointer(&_V10_Dpair_D1650, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k121, VEncodePointer(&_V10_Dpair_D1647, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k125, VEncodePointer(&_V10_Dpair_D1663, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k128, VEncodePointer(&_V10_Dpair_D1667, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k127, VEncodePointer(&_V10_Dpair_D1664, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k126, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0lambda29, VEncodePointer(&_V10_Dpair_D1658, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0lambda28, VEncodePointer(&_V10_Dpair_D1647, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219_V0k124, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D219, VEncodePointer(&_V10_Dpair_D1643, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda27, VEncodePointer(&_V10_Dpair_D1628, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda26, VEncodePointer(&_V10_Dpair_D1621, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k129, VEncodePointer(&_V10_Dpair_D1675, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda31, VEncodePointer(&_V10_Dpair_D1676, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda30, VEncodePointer(&_V10_Dpair_D1668, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k120, VEncodePointer(&_V10_Dpair_D1612, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k119, VEncodePointer(&_V10_Dpair_D1608, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda32, VEncodePointer(&_V10_Dpair_D1608, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k131, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0k133, VEncodePointer(&_V10_Dpair_D1703, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0k132, VEncodePointer(&_V10_Dpair_D1700, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0k136, VEncodePointer(&_V10_Dpair_D1713, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0k135, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0lambda36, VEncodePointer(&_V10_Dpair_D1708, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0lambda35, VEncodePointer(&_V10_Dpair_D1700, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235_V0k134, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V10_Dloop_D235, VEncodePointer(&_V10_Dpair_D1696, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda34, VEncodePointer(&_V10_Dpair_D1682, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda33, VEncodePointer(&_V10_Dpair_D1608, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k137, VEncodePointer(&_V10_Dpair_D1723, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda39, VEncodePointer(&_V10_Dpair_D1731, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda38, VEncodePointer(&_V10_Dpair_D1724, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda37, VEncodePointer(&_V10_Dpair_D1719, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k130, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k118, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k106, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k101, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k96, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k92, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k88, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k83, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k79, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k74, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k70, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k66, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k62, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0k58, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q_V0lambda5, VEncodePointer(&_V10_Dpair_D1305, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure_Q, VEncodePointer(&_V10_Dpair_D1298, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q_V0k138, VEncodePointer(&_V10_Dpair_D1745, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0variable__pure__body_Q, VEncodePointer(&_V10_Dpair_D1742, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0memtail, VEncodePointer(&_V10_Dpair_D1755, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251_V0k141, VEncodePointer(&_V10_Dpair_D1794, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251_V0k140, VEncodePointer(&_V10_Dpair_D1791, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251_V0k143, VEncodePointer(&_V10_Dpair_D1799, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251_V0k142, VEncodePointer(&_V10_Dpair_D1796, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V10_Dloop_D251, VEncodePointer(&_V10_Dpair_D1785, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k144, VEncodePointer(&_V10_Dpair_D1800, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library_V0k139, VEncodePointer(&_V10_Dpair_D1769, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__library, VEncodePointer(&_V10_Dpair_D1764, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k147, VEncodePointer(&_V10_Dpair_D1832, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda41, VEncodePointer(&_V10_Dpair_D1833, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k146, VEncodePointer(&_V10_Dpair_D1826, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k145, VEncodePointer(&_V10_Dpair_D1822, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k151, VEncodePointer(&_V10_Dpair_D1846, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda42, VEncodePointer(&_V10_Dpair_D1847, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k150, VEncodePointer(&_V10_Dpair_D1840, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k149, VEncodePointer(&_V10_Dpair_D1836, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k155, VEncodePointer(&_V10_Dpair_D1864, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda43, VEncodePointer(&_V10_Dpair_D1865, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k154, VEncodePointer(&_V10_Dpair_D1854, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k153, VEncodePointer(&_V10_Dpair_D1850, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k159, VEncodePointer(&_V10_Dpair_D1878, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda44, VEncodePointer(&_V10_Dpair_D1879, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k158, VEncodePointer(&_V10_Dpair_D1872, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k157, VEncodePointer(&_V10_Dpair_D1868, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda45, VEncodePointer(&_V10_Dpair_D1868, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k160, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k156, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k152, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0k148, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path_V0lambda40, VEncodePointer(&_V10_Dpair_D1818, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0import__path, VEncodePointer(&_V10_Dpair_D1811, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k163, VEncodePointer(&_V10_Dpair_D1906, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276_V0k166, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276_V0k165, VEncodePointer(&_V10_Dpair_D1927, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276_V0k167, VEncodePointer(&_V10_Dpair_D1931, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276_V0k169, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276_V0k168, VEncodePointer(&_V10_Dpair_D1951, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V10_Dloop_D276, VEncodePointer(&_V10_Dpair_D1920, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k164, VEncodePointer(&_V10_Dpair_D1323, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k162, VEncodePointer(&_V10_Dpair_D1902, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol_V0k161, VEncodePointer(&_V10_Dpair_D1894, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__symbol, VEncodePointer(&_V10_Dpair_D1888, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k172, VEncodePointer(&_V10_Dpair_D1969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k171, VEncodePointer(&_V10_Dpair_D1966, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function_V0k170, VEncodePointer(&_V10_Dpair_D1963, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__qualified__function, VEncodePointer(&_V10_Dpair_D1960, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k175, VEncodePointer(&_V10_Dpair_D1969, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k174, VEncodePointer(&_V10_Dpair_D1966, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__environment_V0k173, VEncodePointer(&_V10_Dpair_D1963, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0compiler_V0variables_V0mangle__environment, VEncodePointer(&_V10_Dpair_D1975, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0variables_V20_V0lambda3, VEncodePointer(&_V10_Dpair_D1041, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0variables_V20_V0lambda1, VEncodePointer(&_V10_Dpair_D988, VPOINTER_PAIR));
}
