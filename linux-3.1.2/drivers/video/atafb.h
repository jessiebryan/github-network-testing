#ifndef _VIDEO_ATAFB_H
#define _VIDEO_ATAFB_H

void atafb_mfb_copyarea(struct fb_info *info, u_long next_line, int sy, int sx, int dy,
			int dx, int height, int width);
void atafb_mfb_fillrect(struct fb_info *info, u_long next_line, u32 color,
			int sy, int sx, int height, int width);
void atafb_mfb_linefill(struct fb_info *info, u_long next_line,
			int dy, int dx, u32 width,
			const u8 *data, u32 bgcolor, u32 fgcolor);

void atafb_iplan2p2_copyarea(struct fb_info *info, u_long next_line, int sy, int sx, int dy,
			     int dx, int height, int width);
void atafb_iplan2p2_fillrect(struct fb_info *info, u_long next_line, u32 color,
			     int sy, int sx, int height, int width);
void atafb_iplan2p2_linefill(struct fb_info *info, u_long next_line,
			     int dy, int dx, u32 width,
			     const u8 *data, u32 bgcolor, u32 fgcolor);

void atafb_iplan2p4_copyarea(struct fb_info *info, u_long next_line, int sy, int sx, int dy,
			     int dx, int height, int width);
void atafb_iplan2p4_fillrect(struct fb_info *info, u_long next_line, u32 color,
			     int sy, int sx, int height, int width);
void atafb_iplan2p4_linefill(struct fb_info *info, u_long next_line,
			     int dy, int dx, u32 width,
			     const u8 *data, u32 bgcolor, u32 fgcolor);

void atafb_iplan2p8_copyarea(struct fb_info *info, u_long next_line, int sy, int sx, int dy,
			     int dx, int height, int width);
void atafb_iplan2p8_fillrect(struct fb_info *info, u_long next_line, u32 color,
			     int sy, int sx, int height, int width);
void atafb_iplan2p8_linefill(struct fb_info *info, u_long next_line,
			     int dy, int dx, u32 width,
			     const u8 *data, u32 bgcolor, u32 fgcolor);

#endif /* _VIDEO_ATAFB_H */
Tue Jul 19 12:34:21 PDT 2016
Fri Jul 22 15:39:19 PDT 2016
Sun, Jul 24, 2016  1:25:37 PM
Mon, Jul 25, 2016  6:34:55 PM
Mon, Jul 25, 2016  7:47:52 PM
Tue, Jul 26, 2016  2:23:17 PM
