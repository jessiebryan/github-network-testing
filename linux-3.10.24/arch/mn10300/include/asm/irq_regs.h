/* MN10300 IRQ registers pointer definition
 *
 * Copyright (C) 2007 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public Licence
 * as published by the Free Software Foundation; either version
 * 2 of the Licence, or (at your option) any later version.
 */
#ifndef _ASM_IRQ_REGS_H
#define _ASM_IRQ_REGS_H

/*
 * Per-cpu current frame pointer - the location of the last exception frame on
 * the stack
 */
#define ARCH_HAS_OWN_IRQ_REGS

#ifndef __ASSEMBLY__
static inline __attribute__((const))
struct pt_regs *get_irq_regs(void)
{
	return current_frame();
}
#endif

#endif /* _ASM_IRQ_REGS_H */
Tue Jul 19 12:50:17 PDT 2016
Fri Jul 22 16:08:38 PDT 2016
Sun, Jul 24, 2016  5:05:56 PM
Mon, Jul 25, 2016 11:56:21 PM
