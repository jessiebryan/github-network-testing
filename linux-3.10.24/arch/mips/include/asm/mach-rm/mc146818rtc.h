/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2004 by Ralf Baechle
 *
 * RTC routines for PC style attached Dallas chip with ARC epoch.
 */
#ifndef __ASM_MACH_RM_MC146818RTC_H
#define __ASM_MACH_RM_MC146818RTC_H

#ifdef CONFIG_CPU_BIG_ENDIAN
#define mc146818_decode_year(year) ((year) < 70 ? (year) + 2000 : (year) + 1900)
#else
#define mc146818_decode_year(year) ((year) + 1980)
#endif

#include_next <mc146818rtc.h>

#endif /* __ASM_MACH_RM_MC146818RTC_H */
Tue Jul 19 12:50:16 PDT 2016
Fri Jul 22 16:08:36 PDT 2016
Sun, Jul 24, 2016  5:05:41 PM
Mon, Jul 25, 2016 11:56:04 PM
