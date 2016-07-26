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
Tue Jul 19 12:51:12 PDT 2016
Fri Jul 22 16:10:24 PDT 2016
Sun, Jul 24, 2016  5:19:04 PM
Tue, Jul 26, 2016 12:10:52 AM
