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
Tue Jul 19 12:52:30 PDT 2016
Fri Jul 22 16:12:56 PDT 2016
Sun, Jul 24, 2016  5:37:42 PM
Tue, Jul 26, 2016 12:31:25 AM
