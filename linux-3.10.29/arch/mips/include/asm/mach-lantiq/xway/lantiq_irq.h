/*
 *  This program is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License version 2 as published
 *  by the Free Software Foundation.
 *
 *  Copyright (C) 2010 John Crispin <blogic@openwrt.org>
 */

#ifndef _LANTIQ_XWAY_IRQ_H__
#define _LANTIQ_XWAY_IRQ_H__

#define INT_NUM_IRQ0		8
#define INT_NUM_IM0_IRL0	(INT_NUM_IRQ0 + 0)
#define INT_NUM_IM1_IRL0	(INT_NUM_IRQ0 + 32)
#define INT_NUM_IM2_IRL0	(INT_NUM_IRQ0 + 64)
#define INT_NUM_IM3_IRL0	(INT_NUM_IRQ0 + 96)
#define INT_NUM_IM4_IRL0	(INT_NUM_IRQ0 + 128)
#define INT_NUM_IM_OFFSET	(INT_NUM_IM1_IRL0 - INT_NUM_IM0_IRL0)

#define LTQ_DMA_CH0_INT		(INT_NUM_IM2_IRL0)

#define MIPS_CPU_TIMER_IRQ	7

#define MAX_IM			5

#endif
Tue Jul 19 12:53:30 PDT 2016
Fri Jul 22 16:14:54 PDT 2016
Sun, Jul 24, 2016  5:52:11 PM
Tue, Jul 26, 2016 12:47:25 AM
