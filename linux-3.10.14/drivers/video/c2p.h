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
Tue Jul 19 12:44:12 PDT 2016
Fri Jul 22 15:57:11 PDT 2016
Sun, Jul 24, 2016  3:37:21 PM
Mon, Jul 25, 2016 10:17:58 PM
