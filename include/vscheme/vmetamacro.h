#ifndef V_METAMACRO_H
#define V_METAMACRO_H
// Ugly macro tools to build hideous macros to bridge the gaps between gcc and clang and emscripten

// the classic arg counting macro, lifted from Laurent Deniau's usenet post, but I told ai to expand it to 256 args
#define V_ARG_N( \
           _1,  _2,  _3,  _4,  _5,  _6,  _7,  _8,  _9, _10, \
          _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, \
          _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, \
          _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, \
          _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, \
          _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, \
          _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, \
          _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, \
          _81, _82, _83, _84, _85, _86, _87, _88, _89, _90, \
          _91, _92, _93, _94, _95, _96, _97, _98, _99,_100, \
         _101,_102,_103,_104,_105,_106,_107,_108,_109,_110, \
         _111,_112,_113,_114,_115,_116,_117,_118,_119,_120, \
         _121,_122,_123,_124,_125,_126,_127,_128,_129,_130, \
         _131,_132,_133,_134,_135,_136,_137,_138,_139,_140, \
         _141,_142,_143,_144,_145,_146,_147,_148,_149,_150, \
         _151,_152,_153,_154,_155,_156,_157,_158,_159,_160, \
         _161,_162,_163,_164,_165,_166,_167,_168,_169,_170, \
         _171,_172,_173,_174,_175,_176,_177,_178,_179,_180, \
         _181,_182,_183,_184,_185,_186,_187,_188,_189,_190, \
         _191,_192,_193,_194,_195,_196,_197,_198,_199,_200, \
         _201,_202,_203,_204,_205,_206,_207,_208,_209,_210, \
         _211,_212,_213,_214,_215,_216,_217,_218,_219,_220, \
         _221,_222,_223,_224,_225,_226,_227,_228,_229,_230, \
         _231,_232,_233,_234,_235,_236,_237,_238,_239,_240, \
         _241,_242,_243,_244,_245,_246,_247,_248,_249,_250, \
         _251,_252,_253,_254,_255,_256, N, ...) N

// Reversed sequence of numbers from 256 to 0
#define V_RSEQ_N() \
         256,255,254,253,252,251,250,249,248,247, \
         246,245,244,243,242,241,240,239,238,237, \
         236,235,234,233,232,231,230,229,228,227, \
         226,225,224,223,222,221,220,219,218,217, \
         216,215,214,213,212,211,210,209,208,207, \
         206,205,204,203,202,201,200,199,198,197, \
         196,195,194,193,192,191,190,189,188,187, \
         186,185,184,183,182,181,180,179,178,177, \
         176,175,174,173,172,171,170,169,168,167, \
         166,165,164,163,162,161,160,159,158,157, \
         156,155,154,153,152,151,150,149,148,147, \
         146,145,144,143,142,141,140,139,138,137, \
         136,135,134,133,132,131,130,129,128,127, \
         126,125,124,123,122,121,120,119,118,117, \
         116,115,114,113,112,111,110,109,108,107, \
         106,105,104,103,102,101,100,99,98,97, \
         96,95,94,93,92,91,90,89,88,87, \
         86,85,84,83,82,81,80,79,78,77, \
         76,75,74,73,72,71,70,69,68,67, \
         66,65,64,63,62,61,60,59,58,57, \
         56,55,54,53,52,51,50,49,48,47, \
         46,45,44,43,42,41,40,39,38,37, \
         36,35,34,33,32,31,30,29,28,27, \
         26,25,24,23,22,21,20,19,18,17, \
         16,15,14,13,12,11,10,9,8,7, \
         6,5,4,3,2,1,0

// Count macro
#define V_NARG_(...) V_ARG_N(__VA_ARGS__)
#define VARG_COUNT(...) V_NARG_(__VA_ARGS__ __VA_OPT__(,) V_RSEQ_N())

// last argument macro sourced from Alex Celeste's stackoverflow post
#define V_CONC(A, B) V_CONC_(A, B)
#define V_CONC_(A, B) A##B

#define V_GET_ELEM(N, ...) V_CONC(V_GET_ELEM_, N)(__VA_ARGS__)
#define V_GET_ELEM_0(_0, ...) _0
#define V_GET_ELEM_1(_0, _1, ...) _1
#define V_GET_ELEM_2(_0, _1, _2, ...) _2
#define V_GET_ELEM_3(_0, _1, _2, _3, ...) _3
#define V_GET_ELEM_4(_0, _1, _2, _3, _4, ...) _4
#define V_GET_ELEM_5(_0, _1, _2, _3, _4, _5, ...) _5
#define V_GET_ELEM_6(_0, _1, _2, _3, _4, _5, _6, ...) _6
#define V_GET_ELEM_7(_0, _1, _2, _3, _4, _5, _6, _7, ...) _7
#define V_GET_ELEM_8(_0, _1, _2, _3, _4, _5, _6, _7, _8, ...) _8
#define V_GET_ELEM_9(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, ...) _9
#define V_GET_ELEM_10(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, ...) _10
#define V_GET_ELEM_11(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, ...) _11
#define V_GET_ELEM_12(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, ...) _12
#define V_GET_ELEM_13(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, ...) _13
#define V_GET_ELEM_14(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, ...) _14
#define V_GET_ELEM_15(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, ...) _15
#define V_GET_ELEM_16(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, ...) _16

// Get last argument - placeholder decrements by one
#define V_LAST_ARG(...) V_GET_ELEM(VARG_COUNT(__VA_ARGS__), _, __VA_ARGS__ )

/*
 * Created by William Swanson in 2012.
 *
 * I, William Swanson, dedicate this work to the public domain.
 * I waive all rights to the work worldwide under copyright law,
 * including all related and neighboring rights,
 * to the extent allowed by law.
 *
 * You can copy, modify, distribute and perform the work,
 * even for commercial purposes, all without asking permission.
 */

#ifndef MAP_H_INCLUDED
#define MAP_H_INCLUDED

#define EVAL0(...) __VA_ARGS__
#define EVAL1(...) EVAL0(EVAL0(EVAL0(__VA_ARGS__)))
#define EVAL2(...) EVAL1(EVAL1(EVAL1(__VA_ARGS__)))
#define EVAL3(...) EVAL2(EVAL2(EVAL2(__VA_ARGS__)))
#define EVAL4(...) EVAL3(EVAL3(EVAL3(__VA_ARGS__)))
#define EVAL(...)  EVAL4(EVAL4(EVAL4(__VA_ARGS__)))

#define MAP_END(...)
#define MAP_OUT
#define MAP_COMMA ,

#define MAP_GET_END2() 0, MAP_END
#define MAP_GET_END1(...) MAP_GET_END2
#define MAP_GET_END(...) MAP_GET_END1
#define MAP_NEXT0(test, next, ...) next MAP_OUT
#define MAP_NEXT1(test, next) MAP_NEXT0(test, next, 0)
#define MAP_NEXT(test, next)  MAP_NEXT1(MAP_GET_END test, next)

#define MAP0(f, x, peek, ...) f(x) MAP_NEXT(peek, MAP1)(f, peek, __VA_ARGS__)
#define MAP1(f, x, peek, ...) f(x) MAP_NEXT(peek, MAP0)(f, peek, __VA_ARGS__)

#define MAP_LIST_NEXT1(test, next) MAP_NEXT0(test, MAP_COMMA next, 0)
#define MAP_LIST_NEXT(test, next)  MAP_LIST_NEXT1(MAP_GET_END test, next)

#define MAP_LIST0(f, x, peek, ...) f(x) MAP_LIST_NEXT(peek, MAP_LIST1)(f, peek, __VA_ARGS__)
#define MAP_LIST1(f, x, peek, ...) f(x) MAP_LIST_NEXT(peek, MAP_LIST0)(f, peek, __VA_ARGS__)

/**
 * Applies the function macro `f` to each of the remaining parameters.
 */
#define MAP(f, ...) EVAL(MAP1(f, __VA_ARGS__, ()()(), ()()(), ()()(), 0))

/**
 * Applies the function macro `f` to each of the remaining parameters and
 * inserts commas between the results.
 */
#define MAP_LIST(f, ...) EVAL(MAP_LIST1(f, __VA_ARGS__, ()()(), ()()(), ()()(), 0))

#endif
#endif
