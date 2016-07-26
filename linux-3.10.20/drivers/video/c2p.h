/*
 *  Fast C2P (Chunky-to-Planar) Conversion
 *
 *  Copyright (C) 2003-2008 Geert Uytterhoeven
 *
 *  This file is subject to the terms and conditions of the GNU General Public
 *  License. See the file COPYING in the main directory of this archive
 *  for more details.
 */

#include <linux/types.h>

extern void c2p_planar(void *dst, const void *src, u32 dx, u32 dy, u32 width,
		       u32 height, u32 dst_nextline, u32 dst_nextplane,
		       u32 src_nextline, u32 bpp);

extern void c2p_iplan2(void *dst, const void *src, u32 dx, u32 dy, u32 width,
		       u32 height, u32 dst_nextline, u32 src_nextline,
		       u32 bpp);
Tue Jul 19 12:47:59 PDT 2016
Fri Jul 22 16:04:18 PDT 2016
Sun, Jul 24, 2016  4:32:43 PM
Mon, Jul 25, 2016 11:19:30 PM
