/*
 * arch/arm/mach-spear6xx/include/mach/hardware.h
 *
 * Hardware definitions for SPEAr6xx machine family
 *
 * Copyright (C) 2009 ST Microelectronics
 * Rajeev Kumar<rajeev-dlh.kumar@st.com>
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2. This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __MACH_HARDWARE_H
#define __MACH_HARDWARE_H

#include <plat/hardware.h>
#include <mach/spear.h>

/* Vitual to physical translation of statically mapped space */
#define IO_ADDRESS(x)		(x | 0xF0000000)

#endif /* __MACH_HARDWARE_H */
Tue Jul 19 12:36:06 PDT 2016
Fri Jul 22 15:42:00 PDT 2016
Sun, Jul 24, 2016  1:45:17 PM
Mon, Jul 25, 2016  8:11:04 PM
Tue, Jul 26, 2016  2:45:02 PM
