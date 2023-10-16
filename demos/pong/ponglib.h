#pragma once

typedef struct Window Window;
void * make_window(int w, int h, char * title);
void poll_events(Window * win);
float get_mouse_x(Window * win);
float get_mouse_y(Window * win);
_Bool get_exit_request(Window * win);
void close_window(Window * win);

void clear_window(Window * win);
void set_draw_color(Window * win, float r, float g, float b, float a);
void draw_rect(Window * win, float x, float y, float w, float h);
void present_window(Window * win);

void floatsleep(double seconds);

typedef struct FrameTimer FrameTimer;
void * make_frametimer_impl();
double frametimer_lap(FrameTimer * ft);
void close_frametimer_impl(FrameTimer * ft);
