/* MN10300 Memory management context
 *
 * Copyright (C) 2007 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 * - Derived from include/asm-frv/mmu.h
 */

#ifndef _ASM_MMU_H
#define _ASM_MMU_H

/*
 * MMU context
 */
typedef struct {
	unsigned long	tlbpid[NR_CPUS];	/* TLB PID for this process on
						 * each CPU */
} mm_context_t;

#endif /* _ASM_MMU_H */
Tue Jul 19 12:40:31 PDT 2016
Fri Jul 22 15:50:34 PDT 2016
Sun, Jul 24, 2016  2:47:28 PM
Mon, Jul 25, 2016  9:22:02 PM
