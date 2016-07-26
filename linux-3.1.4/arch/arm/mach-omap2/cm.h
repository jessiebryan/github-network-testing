/*
 * OMAP2+ Clock Management prototypes
 *
 * Copyright (C) 2007-2009 Texas Instruments, Inc.
 * Copyright (C) 2007-2009 Nokia Corporation
 *
 * Written by Paul Walmsley
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __ARCH_ASM_MACH_OMAP2_CM_H
#define __ARCH_ASM_MACH_OMAP2_CM_H

/*
 * MAX_MODULE_READY_TIME: max duration in microseconds to wait for the
 * PRCM to request that a module exit the inactive state in the case of
 * OMAP2 & 3.
 * In the case of OMAP4 this is the max duration in microseconds for the
 * module to reach the functionnal state from an inactive state.
 */
#define MAX_MODULE_READY_TIME		2000

#endif
Tue Jul 19 12:35:31 PDT 2016
Fri Jul 22 15:40:51 PDT 2016
Sun, Jul 24, 2016  1:36:45 PM
Mon, Jul 25, 2016  8:01:01 PM
Tue, Jul 26, 2016  2:35:36 PM
