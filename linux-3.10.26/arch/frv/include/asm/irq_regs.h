/* FRV per-CPU frame pointer holder
 *
 * Copyright (C) 2006 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */

#ifndef _ASM_IRQ_REGS_H
#define _ASM_IRQ_REGS_H

/*
 * Per-cpu current frame pointer - the location of the last exception frame on
 * the stack
 * - on FRV, GR28 is dedicated to keeping a pointer to the current exception
 *   frame
 */
#define ARCH_HAS_OWN_IRQ_REGS

#ifndef __ASSEMBLY__
#define get_irq_regs() (__frame)
#endif

#endif /* _ASM_IRQ_REGS_H */
Tue Jul 19 12:51:31 PDT 2016
Fri Jul 22 16:10:59 PDT 2016
Sun, Jul 24, 2016  5:23:27 PM
Tue, Jul 26, 2016 12:15:41 AM
