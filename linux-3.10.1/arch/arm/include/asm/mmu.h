#ifndef __ARM_MMU_H
#define __ARM_MMU_H

#ifdef CONFIG_MMU

typedef struct {
#ifdef CONFIG_CPU_HAS_ASID
	atomic64_t	id;
#endif
	unsigned int	vmalloc_seq;
} mm_context_t;

#ifdef CONFIG_CPU_HAS_ASID
#define ASID_BITS	8
#define ASID_MASK	((~0ULL) << ASID_BITS)
#define ASID(mm)	((mm)->context.id.counter & ~ASID_MASK)
#else
#define ASID(mm)	(0)
#endif

#else

/*
 * From nommu.h:
 *  Copyright (C) 2002, David McCullough <davidm@snapgear.com>
 *  modified for 2.6 by Hyok S. Choi <hyok.choi@samsung.com>
 */
typedef struct {
	unsigned long	end_brk;
} mm_context_t;

#endif

#endif
Tue Jul 19 12:38:26 PDT 2016
Fri Jul 22 15:46:24 PDT 2016
Sun, Jul 24, 2016  2:17:36 PM
Mon, Jul 25, 2016  8:48:39 PM
