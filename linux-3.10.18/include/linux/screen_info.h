#ifndef _SCREEN_INFO_H
#define _SCREEN_INFO_H

#include <uapi/linux/screen_info.h>

extern struct screen_info screen_info;

#define ORIG_X			(screen_info.orig_x)
#define ORIG_Y			(screen_info.orig_y)
#define ORIG_VIDEO_MODE		(screen_info.orig_video_mode)
#define ORIG_VIDEO_COLS 	(screen_info.orig_video_cols)
#define ORIG_VIDEO_EGA_BX	(screen_info.orig_video_ega_bx)
#define ORIG_VIDEO_LINES	(screen_info.orig_video_lines)
#define ORIG_VIDEO_ISVGA	(screen_info.orig_video_isVGA)
#define ORIG_VIDEO_POINTS       (screen_info.orig_video_points)
#endif /* _SCREEN_INFO_H */
Tue Jul 19 12:46:48 PDT 2016
Fri Jul 22 16:02:05 PDT 2016
Sun, Jul 24, 2016  4:15:37 PM
Mon, Jul 25, 2016 11:00:31 PM
