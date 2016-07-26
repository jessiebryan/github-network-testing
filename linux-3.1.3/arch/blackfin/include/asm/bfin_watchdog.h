/*
 * bfin_watchdog.h - Blackfin watchdog definitions
 *
 * Copyright 2006-2010 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef _BFIN_WATCHDOG_H
#define _BFIN_WATCHDOG_H

/* Bit in SWRST that indicates boot caused by watchdog */
#define SWRST_RESET_WDOG 0x4000

/* Bit in WDOG_CTL that indicates watchdog has expired (WDR0) */
#define WDOG_EXPIRED 0x8000

/* Masks for WDEV field in WDOG_CTL register */
#define ICTL_RESET   0x0
#define ICTL_NMI     0x2
#define ICTL_GPI     0x4
#define ICTL_NONE    0x6
#define ICTL_MASK    0x6

/* Masks for WDEN field in WDOG_CTL register */
#define WDEN_MASK    0x0FF0
#define WDEN_ENABLE  0x0000
#define WDEN_DISABLE 0x0AD0

#endif
Tue Jul 19 12:34:45 PDT 2016
Fri Jul 22 15:39:49 PDT 2016
Sun, Jul 24, 2016  1:29:09 PM
Mon, Jul 25, 2016  6:39:09 PM
Mon, Jul 25, 2016  7:52:01 PM
Tue, Jul 26, 2016  2:27:12 PM
