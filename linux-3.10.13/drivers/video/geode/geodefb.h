/*
 * drivers/video/geode/geodefb.h
 *   -- Geode framebuffer driver
 *
 * Copyright (C) 2005 Arcom Control Systems Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */
#ifndef __GEODEFB_H__
#define __GEODEFB_H__

struct geodefb_info;

struct geode_dc_ops {
	void (*set_mode)(struct fb_info *);
	void (*set_palette_reg)(struct fb_info *, unsigned, unsigned, unsigned, unsigned);
};

struct geode_vid_ops {
	void (*set_dclk)(struct fb_info *);
	void (*configure_display)(struct fb_info *);
	int  (*blank_display)(struct fb_info *, int blank_mode);
};

struct geodefb_par {
	int enable_crt;
	int panel_x; /* dimensions of an attached flat panel, non-zero => enable panel */
	int panel_y;
	void __iomem *dc_regs;
	void __iomem *vid_regs;
	struct geode_dc_ops  *dc_ops;
	struct geode_vid_ops *vid_ops;
};

#endif /* !__GEODEFB_H__ */
Tue Jul 19 12:43:33 PDT 2016
Fri Jul 22 15:55:59 PDT 2016
Sun, Jul 24, 2016  3:28:09 PM
Mon, Jul 25, 2016 10:07:42 PM
