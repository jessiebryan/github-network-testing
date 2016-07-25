/* include/video/platform_lcd.h
 *
 * Copyright 2008 Simtec Electronics
 *	Ben Dooks <ben@simtec.co.uk>
 *
 * Generic platform-device LCD power control interface.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
*/

struct plat_lcd_data;
struct fb_info;

struct plat_lcd_data {
	int	(*probe)(struct plat_lcd_data *);
	void	(*set_power)(struct plat_lcd_data *, unsigned int power);
	int	(*match_fb)(struct plat_lcd_data *, struct fb_info *);
};

Tue Jul 19 12:41:37 PDT 2016
Fri Jul 22 15:52:43 PDT 2016
Sun, Jul 24, 2016  3:02:52 PM
