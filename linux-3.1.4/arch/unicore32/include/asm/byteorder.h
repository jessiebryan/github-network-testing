/*
 * linux/arch/unicore32/include/asm/byteorder.h
 *
 * Code specific to PKUnity SoC and UniCore ISA
 *
 * Copyright (C) 2001-2010 GUAN Xue-tao
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * UniCore ONLY support Little Endian mode, the data bus is connected such
 * that byte accesses appear as:
 *  0 = d0...d7, 1 = d8...d15, 2 = d16...d23, 3 = d24...d31
 * and word accesses (data or instruction) appear as:
 *  d0...d31
 */
#ifndef __UNICORE_BYTEORDER_H__
#define __UNICORE_BYTEORDER_H__

#include <linux/byteorder/little_endian.h>

#endif

Tue Jul 19 12:35:44 PDT 2016
Fri Jul 22 15:41:17 PDT 2016
Sun, Jul 24, 2016  1:39:46 PM
Mon, Jul 25, 2016  8:04:35 PM
Tue, Jul 26, 2016  2:38:58 PM
