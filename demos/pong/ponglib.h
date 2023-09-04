#pragma once

struct Window;
void * make_window(int w, int h, char * title);
void poll_events(struct Window * win);
float get_mouse_x(struct Window * win);
float get_mouse_y(struct Window * win);
_Bool get_exit_request(struct Window * win);
void close_window(struct Window * win);

void clear_window(struct Window * win);
void set_draw_color(struct Window * win, float r, float g, float b, float a);
void draw_rect(struct Window * win, float x, float y, float w, float h);
void present_window(struct Window * win);

void floatsleep(double seconds);

struct FrameTimer;
void * make_frametimer();
double frametimer_lap(struct FrameTimer * ft);
void close_frametimer(struct FrameTimer * ft);
