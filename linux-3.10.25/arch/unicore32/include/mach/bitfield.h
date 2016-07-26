/*
 * linux/arch/unicore32/include/mach/bitfield.h
 *
 * Code specific to PKUnity SoC and UniCore ISA
 *
 * Copyright (C) 2001-2010 GUAN Xue-tao
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __MACH_PUV3_BITFIELD_H__
#define __MACH_PUV3_BITFIELD_H__

#ifndef __ASSEMBLY__
#define UData(Data)	((unsigned long) (Data))
#else
#define UData(Data)	(Data)
#endif

#define FIELD(val, vmask, vshift)	(((val) & ((UData(1) << (vmask)) - 1)) << (vshift))
#define FMASK(vmask, vshift)		(((UData(1) << (vmask)) - 1) << (vshift))

#endif /* __MACH_PUV3_BITFIELD_H__ */
Tue Jul 19 12:51:01 PDT 2016
Fri Jul 22 16:10:02 PDT 2016
Sun, Jul 24, 2016  5:16:22 PM
Tue, Jul 26, 2016 12:07:55 AM
