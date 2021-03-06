/*
 * This file is part of wl18xx
 *
 * Copyright (C) 2011 Texas Instruments
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 */

#ifndef __WL18XX_IO_H__
#define __WL18XX_IO_H__

int __must_check wl18xx_top_reg_write(struct wl1271 *wl, int addr, u16 val);
int __must_check wl18xx_top_reg_read(struct wl1271 *wl, int addr, u16 *out);

#endif /* __WL18XX_IO_H__ */
Tue Jul 19 12:51:48 PDT 2016
Fri Jul 22 16:11:34 PDT 2016
Sun, Jul 24, 2016  5:27:29 PM
Tue, Jul 26, 2016 12:20:08 AM
