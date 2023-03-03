/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2023 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

#ifndef SDL_SIM_CURSOR
#define SDL_SIM_CURSOR

#ifdef __cplusplus
extern "C" {
#endif

#include <SDL.h>

extern void SDL_SIM_MouseInit();
extern void SDL_SIM_MouseQuit();

extern void SDL_SIM_SetDefaultCursor(SDL_Cursor *cursor);
extern SDL_Cursor *SDL_SIM_CreateCursor(const Uint8 *data, const Uint8 *mask,
                 int w, int h, int hot_x, int hot_y);
extern SDL_Cursor *SDL_SIM_CreateColorCursor(SDL_Surface *surface, int hot_x, int hot_y);
extern SDL_Cursor *SDL_SIM_CreateSystemCursor(SDL_SystemCursor id);
extern void SDL_SIM_SetCursor(SDL_Cursor *cursor);
extern SDL_Cursor *SDL_SIM_GetCursor();
extern SDL_Cursor *SDL_SIM_GetDefaultCursor();
extern void SDL_SIM_FreeCursor(SDL_Cursor *cursor);
extern int SDL_SIM_ShowCursor(int toggle);

/* */
extern void SDL_SIM_BlitCursor(SDL_Surface *surface);
extern void SDL_SIM_BlitCursorScaled(SDL_Surface *surface, float scaled);

/* Ends C function definitions when using C++ */
#ifdef __cplusplus
}
#endif

#ifdef SDL_SIM_CURSOR_COMPILE

#ifdef __cplusplus
extern "C" {
#endif

struct SDL_Cursor
{
    SDL_Cursor *next;
    SDL_Surface *surface;
    int hot_x;
    int hot_y;
};


typedef struct {
    SDL_Cursor *cursors;
    SDL_Cursor *def_cursor;
    SDL_Cursor *cur_cursor;
    SDL_bool cursor_shown;
} SDL_SIM_Mouse;

typedef struct {
    int width;
    int height;
    int hot_x;
    int hot_y;
    SDL_Cursor *cursor;
    const unsigned char *data;
    const unsigned char *mask;
} BuiltinCursor;

/* Include our builtin cursors */
/* Autogenerated by build_cursors.py */

/* SDL_SYSTEM_CURSOR_ARROW -> left_ptr */
const unsigned char BUILTIN_SDL_SYSTEM_CURSOR_ARROW_DATA[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x0c,
    0x00, 0x00, 0x0e, 0x00, 0x00, 0x0f, 0x00, 0x00,
    0x0f, 0x80, 0x00, 0x0f, 0xc0, 0x00, 0x0f, 0xe0,
    0x00, 0x0f, 0xf0, 0x00, 0x0f, 0xf8, 0x00, 0x0f,
    0xfc, 0x00, 0x0f, 0x80, 0x00, 0x0f, 0x80, 0x00,
    0x0c, 0xc0, 0x00, 0x08, 0xc0, 0x00, 0x00, 0x60,
    0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const unsigned char BUILTIN_SDL_SYSTEM_CURSOR_ARROW_MASK[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00,
    0x00, 0x18, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x1e,
    0x00, 0x00, 0x1f, 0x00, 0x00, 0x1f, 0x80, 0x00,
    0x1f, 0xc0, 0x00, 0x1f, 0xe0, 0x00, 0x1f, 0xf0,
    0x00, 0x1f, 0xf8, 0x00, 0x1f, 0xfc, 0x00, 0x1f,
    0xfe, 0x00, 0x1f, 0xfe, 0x00, 0x1f, 0xc0, 0x00,
    0x1f, 0xe0, 0x00, 0x1d, 0xe0, 0x00, 0x18, 0xf0,
    0x00, 0x10, 0xf0, 0x00, 0x00, 0x70, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

BuiltinCursor BUILTIN_SDL_SYSTEM_CURSOR_ARROW = {
    24, 24, 4, 4, NULL,
    (const unsigned char *)&BUILTIN_SDL_SYSTEM_CURSOR_ARROW_DATA,
    (const unsigned char *)&BUILTIN_SDL_SYSTEM_CURSOR_ARROW_MASK};


/* SDL_SYSTEM_CURSOR_IBEAM -> xterm */
const unsigned char BUILTIN_SDL_SYSTEM_CURSOR_IBEAM_DATA[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00,
    0x20, 0x00, 0x00, 0x20, 0x00, 0x00, 0x20, 0x00,
    0x00, 0x20, 0x00, 0x00, 0x20, 0x00, 0x00, 0x20,
    0x00, 0x00, 0x20, 0x00, 0x00, 0x20, 0x00, 0x00,
    0x20, 0x00, 0x00, 0x20, 0x00, 0x00, 0x20, 0x00,
    0x00, 0x20, 0x00, 0x00, 0x20, 0x00, 0x00, 0x20,
    0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const unsigned char BUILTIN_SDL_SYSTEM_CURSOR_IBEAM_MASK[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01, 0xfc, 0x00, 0x01, 0xfc, 0x00, 0x01,
    0xfc, 0x00, 0x00, 0x70, 0x00, 0x00, 0x70, 0x00,
    0x00, 0x70, 0x00, 0x00, 0x70, 0x00, 0x00, 0x70,
    0x00, 0x00, 0x70, 0x00, 0x00, 0x70, 0x00, 0x00,
    0x70, 0x00, 0x00, 0x70, 0x00, 0x00, 0x70, 0x00,
    0x00, 0x70, 0x00, 0x00, 0x70, 0x00, 0x01, 0xfc,
    0x00, 0x01, 0xfc, 0x00, 0x01, 0xfc, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

BuiltinCursor BUILTIN_SDL_SYSTEM_CURSOR_IBEAM = {
    24, 24, 11, 12, NULL,
    (const unsigned char *)&BUILTIN_SDL_SYSTEM_CURSOR_IBEAM_DATA,
    (const unsigned char *)&BUILTIN_SDL_SYSTEM_CURSOR_IBEAM_MASK};


/* SDL_SYSTEM_CURSOR_WAIT -> watch */
const unsigned char BUILTIN_SDL_SYSTEM_CURSOR_WAIT_DATA[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x01,
    0xff, 0x80, 0x03, 0xeb, 0xc0, 0x07, 0xb5, 0xe0,
    0x07, 0xfa, 0xe0, 0x0f, 0xfc, 0x70, 0x0f, 0xfd,
    0x70, 0x0f, 0xfe, 0x30, 0x0f, 0xfe, 0x30, 0x0f,
    0xbc, 0x70, 0x0f, 0x00, 0x70, 0x07, 0x00, 0xe0,
    0x07, 0x81, 0xe0, 0x03, 0xc3, 0xc0, 0x01, 0xff,
    0x80, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const unsigned char BUILTIN_SDL_SYSTEM_CURSOR_WAIT_MASK[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x7e, 0x00, 0x01, 0xff, 0x80, 0x03,
    0xff, 0xc0, 0x07, 0xff, 0xe0, 0x0f, 0xff, 0xf0,
    0x0f, 0xff, 0xf0, 0x1f, 0xff, 0xf8, 0x1f, 0xff,
    0xf8, 0x1f, 0xff, 0xf8, 0x1f, 0xff, 0xf8, 0x1f,
    0xff, 0xf8, 0x1f, 0xff, 0xf8, 0x0f, 0xff, 0xf0,
    0x0f, 0xff, 0xf0, 0x07, 0xff, 0xe0, 0x03, 0xff,
    0xc0, 0x01, 0xff, 0x80, 0x00, 0x7e, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

BuiltinCursor BUILTIN_SDL_SYSTEM_CURSOR_WAIT = {
    24, 24, 11, 11, NULL,
    (const unsigned char *)&BUILTIN_SDL_SYSTEM_CURSOR_WAIT_DATA,
    (const unsigned char *)&BUILTIN_SDL_SYSTEM_CURSOR_WAIT_MASK};


/* SDL_SYSTEM_CURSOR_CROSSHAIR -> tcross */
const unsigned char BUILTIN_SDL_SYSTEM_CURSOR_CROSSHAIR_DATA[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00,
    0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10,
    0x00, 0x07, 0xff, 0xc0, 0x00, 0x10, 0x00, 0x00,
    0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00,
    0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const unsigned char BUILTIN_SDL_SYSTEM_CURSOR_CROSSHAIR_MASK[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00,
    0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00,
    0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x0f, 0xff,
    0xe0, 0x0f, 0xff, 0xe0, 0x0f, 0xff, 0xe0, 0x00,
    0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00,
    0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

BuiltinCursor BUILTIN_SDL_SYSTEM_CURSOR_CROSSHAIR = {
    24, 24, 12, 12, NULL,
    (const unsigned char *)&BUILTIN_SDL_SYSTEM_CURSOR_CROSSHAIR_DATA,
    (const unsigned char *)&BUILTIN_SDL_SYSTEM_CURSOR_CROSSHAIR_MASK};


/* SDL_SYSTEM_CURSOR_WAITARROW -> left_ptr_watch */
const unsigned char BUILTIN_SDL_SYSTEM_CURSOR_WAITARROW_DATA[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
    0x00, 0x00, 0x0c, 0x00, 0x00, 0x0e, 0x00, 0x00,
    0x0f, 0x00, 0x00, 0x0f, 0xbe, 0x00, 0x0f, 0xef,
    0x80, 0x0f, 0xfa, 0x80, 0x0f, 0xfd, 0xc0, 0x0f,
    0xbe, 0xc0, 0x0f, 0x9d, 0xc0, 0x0f, 0x9c, 0xc0,
    0x0d, 0xc1, 0xc0, 0x08, 0xe3, 0x80, 0x00, 0xff,
    0x80, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const unsigned char BUILTIN_SDL_SYSTEM_CURSOR_WAITARROW_MASK[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x10, 0x00, 0x00, 0x18, 0x00, 0x00, 0x1c,
    0x00, 0x00, 0x1e, 0x00, 0x00, 0x1f, 0x00, 0x00,
    0x1f, 0xbe, 0x00, 0x1f, 0xff, 0x80, 0x1f, 0xff,
    0xc0, 0x1f, 0xff, 0xc0, 0x1f, 0xff, 0xe0, 0x1f,
    0xff, 0xe0, 0x1f, 0xff, 0xe0, 0x1f, 0xff, 0xe0,
    0x1f, 0xff, 0xe0, 0x1d, 0xff, 0xc0, 0x19, 0xff,
    0xc0, 0x10, 0xff, 0x80, 0x00, 0x3e, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

BuiltinCursor BUILTIN_SDL_SYSTEM_CURSOR_WAITARROW = {
    24, 24, 4, 3, NULL,
    (const unsigned char *)&BUILTIN_SDL_SYSTEM_CURSOR_WAITARROW_DATA,
    (const unsigned char *)&BUILTIN_SDL_SYSTEM_CURSOR_WAITARROW_MASK};


/* SDL_SYSTEM_CURSOR_SIZENWSE -> bd_double_arrow */
const unsigned char BUILTIN_SDL_SYSTEM_CURSOR_SIZENWSE_DATA[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x0f,
    0xc0, 0x00, 0x0f, 0x80, 0x00, 0x0f, 0xc0, 0x00,
    0x0f, 0xe0, 0x00, 0x0d, 0xf0, 0x00, 0x08, 0xf8,
    0x80, 0x00, 0x7d, 0x80, 0x00, 0x3f, 0x80, 0x00,
    0x1f, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x1f, 0x80,
    0x00, 0x3f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const unsigned char BUILTIN_SDL_SYSTEM_CURSOR_SIZENWSE_MASK[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x1f, 0xf8, 0x00, 0x1f, 0xf0, 0x00, 0x1f,
    0xe0, 0x00, 0x1f, 0xc0, 0x00, 0x1f, 0xe0, 0x00,
    0x1f, 0xf0, 0x40, 0x1f, 0xf8, 0xc0, 0x1d, 0xfd,
    0xc0, 0x18, 0xff, 0xc0, 0x10, 0x7f, 0xc0, 0x00,
    0x3f, 0xc0, 0x00, 0x1f, 0xc0, 0x00, 0x3f, 0xc0,
    0x00, 0x7f, 0xc0, 0x00, 0xff, 0xc0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

BuiltinCursor BUILTIN_SDL_SYSTEM_CURSOR_SIZENWSE = {
    24, 24, 11, 11, NULL,
    (const unsigned char *)&BUILTIN_SDL_SYSTEM_CURSOR_SIZENWSE_DATA,
    (const unsigned char *)&BUILTIN_SDL_SYSTEM_CURSOR_SIZENWSE_MASK};


/* SDL_SYSTEM_CURSOR_SIZENESW -> fd_double_arrow */
const unsigned char BUILTIN_SDL_SYSTEM_CURSOR_SIZENESW_DATA[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x80, 0x00,
    0x1f, 0x80, 0x00, 0x0f, 0x80, 0x00, 0x1f, 0x80,
    0x00, 0x3f, 0x80, 0x00, 0x7d, 0x80, 0x08, 0xf8,
    0x80, 0x0d, 0xf0, 0x00, 0x0f, 0xe0, 0x00, 0x0f,
    0xc0, 0x00, 0x0f, 0x80, 0x00, 0x0f, 0xc0, 0x00,
    0x0f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const unsigned char BUILTIN_SDL_SYSTEM_CURSOR_SIZENESW_MASK[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xff, 0xc0, 0x00, 0x7f, 0xc0, 0x00,
    0x3f, 0xc0, 0x00, 0x1f, 0xc0, 0x00, 0x3f, 0xc0,
    0x10, 0x7f, 0xc0, 0x18, 0xff, 0xc0, 0x1d, 0xfd,
    0xc0, 0x1f, 0xf8, 0xc0, 0x1f, 0xf0, 0x40, 0x1f,
    0xe0, 0x00, 0x1f, 0xc0, 0x00, 0x1f, 0xe0, 0x00,
    0x1f, 0xf0, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

BuiltinCursor BUILTIN_SDL_SYSTEM_CURSOR_SIZENESW = {
    24, 24, 11, 11, NULL,
    (const unsigned char *)&BUILTIN_SDL_SYSTEM_CURSOR_SIZENESW_DATA,
    (const unsigned char *)&BUILTIN_SDL_SYSTEM_CURSOR_SIZENESW_MASK};


/* SDL_SYSTEM_CURSOR_SIZEWE -> sb_h_double_arrow */
const unsigned char BUILTIN_SDL_SYSTEM_CURSOR_SIZEWE_DATA[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x80,
    0x03, 0x00, 0xc0, 0x07, 0x00, 0xe0, 0x0f, 0xff,
    0xf0, 0x1f, 0xff, 0xf8, 0x0f, 0xff, 0xf0, 0x07,
    0x00, 0xe0, 0x03, 0x00, 0xc0, 0x01, 0x00, 0x80,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const unsigned char BUILTIN_SDL_SYSTEM_CURSOR_SIZEWE_MASK[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x81, 0x00, 0x01, 0x81, 0x80, 0x03, 0x81, 0xc0,
    0x07, 0x81, 0xe0, 0x0f, 0xff, 0xf0, 0x1f, 0xff,
    0xf8, 0x3f, 0xff, 0xfc, 0x1f, 0xff, 0xf8, 0x0f,
    0xff, 0xf0, 0x07, 0x81, 0xe0, 0x03, 0x81, 0xc0,
    0x01, 0x81, 0x80, 0x00, 0x81, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

BuiltinCursor BUILTIN_SDL_SYSTEM_CURSOR_SIZEWE = {
    24, 24, 12, 12, NULL,
    (const unsigned char *)&BUILTIN_SDL_SYSTEM_CURSOR_SIZEWE_DATA,
    (const unsigned char *)&BUILTIN_SDL_SYSTEM_CURSOR_SIZEWE_MASK};


/* SDL_SYSTEM_CURSOR_SIZENS -> sb_v_double_arrow */
const unsigned char BUILTIN_SDL_SYSTEM_CURSOR_SIZENS_DATA[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x10, 0x00, 0x00, 0x38, 0x00, 0x00,
    0x7c, 0x00, 0x00, 0xfe, 0x00, 0x01, 0xff, 0x00,
    0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38,
    0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00,
    0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00,
    0x01, 0xff, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x7c,
    0x00, 0x00, 0x38, 0x00, 0x00, 0x10, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const unsigned char BUILTIN_SDL_SYSTEM_CURSOR_SIZENS_MASK[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10,
    0x00, 0x00, 0x38, 0x00, 0x00, 0x7c, 0x00, 0x00,
    0xfe, 0x00, 0x01, 0xff, 0x00, 0x03, 0xff, 0x80,
    0x07, 0xff, 0xc0, 0x00, 0x7c, 0x00, 0x00, 0x7c,
    0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00,
    0x7c, 0x00, 0x00, 0x7c, 0x00, 0x07, 0xff, 0xc0,
    0x03, 0xff, 0x80, 0x01, 0xff, 0x00, 0x00, 0xfe,
    0x00, 0x00, 0x7c, 0x00, 0x00, 0x38, 0x00, 0x00,
    0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

BuiltinCursor BUILTIN_SDL_SYSTEM_CURSOR_SIZENS = {
    24, 24, 12, 13, NULL,
    (const unsigned char *)&BUILTIN_SDL_SYSTEM_CURSOR_SIZENS_DATA,
    (const unsigned char *)&BUILTIN_SDL_SYSTEM_CURSOR_SIZENS_MASK};


/* SDL_SYSTEM_CURSOR_SIZEALL -> move */
const unsigned char BUILTIN_SDL_SYSTEM_CURSOR_SIZEALL_DATA[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18,
    0x00, 0x00, 0x3c, 0x00, 0x00, 0x7e, 0x00, 0x00,
    0xff, 0x00, 0x00, 0x18, 0x00, 0x02, 0x18, 0x40,
    0x06, 0x18, 0x60, 0x0e, 0x18, 0x70, 0x1f, 0xff,
    0xf8, 0x1f, 0xff, 0xf8, 0x0e, 0x18, 0x70, 0x06,
    0x18, 0x60, 0x02, 0x18, 0x40, 0x00, 0x18, 0x00,
    0x00, 0xff, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x3c,
    0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const unsigned char BUILTIN_SDL_SYSTEM_CURSOR_SIZEALL_MASK[] = {
    0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x3c,
    0x00, 0x00, 0x7e, 0x00, 0x00, 0xff, 0x00, 0x01,
    0xff, 0x80, 0x03, 0xff, 0xc0, 0x07, 0x3c, 0xe0,
    0x0f, 0x3c, 0xf0, 0x1f, 0xff, 0xf8, 0x3f, 0xff,
    0xfc, 0x3f, 0xff, 0xfc, 0x1f, 0xff, 0xf8, 0x0f,
    0x3c, 0xf0, 0x07, 0x3c, 0xe0, 0x03, 0xff, 0xc0,
    0x01, 0xff, 0x80, 0x00, 0xff, 0x00, 0x00, 0x7e,
    0x00, 0x00, 0x3c, 0x00, 0x00, 0x18, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

BuiltinCursor BUILTIN_SDL_SYSTEM_CURSOR_SIZEALL = {
    24, 24, 12, 11, NULL,
    (const unsigned char *)&BUILTIN_SDL_SYSTEM_CURSOR_SIZEALL_DATA,
    (const unsigned char *)&BUILTIN_SDL_SYSTEM_CURSOR_SIZEALL_MASK};


/* SDL_SYSTEM_CURSOR_NO -> crossed_circle */
const unsigned char BUILTIN_SDL_SYSTEM_CURSOR_NO_DATA[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x01,
    0xff, 0x80, 0x03, 0xff, 0xc0, 0x07, 0xc1, 0xe0,
    0x07, 0x83, 0xe0, 0x0f, 0x07, 0x70, 0x0e, 0x0e,
    0x70, 0x0e, 0x1c, 0x70, 0x0e, 0x38, 0x70, 0x0e,
    0x70, 0x70, 0x0e, 0xe0, 0x70, 0x07, 0xc0, 0xe0,
    0x07, 0x81, 0xe0, 0x03, 0xff, 0xc0, 0x01, 0xff,
    0x80, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const unsigned char BUILTIN_SDL_SYSTEM_CURSOR_NO_MASK[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x7e, 0x00, 0x01, 0xff, 0x80, 0x03,
    0xff, 0xc0, 0x07, 0xff, 0xe0, 0x0f, 0xff, 0xf0,
    0x0f, 0xc7, 0xf0, 0x1f, 0x8f, 0xf8, 0x1f, 0x1f,
    0xf8, 0x1f, 0x3e, 0xf8, 0x1f, 0x7c, 0xf8, 0x1f,
    0xf8, 0xf8, 0x1f, 0xf1, 0xf8, 0x0f, 0xe3, 0xf0,
    0x0f, 0xff, 0xf0, 0x07, 0xff, 0xe0, 0x03, 0xff,
    0xc0, 0x01, 0xff, 0x80, 0x00, 0x7e, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

BuiltinCursor BUILTIN_SDL_SYSTEM_CURSOR_NO = {
    24, 24, 12, 12, NULL,
    (const unsigned char *)&BUILTIN_SDL_SYSTEM_CURSOR_NO_DATA,
    (const unsigned char *)&BUILTIN_SDL_SYSTEM_CURSOR_NO_MASK};


/* SDL_SYSTEM_CURSOR_HAND -> hand2 */
const unsigned char BUILTIN_SDL_SYSTEM_CURSOR_HAND_DATA[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x01,
    0x80, 0x00, 0x01, 0x80, 0x00, 0x01, 0x80, 0x00,
    0x01, 0xb0, 0x00, 0x01, 0xb4, 0x00, 0x01, 0xf5,
    0x80, 0x0d, 0xf5, 0x80, 0x0d, 0xff, 0x80, 0x0d,
    0xff, 0x80, 0x0f, 0xff, 0x80, 0x0f, 0xff, 0x80,
    0x0f, 0xff, 0x80, 0x0f, 0xff, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const unsigned char BUILTIN_SDL_SYSTEM_CURSOR_HAND_MASK[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01, 0x80, 0x00, 0x03, 0xc0, 0x00, 0x03,
    0xc0, 0x00, 0x03, 0xc0, 0x00, 0x03, 0xf0, 0x00,
    0x03, 0xfe, 0x00, 0x03, 0xff, 0x80, 0x0f, 0xff,
    0xc0, 0x1f, 0xff, 0xc0, 0x1f, 0xff, 0xc0, 0x1f,
    0xff, 0xc0, 0x1f, 0xff, 0xc0, 0x1f, 0xff, 0xc0,
    0x1f, 0xff, 0xc0, 0x1f, 0xff, 0xc0, 0x0f, 0xff,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

BuiltinCursor BUILTIN_SDL_SYSTEM_CURSOR_HAND = {
    24, 24, 8, 5, NULL,
    (const unsigned char *)&BUILTIN_SDL_SYSTEM_CURSOR_HAND_DATA,
    (const unsigned char *)&BUILTIN_SDL_SYSTEM_CURSOR_HAND_MASK};


BuiltinCursor *BUILTIN_CURSORS[] = {
    &BUILTIN_SDL_SYSTEM_CURSOR_ARROW,
    &BUILTIN_SDL_SYSTEM_CURSOR_IBEAM,
    &BUILTIN_SDL_SYSTEM_CURSOR_WAIT,
    &BUILTIN_SDL_SYSTEM_CURSOR_CROSSHAIR,
    &BUILTIN_SDL_SYSTEM_CURSOR_WAITARROW,
    &BUILTIN_SDL_SYSTEM_CURSOR_SIZENWSE,
    &BUILTIN_SDL_SYSTEM_CURSOR_SIZENESW,
    &BUILTIN_SDL_SYSTEM_CURSOR_SIZEWE,
    &BUILTIN_SDL_SYSTEM_CURSOR_SIZENS,
    &BUILTIN_SDL_SYSTEM_CURSOR_SIZEALL,
    &BUILTIN_SDL_SYSTEM_CURSOR_NO,
    &BUILTIN_SDL_SYSTEM_CURSOR_HAND};

/* The mouse state */
static SDL_SIM_Mouse SDL_sim_mouse;
SDL_SIM_Mouse *SDL_SIM_GetMouse(void);
void SDL_SIM__FreeCursor(SDL_Cursor *cursor);


void SDL_SIM_MouseInit(void)
{
    SDL_SIM_Mouse *mouse = SDL_SIM_GetMouse();

    SDL_zerop(mouse);
    // printf("SDL_SIM_MouseInit\n");

    mouse->cursor_shown = SDL_TRUE;
    mouse->def_cursor = SDL_SIM_CreateSystemCursor(SDL_SYSTEM_CURSOR_ARROW);
}


void SDL_SIM__FreeCursor(SDL_Cursor *cursor)
{
    SDL_FreeSurface(cursor->surface);
    SDL_free(cursor);
}


void SDL_SIM_MouseQuit(void)
{
    SDL_Cursor *cursor, *next;
    SDL_SIM_Mouse *mouse = SDL_SIM_GetMouse();

    cursor = mouse->cursors;
    while (cursor) {
        next = cursor->next;
        SDL_SIM__FreeCursor(cursor);
        cursor = next;
    }
    mouse->cursors = NULL;
    mouse->cur_cursor = NULL;

    if (mouse->def_cursor) {
        SDL_SIM__FreeCursor(mouse->def_cursor);
        mouse->def_cursor = NULL;
    }

    /* Clear out these old pointers. */
    for (size_t i=0; i < (sizeof(BUILTIN_CURSORS) / sizeof(BUILTIN_CURSORS[0])); i++) {
        if (BUILTIN_CURSORS[i]) {
            BUILTIN_CURSORS[i]->cursor = NULL;
        }
    }
    // printf("SDL_SIM_MouseQuit\n");
}


SDL_SIM_Mouse *SDL_SIM_GetMouse(void)
{
    return &SDL_sim_mouse;
}


/* Public functions */
void SDL_SIM_SetDefaultCursor(SDL_Cursor *cursor)
{
    SDL_SIM_Mouse *mouse = SDL_SIM_GetMouse();

    mouse->def_cursor = cursor;
    // printf("SDL_SIM_SetDefaultCursor - %p", (void*)cursor);

    if (!mouse->cur_cursor) {
        SDL_SIM_SetCursor(cursor);
    }
}

SDL_Cursor *SDL_SIM_CreateCursor(const Uint8 *data, const Uint8 *mask,
                 int w, int h, int hot_x, int hot_y)
{
    SDL_Surface *surface;
    SDL_Cursor *cursor;
    int x, y;
    Uint32 *pixel;
    Uint8 datab = 0, maskb = 0;
    const Uint32 black = 0xFF000000;
    const Uint32 white = 0xFFFFFFFF;
    const Uint32 transparent = 0x00000000;

    /* Make sure the width is a multiple of 8 */
    w = ((w + 7) & ~7);

    /* Create the surface from a bitmap */
    surface = SDL_CreateRGBSurface(0, w, h, 32,
                                   0x00FF0000,
                                   0x0000FF00,
                                   0x000000FF,
                                   0xFF000000);
    if (surface == NULL) {
        return NULL;
    }
    for (y = 0; y < h; ++y) {
        pixel = (Uint32 *)((Uint8 *)surface->pixels + y * surface->pitch);
        for (x = 0; x < w; ++x) {
            if ((x % 8) == 0) {
                datab = *data++;
                maskb = *mask++;
            }
            if (maskb & 0x80) {
                *pixel++ = (datab & 0x80) ? black : white;
            } else {
                *pixel++ = (datab & 0x80) ? black : transparent;
            }
            datab <<= 1;
            maskb <<= 1;
        }
    }

    cursor = SDL_SIM_CreateColorCursor(surface, hot_x, hot_y);

    SDL_FreeSurface(surface);

    return cursor;
}

SDL_Cursor *SDL_SIM_CreateColorCursor(SDL_Surface *surface, int hot_x, int hot_y)
{
    SDL_SIM_Mouse *mouse = SDL_SIM_GetMouse();
    SDL_Surface *temp = NULL;
    SDL_Cursor *cursor;

    if (surface == NULL) {
        SDL_InvalidParamError("surface");
        return NULL;
    }

    /* Sanity check the hot spot */
    if ((hot_x < 0) || (hot_y < 0) ||
        (hot_x >= surface->w) || (hot_y >= surface->h)) {
        SDL_SetError("Cursor hot spot doesn't lie within cursor");
        // printf("SDL ERROR: Cursor hot spot doesn't lie within cursor\n");
        return NULL;
    }

    if (surface->format->format != SDL_PIXELFORMAT_ARGB8888) {
        temp = SDL_ConvertSurfaceFormat(surface, SDL_PIXELFORMAT_ARGB8888, 0);
        if (temp == NULL) {
            return NULL;
        }
        surface = temp;
    }
    else {
        temp = SDL_DuplicateSurface(surface);
    }

    cursor = SDL_static_cast(SDL_Cursor*, SDL_malloc(sizeof(SDL_Cursor)));
    cursor->surface = temp;
    cursor->hot_x = hot_x;
    cursor->hot_y = hot_y;

    if (cursor) {
        cursor->next = mouse->cursors;
        mouse->cursors = cursor;
    }

    return cursor;
}

SDL_Cursor *SDL_SIM_CreateSystemCursor(SDL_SystemCursor id)
{
    BuiltinCursor *builtin_cursor;

    // printf("SDL_SIM_CreateSystemCursor - %d", id);

    if (id >= (sizeof(BUILTIN_CURSORS) / sizeof(BUILTIN_CURSORS[0]))) {
        // TODO: maybe actually say which cursor was asked for.
        SDL_SetError("Unsupported SDL_SystemCursor.");
        // printf("SDL ERROR: Unsupported SDL_SystemCursor %d\n", id);

        return NULL;
    }

    builtin_cursor = BUILTIN_CURSORS[id];
    if (!builtin_cursor) {
        // TODO: maybe actually say which cursor was asked for.
        SDL_SetError("Unsupported SDL_SystemCursor.");
        // printf("SDL ERROR: Unsupported SDL_SystemCursor %d\n", id);

        return NULL;
    }

    if (!builtin_cursor->cursor) {
        builtin_cursor->cursor = SDL_SIM_CreateCursor(
            builtin_cursor->data,
            builtin_cursor->mask,
            builtin_cursor->width,
            builtin_cursor->height, 
            builtin_cursor->hot_x, 
            builtin_cursor->hot_y);
    }

    return builtin_cursor->cursor;
}

/* SDL_SetCursor(NULL) can be used to force the cursor redraw,
   if this is desired for any reason.  This is used when setting
   the video mode and when the SDL window gains the mouse focus.
 */
void SDL_SIM_SetCursor(SDL_Cursor *cursor)
{
    SDL_SIM_Mouse *mouse = SDL_SIM_GetMouse();

    /* Return immediately if setting the cursor to the currently set one (fixes #7151) */
    if (cursor == mouse->cur_cursor) {
        return;
    }

    // printf("SDL_SIM_SetCursor - %p\n", (void*)cursor);

    /* Set the new cursor */
    if (cursor) {
        /* Make sure the cursor is still valid for this mouse */
        if (cursor != mouse->def_cursor) {
            SDL_Cursor *found;
            for (found = mouse->cursors; found; found = found->next) {
                if (found == cursor) {
                    break;
                }
            }
            if (found == NULL) {
                SDL_SetError("Cursor not associated with the current mouse");
                // printf("SDL ERROR: Cursor not associated with the current mouse\n");
                return;
            }
        }
        mouse->cur_cursor = cursor;
    } else {
        cursor = mouse->def_cursor;
    }
}

SDL_Cursor *SDL_SIM_GetCursor(void)
{
    SDL_SIM_Mouse *mouse = SDL_SIM_GetMouse();

    if (mouse == NULL) {
        return NULL;
    }

    return mouse->cur_cursor;
}

SDL_Cursor *SDL_SIM_GetDefaultCursor(void)
{
    SDL_SIM_Mouse *mouse = SDL_SIM_GetMouse();

    if (mouse == NULL) {
        return NULL;
    }

    return mouse->def_cursor;
}

void SDL_SIM_FreeCursor(SDL_Cursor *cursor)
{
    SDL_SIM_Mouse *mouse = SDL_SIM_GetMouse();
    SDL_Cursor *curr, *prev;

    // printf("SDL_SIM_FreeCursor - %p\n", (void*)cursor);
    if (cursor == NULL) {
        return;
    }

    if (cursor == mouse->def_cursor) {
        return;
    }

    if (cursor == mouse->cur_cursor) {
        SDL_SIM_SetCursor(mouse->def_cursor);
    }

    for (prev = NULL, curr = mouse->cursors; curr;
        prev = curr, curr = curr->next) {

        if (curr == cursor) {
            if (prev) {
                prev->next = curr->next;
            } else {
                mouse->cursors = curr->next;
            }

            SDL_SIM__FreeCursor(curr);
            return;
        }
    }
}

int SDL_SIM_ShowCursor(int toggle)
{
    SDL_SIM_Mouse *mouse = SDL_SIM_GetMouse();
    SDL_bool shown;

    if (mouse == NULL) {
        return 0;
    }

    // printf("SDL_SIM_ShowCursor - %d\n", toggle);

    shown = mouse->cursor_shown;
    if (toggle >= 0) {
        if (toggle) {
            mouse->cursor_shown = SDL_TRUE;
        } else {
            mouse->cursor_shown = SDL_FALSE;
        }

        // if (mouse->cursor_shown != shown) {
        //     SDL_SIM_SetCursor(NULL);
        // }
    }
    return shown;
}

void SDL_SIM_BlitCursor(SDL_Surface *surface)
{
    SDL_SIM_BlitCursorScaled(surface, 1.0);
}

void SDL_SIM_BlitCursorScaled(SDL_Surface *surface, float scale)
{
    SDL_SIM_Mouse *mouse = SDL_SIM_GetMouse();
    SDL_Cursor *cursor;
    SDL_Rect mouse_dest;
    int x;
    int y;

    // printf("SDL_SIM_BlitCursor - ");

    if (mouse == NULL) {
        // printf("no mouse\n");
        return;
    }

    // printf("mouse - ");

    if (!mouse->cursor_shown) {
        // printf("cursor hidden\n");
        return;
    }

    // printf("cursor shown - ");
    cursor = SDL_SIM_GetCursor();

    if (cursor == NULL) {
        cursor = SDL_SIM_GetDefaultCursor();

        if (cursor == NULL) {
            // printf("no cursor\n");
            return;            
        }
    }

    // printf("cursor found - ");

    SDL_GetMouseState(&x, &y);

    mouse_dest.x = (int)((float)(x - cursor->hot_x) / scale);
    mouse_dest.y = (int)((float)(y - cursor->hot_y) / scale);
    mouse_dest.w = cursor->surface->w;
    mouse_dest.h = cursor->surface->h;
    // printf("DRAW -> %d, %d, %d, %d\n", mouse_dest.x, mouse_dest.y, mouse_dest.w, mouse_dest.h);

    SDL_BlitSurface(cursor->surface, NULL, surface, &mouse_dest);
}

#ifdef __cplusplus
}
#endif

#endif


#define SDL_BlitCursor SDL_SIM_BlitCursor
#define SDL_BlitCursorScaled SDL_SIM_BlitCursorScaled
#define SDL_SetCursor SDL_SIM_SetCursor
#define SDL_CreateCursor SDL_SIM_CreateCursor
#define SDL_CreateSystemCursor SDL_SIM_CreateSystemCursor
#define SDL_ShowCursor SDL_SIM_ShowCursor

#endif
