/*
 * This is included by init/main.c to check for architecture-dependent bugs.
 *
 * Copyright (C) 2007  Maciej W. Rozycki
 *
 * Needs:
 *	void check_bugs(void);
 */
#ifndef _ASM_BUGS_H
#define _ASM_BUGS_H

#include <linux/bug.h>
#include <linux/delay.h>
#include <linux/smp.h>

#include <asm/cpu.h>
#include <asm/cpu-info.h>

extern int daddiu_bug;

extern void check_bugs64_early(void);

extern void check_bugs32(void);
extern void check_bugs64(void);

static inline void check_bugs_early(void)
{
#ifdef CONFIG_64BIT
	check_bugs64_early();
#endif
}

static inline void check_bugs(void)
{
	unsigned int cpu = smp_processor_id();

	cpu_data[cpu].udelay_val = loops_per_jiffy;
	check_bugs32();
#ifdef CONFIG_64BIT
	check_bugs64();
#endif
}

static inline int r4k_daddiu_bug(void)
{
#ifdef CONFIG_64BIT
	WARN_ON(daddiu_bug < 0);
	return daddiu_bug != 0;
#else
	return 0;
#endif
}

#endif /* _ASM_BUGS_H */
Tue Jul 19 12:52:12 PDT 2016
Fri Jul 22 16:12:22 PDT 2016
Sun, Jul 24, 2016  5:33:24 PM
Tue, Jul 26, 2016 12:26:41 AM
