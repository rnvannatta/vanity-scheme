#ifndef DFILE_H
#define DFILE_H
#include <stdarg.h>
#include <stddef.h>
/* Copyright 2025 Richard N Van Natta
 *
 * This file is part of the DFILE stdio alternative.
 *
 * DFILE is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 2 of the License, or (at
 * your option) any later version.
 * 
 * DFILE is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with DFILE.
 *
 * If not, see <https://www.gnu.org/licenses/>.
 *
 * If not, visit <https://github.com/rnvannatta>
 */

enum { D_BUFSIZ = 4096 };
enum { D_SEEK_SET, D_SEEK_CUR, D_SEEK_END };
enum { D_STDIN_FILENO, D_STDOUT_FILENO, D_STDERR_FILENO };
#ifdef _WIN64
typedef long long ssize_t;
typedef long long off64_t;
enum { D_IOFBF, D_IOLBF = 64, D_IONBF = 4 };
#else
typedef long ssize_t;
typedef long off64_t;
enum { D_IOFBF, D_IOLBF, D_IONBF };
#endif

typedef struct DFILE DFILE;
extern DFILE * dstdin;
extern DFILE * dstdout;
extern DFILE * dstderr;

long long int d_ftell(DFILE * f);
int d_feof_unlocked(DFILE * f);
int d_ferror_unlocked(DFILE * f);
void d_clearerror_unlocked(DFILE * f);

int d_setvbuf(DFILE * f, char * buf, int mode, size_t size);
void d_setbuf(DFILE * f, char buf[D_BUFSIZ]);
void d_setbuffer(DFILE * f, char * buf, size_t size);
void d_setlinebuf(DFILE * f);
int d_fileno_unlocked(DFILE * f);

void d_flockfile(DFILE * f);
int d_ftrylockfile(DFILE * f);
void d_funlockfile(DFILE * f);

DFILE * d_fdopen(int fd, char const * flags);
DFILE * d_fopen(char const * path, char const * mode);
DFILE * d_popen(char const * cmd, char const * mode);
DFILE * d_tmpfile();
DFILE * d_strfile();

int d_fflush_unlocked(DFILE * f);
int d_fseek(DFILE * f, int offset, int whence);
void d_rewind(DFILE * f);
int d_fgetpos(DFILE * f, off64_t * pos);
int d_fsetpos(DFILE * f, off64_t * pos);

int d_fclose(DFILE * f);
int d_pclose(DFILE * f);

int d_fwrite_unlocked(const void * ptr, int ct, DFILE * f);
int d_fread_unlocked(void * ptr, int ct, DFILE * f);
char * d_fgets_unlocked(char * buf, int ct, DFILE * f);
int d_ungetc(int c, DFILE * f);

typedef ssize_t d_cookie_read_function_t(void * cookie, char * buf, size_t size);
typedef ssize_t d_cookie_write_function_t(void * cookie, char const * buf, size_t size);
typedef int d_cookie_seek_function_t(void * cookie, off64_t * offset, int whence);
typedef int d_cookie_close_function_t(void * cookie);

typedef struct {
  d_cookie_read_function_t *read;
  d_cookie_write_function_t *write;
  d_cookie_seek_function_t *seek;
  d_cookie_close_function_t *close;
} d_cookie_io_functions_t;

DFILE * d_fopencookie(void * cookie, char const * mode, d_cookie_io_functions_t funcs);
// flags can also include a '0' robust buffer access flag
DFILE * d_fmemopen(void * buf, size_t size, char const * flags);
DFILE * d_open_memstream(char ** buf, size_t * tell);
// opens a string for reading: EOF occures at the nul terminator
// this stream opens in O(1) time, ie it does not call strlen on str
DFILE * d_open_strstream(char const * str);

DFILE * d_fdreopen(int fd, char const * mode, DFILE * f);
DFILE * d_freopen(char const * path, char const * mode, DFILE * f);
DFILE * d_freopencookie(void * cookie, char const * mode, d_cookie_io_functions_t funcs, DFILE * f);
// memreopening a memfile has a fast path
DFILE * d_fmemreopen(void * buf, size_t size, char const * flags, DFILE * f);
DFILE * d_reopen_memstream(char ** buf, size_t * tell, DFILE * f);
DFILE * d_reopen_strstream(char const * str, DFILE * f);
DFILE * d_preopen(char const * cmd, char const * mode, DFILE * f);
DFILE * d_retmpfile(DFILE * f);
DFILE * d_restrfile(DFILE * f);

//////////////////////////////////////////
//              NICETIES                //
//////////////////////////////////////////

int d_fgetc_unlocked(DFILE * f);
int d_getc_unlocked(DFILE * f);
int d_getchar_unlocked();

int d_fputc_unlocked(int c, DFILE * f);
int d_putc_unlocked(int c, DFILE * f);
int d_putchar_unlocked(int c);

int d_fputs_unlocked(char const * str, DFILE * f);
int d_puts(char const * str);

//////////////////////////////////////////
//               LOCKED                 //
//////////////////////////////////////////

int d_feof(DFILE * f);
int d_ferror(DFILE * f);
void d_clearerror(DFILE * f);

int d_fileno(DFILE * f);
int d_fflush(DFILE * f);

int d_fwrite(const void * ptr, int ct, DFILE * f);
int d_fread(void * ptr, int ct, DFILE * f);
char * d_fgets(char * buf, int ct, DFILE * f);

int d_fgetc(DFILE * f);
int d_getc(DFILE * f);
int d_getchar();

int d_fputc(int c, DFILE * f);
int d_putc(int c, DFILE * f);
int d_putchar(int c);

int d_fputs(char const * str, DFILE * f);

//////////////////////////////////////////
//               PRINTF                 //
//////////////////////////////////////////

#ifdef ENABLE_FORMAT_ATTRIBUTE
#define D_PRINT_ATTR(x, y) __attribute__((format(printf, x, y)))
#else
#define D_PRINT_ATTR(x, y)
#endif

D_PRINT_ATTR(1, 2) int d_printf(char const * fmt, ...);
D_PRINT_ATTR(2, 3) int d_fprintf(DFILE * f, char const * fmt, ...);
D_PRINT_ATTR(3, 4) int d_snprintf(char * buf, size_t size, char const * fmt, ...);
D_PRINT_ATTR(2, 3) int d_sprintf(char * buf, char const * fmt, ...);
D_PRINT_ATTR(2, 3) int d_asprintf(char ** buf, char const * fmt, ...);

D_PRINT_ATTR(1, 0) int d_vprintf(char const * fmt, va_list args);
D_PRINT_ATTR(2, 0) int d_vfprintf(DFILE * f, char const * fmt, va_list args);
D_PRINT_ATTR(3, 0) int d_vsnprintf(char * buf, size_t size, char const * fmt, va_list args);
D_PRINT_ATTR(2, 0) int d_vsprintf(char * buf, char const * fmt, va_list args);
D_PRINT_ATTR(2, 0) int d_vasprintf(char ** buf, char const * fmt, va_list args);

int d_scanf(char const * fmt, ...);
int d_fscanf(DFILE * f, char const * fmt, ...);
int d_sscanf(char const * str, char const * fmt, ...);

int d_vscanf(char const * fmt, va_list args);
int d_vfscanf(DFILE * f, char const * fmt, va_list args);
int d_vsscanf(char const * str, char const * fmt, va_list args);

//////////////////////////////////////////
//             WINDOWS :(               //
//////////////////////////////////////////

// for freeing memory created with d_asprintf
// or d_open_memstream because of dll bundary rules
void d_free(const void * ptr);

#endif
