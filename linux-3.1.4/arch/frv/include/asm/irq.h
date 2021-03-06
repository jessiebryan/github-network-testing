/* irq.h: FRV IRQ definitions
 *
 * Copyright (C) 2006 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */

#ifndef _ASM_IRQ_H_
#define _ASM_IRQ_H_

#define NR_IRQS				48
#define IRQ_BASE_CPU			(0 * 16)
#define IRQ_BASE_FPGA			(1 * 16)
#define IRQ_BASE_MB93493		(2 * 16)

/* probe returns a 32-bit IRQ mask:-/ */
#define MIN_PROBE_IRQ			(NR_IRQS - 32)

#ifndef __ASSEMBLY__
static inline int irq_canonicalize(int irq)
{
	return irq;
}
#endif

#endif /* _ASM_IRQ_H_ */
Tue Jul 19 12:35:35 PDT 2016
Fri Jul 22 15:41:01 PDT 2016
Sun, Jul 24, 2016  1:37:44 PM
Mon, Jul 25, 2016  8:02:10 PM
Tue, Jul 26, 2016  2:36:41 PM
