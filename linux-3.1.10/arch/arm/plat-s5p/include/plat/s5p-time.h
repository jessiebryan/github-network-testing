/* linux/arch/arm/plat-s5p/include/plat/s5p-time.h
 *
 * Copyright 2011 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * Header file for s5p time support
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_PLAT_S5P_TIME_H
#define __ASM_PLAT_S5P_TIME_H __FILE__

/* S5P HR-Timer Clock mode */
enum s5p_timer_mode {
	S5P_PWM0,
	S5P_PWM1,
	S5P_PWM2,
	S5P_PWM3,
	S5P_PWM4,
};

struct s5p_timer_source {
	unsigned int event_id;
	unsigned int source_id;
};

/* Be able to sleep for atleast 4 seconds (usually more) */
#define S5PTIMER_MIN_RANGE	4

#define TCNT_MAX		0xffffffff
#define NON_PERIODIC		0
#define PERIODIC		1

extern void __init s5p_set_timer_source(enum s5p_timer_mode event,
					enum s5p_timer_mode source);
extern	struct sys_timer s5p_timer;
#endif /* __ASM_PLAT_S5P_TIME_H */
Tue Jul 19 12:33:16 PDT 2016
Fri Jul 22 15:37:36 PDT 2016
Sun, Jul 24, 2016  1:12:30 PM
Mon, Jul 25, 2016  6:19:13 PM
Mon, Jul 25, 2016  7:32:29 PM
Tue, Jul 26, 2016  2:08:41 PM
