#include "vscheme/vruntime.h"
#include "vanity/dfile.h"

static inline int port_close(VPort * p) {
  int ret = 0;
  if(p->flags && !(p->flags & PFLAG_NOCLOSE)) {
    if(p->flags & PFLAG_PROCESS) {
      if(p->flags & PFLAG_DFILE)
        ret = d_pclose(p->dstream);
      else
        ret = pclose(p->stream);
    } else {
      if(p->flags & PFLAG_DFILE)
        ret = d_fclose(p->dstream);
      else
        ret = fclose(p->stream);
    }
    p->stream = NULL;
    p->flags = 0;
  }
  return ret;
}

static inline int port_fread(void * buf, int len, VPort * p) {
  if(p->flags & PFLAG_DFILE)
    return d_fread(buf, len, p->dstream);
  else
    return fread(buf, 1, len, p->stream);
}
static inline int port_fputc(int c, VPort * p) {
  if(p->flags & PFLAG_DFILE)
    return d_fputc(c, p->dstream);
  else
    return fputc(c, p->stream);
}
static inline int port_fputs(const char * s, VPort * p) {
  if(p->flags & PFLAG_DFILE)
    return d_fputs(s, p->dstream);
  else
    return fputs(s, p->stream);
}

static inline int port_fgetc(VPort * p) {
  if(p->flags & PFLAG_DFILE)
    return d_fgetc(p->dstream);
  else
    return fgetc(p->stream);
}
static inline int port_ungetc(int c, VPort * p) {
  if(p->flags & PFLAG_DFILE)
    return d_ungetc(c, p->dstream);
  else
    return ungetc(c, p->stream);
}
static inline char * port_fgets(char * s, size_t size, VPort * p) {
  if(p->flags & PFLAG_DFILE)
    return d_fgets(s, size, p->dstream);
  else
    return fgets(s, size, p->stream);
}

static inline int port_fileno(VPort * p) {
  if(p->flags & PFLAG_DFILE)
    return d_fileno(p->dstream);
  else
    return fileno(p->stream);
}

#if 0
static FILE* myfopen(char * path, char * mode) {
  if(VANITY_USE_DFILE)
    return (FILE*)d_fopen(path, mode);
  else
    return fopen(path, mode);
}
static FILE* mypopen(char * cmd, char * mode) {
  if(VANITY_USE_DFILE)
    return (FILE*)d_popen(cmd, mode);
  else
    return popen(cmd, mode);
}
#endif
static inline void port_rewind(VPort * p) {
  if(p->flags & PFLAG_DFILE)
    d_rewind(p->dstream);
  else
    rewind(p->stream);
}
static inline int port_fseek(VPort * p, int offset, int whence) {
  if(p->flags & PFLAG_DFILE)
    return d_fseek(p->dstream, offset, whence);
  else
    return fseek(p->stream, offset, whence);
}
static inline off64_t port_ftell(VPort * p) {
  if(p->flags & PFLAG_DFILE)
    return d_ftell(p->dstream);
  else
    return ftell(p->stream);
}
static inline int port_fflush(VPort * p) {
  if(p->flags & PFLAG_DFILE)
    return d_fflush(p->dstream);
  else
    return fflush(p->stream);
}

static inline int port_feof(VPort * p) {
  if(p->flags & PFLAG_DFILE)
    return d_feof(p->dstream);
  else
    return feof(p->stream);
}
static inline int port_ferror(VPort * p) {
  if(p->flags & PFLAG_DFILE)
    return d_ferror(p->dstream);
  else
    return ferror(p->stream);
}

static inline int port_fputd(double d, VPort * p) {
  // longest double is the smallest double, around 1080 digits
  char buf[1536];
  d_snprintf(buf, sizeof buf, "%r.1f", d);
  return port_fputs(buf, p);
}
static inline int port_fputli(long i, VPort * p) {
  char buf[512];
  snprintf(buf, sizeof buf, "%li", i);
  return port_fputs(buf, p);
}
static inline int port_fputi(int i, VPort * p) {
  char buf[512];
  snprintf(buf, sizeof buf, "%i", i);
  return port_fputs(buf, p);
}

static inline int port_fputi8(int8_t i, VPort * p) {
  char buf[32];
  snprintf(buf, sizeof buf, "%i", (int)i);
  return port_fputs(buf, p);
}
static inline int port_fputu8(uint8_t i, VPort * p) {
  char buf[32];
  snprintf(buf, sizeof buf, "%u", (unsigned)i);
  return port_fputs(buf, p);
}
static inline int port_fputi16(int16_t i, VPort * p) {
  char buf[32];
  snprintf(buf, sizeof buf, "%i", (int)i);
  return port_fputs(buf, p);
}
static inline int port_fputu16(uint16_t i, VPort * p) {
  char buf[32];
  snprintf(buf, sizeof buf, "%u", (unsigned)i);
  return port_fputs(buf, p);
}
static inline int port_fputi32(int32_t i, VPort * p) {
  char buf[32];
  snprintf(buf, sizeof buf, "%i", (int)i);
  return port_fputs(buf, p);
}
static inline int port_fputu32(uint32_t i, VPort * p) {
  char buf[32];
  snprintf(buf, sizeof buf, "%u", (unsigned)i);
  return port_fputs(buf, p);
}
static inline int port_fputi64(int64_t i, VPort * p) {
  char buf[32];
  snprintf(buf, sizeof buf, "%lli", (long long)i);
  return port_fputs(buf, p);
}
static inline int port_fputu64(uint64_t i, VPort * p) {
  char buf[32];
  snprintf(buf, sizeof buf, "%llu", (long long unsigned)i);
  return port_fputs(buf, p);
}

static inline VPort get_port_stdin() {
  return (VPort) {
    .base.tag = VPORT,
    .stream = stdin,
    .flags = PFLAG_READ | PFLAG_NOCLOSE,
  };
}
static inline VPort get_port_stdout() {
  return (VPort) {
    .base.tag = VPORT,
    .stream = stdout,
    .flags = PFLAG_WRITE | PFLAG_NOCLOSE,
  };
}
static inline VPort get_port_stderr() {
  return (VPort) {
    .base.tag = VPORT,
    .stream = stderr,
    .flags = PFLAG_WRITE | PFLAG_NOCLOSE,
  };
}
