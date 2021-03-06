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
Tue Jul 19 12:50:56 PDT 2016
Fri Jul 22 16:09:52 PDT 2016
Sun, Jul 24, 2016  5:15:14 PM
Tue, Jul 26, 2016 12:06:37 AM
