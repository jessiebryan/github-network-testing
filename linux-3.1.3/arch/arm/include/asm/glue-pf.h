/*
 *  arch/arm/include/asm/glue-pf.h
 *
 *  Copyright (C) 1997-1999 Russell King
 *  Copyright (C) 2000-2002 Deep Blue Solutions Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef ASM_GLUE_PF_H
#define ASM_GLUE_PF_H

#include <asm/glue.h>

/*
 *	Prefetch Abort Model
 *	================
 *
 *	We have the following to choose from:
 *	  legacy	- no IFSR, no IFAR
 *	  v6		- ARMv6: IFSR, no IFAR
 *	  v7		- ARMv7: IFSR and IFAR
 */

#undef CPU_PABORT_HANDLER
#undef MULTI_PABORT

#ifdef CONFIG_CPU_PABRT_LEGACY
# ifdef CPU_PABORT_HANDLER
#  define MULTI_PABORT 1
# else
#  define CPU_PABORT_HANDLER legacy_pabort
# endif
#endif

#ifdef CONFIG_CPU_PABRT_V6
# ifdef CPU_PABORT_HANDLER
#  define MULTI_PABORT 1
# else
#  define CPU_PABORT_HANDLER v6_pabort
# endif
#endif

#ifdef CONFIG_CPU_PABRT_V7
# ifdef CPU_PABORT_HANDLER
#  define MULTI_PABORT 1
# else
#  define CPU_PABORT_HANDLER v7_pabort
# endif
#endif

#ifndef CPU_PABORT_HANDLER
#error Unknown prefetch abort handler type
#endif

#endif
Tue Jul 19 12:34:40 PDT 2016
Fri Jul 22 15:39:39 PDT 2016
Sun, Jul 24, 2016  1:28:02 PM
Mon, Jul 25, 2016  6:37:50 PM
Mon, Jul 25, 2016  7:50:43 PM
Tue, Jul 26, 2016  2:25:58 PM
