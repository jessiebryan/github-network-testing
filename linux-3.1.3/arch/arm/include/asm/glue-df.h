/*
 *  arch/arm/include/asm/glue-df.h
 *
 *  Copyright (C) 1997-1999 Russell King
 *  Copyright (C) 2000-2002 Deep Blue Solutions Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef ASM_GLUE_DF_H
#define ASM_GLUE_DF_H

#include <asm/glue.h>

/*
 *	Data Abort Model
 *	================
 *
 *	We have the following to choose from:
 *	  arm6          - ARM6 style
 *	  arm7		- ARM7 style
 *	  v4_early	- ARMv4 without Thumb early abort handler
 *	  v4t_late	- ARMv4 with Thumb late abort handler
 *	  v4t_early	- ARMv4 with Thumb early abort handler
 *	  v5tej_early	- ARMv5 with Thumb and Java early abort handler
 *	  xscale	- ARMv5 with Thumb with Xscale extensions
 *	  v6_early	- ARMv6 generic early abort handler
 *	  v7_early	- ARMv7 generic early abort handler
 */
#undef CPU_DABORT_HANDLER
#undef MULTI_DABORT

#if defined(CONFIG_CPU_ARM610)
# ifdef CPU_DABORT_HANDLER
#  define MULTI_DABORT 1
# else
#  define CPU_DABORT_HANDLER cpu_arm6_data_abort
# endif
#endif

#if defined(CONFIG_CPU_ARM710)
# ifdef CPU_DABORT_HANDLER
#  define MULTI_DABORT 1
# else
#  define CPU_DABORT_HANDLER cpu_arm7_data_abort
# endif
#endif

#ifdef CONFIG_CPU_ABRT_LV4T
# ifdef CPU_DABORT_HANDLER
#  define MULTI_DABORT 1
# else
#  define CPU_DABORT_HANDLER v4t_late_abort
# endif
#endif

#ifdef CONFIG_CPU_ABRT_EV4
# ifdef CPU_DABORT_HANDLER
#  define MULTI_DABORT 1
# else
#  define CPU_DABORT_HANDLER v4_early_abort
# endif
#endif

#ifdef CONFIG_CPU_ABRT_EV4T
# ifdef CPU_DABORT_HANDLER
#  define MULTI_DABORT 1
# else
#  define CPU_DABORT_HANDLER v4t_early_abort
# endif
#endif

#ifdef CONFIG_CPU_ABRT_EV5TJ
# ifdef CPU_DABORT_HANDLER
#  define MULTI_DABORT 1
# else
#  define CPU_DABORT_HANDLER v5tj_early_abort
# endif
#endif

#ifdef CONFIG_CPU_ABRT_EV5T
# ifdef CPU_DABORT_HANDLER
#  define MULTI_DABORT 1
# else
#  define CPU_DABORT_HANDLER v5t_early_abort
# endif
#endif

#ifdef CONFIG_CPU_ABRT_EV6
# ifdef CPU_DABORT_HANDLER
#  define MULTI_DABORT 1
# else
#  define CPU_DABORT_HANDLER v6_early_abort
# endif
#endif

#ifdef CONFIG_CPU_ABRT_EV7
# ifdef CPU_DABORT_HANDLER
#  define MULTI_DABORT 1
# else
#  define CPU_DABORT_HANDLER v7_early_abort
# endif
#endif

#ifndef CPU_DABORT_HANDLER
#error Unknown data abort handler type
#endif

#endif
Tue Jul 19 12:34:40 PDT 2016
Fri Jul 22 15:39:39 PDT 2016
Sun, Jul 24, 2016  1:28:02 PM
Mon, Jul 25, 2016  6:37:50 PM
Mon, Jul 25, 2016  7:50:43 PM
Tue, Jul 26, 2016  2:25:58 PM
