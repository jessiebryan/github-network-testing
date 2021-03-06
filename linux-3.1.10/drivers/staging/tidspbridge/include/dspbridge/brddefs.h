/*
 * brddefs.h
 *
 * DSP-BIOS Bridge driver support functions for TI OMAP processors.
 *
 * Global BRD constants and types, shared between DSP API and Bridge driver.
 *
 * Copyright (C) 2005-2006 Texas Instruments, Inc.
 *
 * This package is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * THIS PACKAGE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef BRDDEFS_
#define BRDDEFS_

/* platform status values */
#define BRD_STOPPED     0x0	/* No Monitor Loaded, Not running. */
#define BRD_IDLE        0x1	/* Monitor Loaded, but suspended. */
#define BRD_RUNNING     0x2	/* Monitor loaded, and executing. */
#define BRD_UNKNOWN     0x3	/* Board state is indeterminate. */
#define BRD_LOADED      0x5
#define BRD_SLEEP_TRANSITION 0x6	/* Sleep transition in progress */
#define BRD_HIBERNATION 0x7	/* MPU initiated hibernation */
#define BRD_RETENTION     0x8	/* Retention mode */
#define BRD_DSP_HIBERNATION     0x9	/* DSP initiated hibernation */
#define BRD_ERROR		0xA	/* Board state is Error */

/* BRD Object */
struct brd_object;

#endif /* BRDDEFS_ */
Tue Jul 19 12:33:35 PDT 2016
Fri Jul 22 15:38:13 PDT 2016
Sun, Jul 24, 2016  1:17:05 PM
Mon, Jul 25, 2016  6:24:41 PM
Mon, Jul 25, 2016  7:37:52 PM
Tue, Jul 26, 2016  2:13:46 PM
