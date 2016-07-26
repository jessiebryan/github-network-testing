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
Tue Jul 19 12:45:27 PDT 2016
Fri Jul 22 15:59:33 PDT 2016
Sun, Jul 24, 2016  3:55:49 PM
Mon, Jul 25, 2016 10:38:29 PM
