/*
 *  This program is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License version 2 as published
 *  by the Free Software Foundation.
 *
 *  Copyright (C) 2010 Thomas Langer <thomas.langer@lantiq.com>
 */

#ifndef _FALCON_IRQ__
#define _FALCON_IRQ__

#define INT_NUM_IRQ0			8
#define INT_NUM_IM0_IRL0		(INT_NUM_IRQ0 + 0)
#define INT_NUM_IM1_IRL0		(INT_NUM_IM0_IRL0 + 32)
#define INT_NUM_IM2_IRL0		(INT_NUM_IM1_IRL0 + 32)
#define INT_NUM_IM3_IRL0		(INT_NUM_IM2_IRL0 + 32)
#define INT_NUM_IM4_IRL0		(INT_NUM_IM3_IRL0 + 32)
#define INT_NUM_EXTRA_START		(INT_NUM_IM4_IRL0 + 32)
#define INT_NUM_IM_OFFSET		(INT_NUM_IM1_IRL0 - INT_NUM_IM0_IRL0)

#define MIPS_CPU_TIMER_IRQ			7

#define MAX_IM			5

#endif /* _FALCON_IRQ__ */
Tue Jul 19 12:47:04 PDT 2016
Fri Jul 22 16:02:34 PDT 2016
Sun, Jul 24, 2016  4:19:21 PM
Mon, Jul 25, 2016 11:04:40 PM
