#include "ponglib.h"

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <SDL2/SDL.h>

struct Window {
  SDL_Window * window;
  SDL_Renderer * renderer;

  bool program_exit;
  int w;
  int h;
  int mouse_x;
  int mouse_y;
};

struct Window * make_window(int w, int h, char * title) {
  if(SDL_Init(SDL_INIT_VIDEO) < 0)
    return NULL; struct Window * out = malloc(sizeof(struct Window));
  memset(out, 0, sizeof(struct Window));
  out->window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, w, h, SDL_WINDOW_HIDDEN);
  out->w = w;
  out->h = h;
  if(!out->window) {
    printf("Window creation failure\n");
    return NULL;
  }
  out->renderer = SDL_CreateRenderer(out->window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
  if(!out->renderer) {
    printf("Renderer creation failure\n");
    return NULL;
  }
  SDL_ShowWindow(out->window);
  return out;
}

static void handle_event(struct Window * win, SDL_Event e) {
  switch(e.type) {
    case SDL_MOUSEMOTION:
      win->mouse_x = e.motion.x;
      win->mouse_y = e.motion.y;
      break;
    case SDL_QUIT:
      win->program_exit = true;
      break;
  }
}

void poll_events(struct Window * win) {
  SDL_Event e;
  while(SDL_PollEvent(&e))
    handle_event(win, e);
}

float get_mouse_x(struct Window * win) {
  return win->mouse_x / (float) win->w;
}
float get_mouse_y(struct Window * win) {
  return win->mouse_y / (float) win->h;
}
bool get_exit_request(struct Window * win) {
  return win->program_exit;
}

void close_window(struct Window * win) {
  SDL_DestroyRenderer(win->renderer);
  SDL_DestroyWindow(win->window);
  SDL_Quit();
}

void microsleep(int seconds, int microseconds) {
  long long nanoseconds = microseconds * 1000ll;
  seconds += nanoseconds / (1000 * 1000 * 1000);
  nanoseconds %= (1000 * 1000 * 1000);

  struct timespec req;
  req.tv_sec = seconds;
  req.tv_nsec = nanoseconds;
  nanosleep(&req, NULL);
}

static inline unsigned char unorm8(float f) {
  if(f > 1.0f) f = 1.0f;
  if(f < 0.0f) f = 0.0f;
  return roundf(f * 255.0f);
}

void clear_window(struct Window * win) {
  SDL_SetRenderDrawColor(win->renderer, 0, 0, 0, 255);
  SDL_RenderClear(win->renderer);
}
void set_draw_color(struct Window * win, float r, float g, float b, float a) {
  SDL_SetRenderDrawColor(win->renderer, unorm8(r), unorm8(g), unorm8(b), unorm8(a));
}
void draw_rect(struct Window * win, float x, float y, float w, float h) {
  int ix = roundf(x * win->w);
  int iy = roundf(y * win->h);
  int iw = roundf(w * win->w);
  int ih = roundf(h * win->h);
  SDL_Rect rect = { .x = ix, .y = iy, .w = iw, .h = ih };
  SDL_RenderFillRect(win->renderer, &rect);
}
void present_window(struct Window * win) {
  SDL_RenderPresent(win->renderer);
}

struct FrameTimer {
  struct timespec last;
};
struct FrameTimer * make_frametimer_impl() {
  struct FrameTimer * ret = malloc(sizeof(struct FrameTimer));
  clock_gettime(CLOCK_MONOTONIC, &ret->last);
  return ret;
}
double frametimer_lap(struct FrameTimer * ft) {
  struct timespec begin = ft->last;
  clock_gettime(CLOCK_MONOTONIC, &ft->last);
  struct timespec end = ft->last;

  long secs = end.tv_sec - begin.tv_sec;
  long nsecs = end.tv_nsec - begin.tv_nsec;
  return secs + nsecs / (1000.0 * 1000 * 1000);
}
void close_frametimer_impl(struct FrameTimer * ft) {
  free(ft);
}
void floatsleep(double seconds) {
  struct timespec req;
  req.tv_sec = fmod(seconds, 1.0);
  req.tv_nsec = floor((seconds - req.tv_sec) * (1000 * 1000 * 1000));
  nanosleep(&req, NULL);
}
