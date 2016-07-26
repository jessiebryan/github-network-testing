/*
 *  Port on Texas Instruments TMS320C6x architecture
 *
 *  Copyright (C) 2004, 2009, 2010 Texas Instruments Incorporated
 *  Author: Aurelien Jacquiot (aurelien.jacquiot@jaluna.com)
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 */

#ifndef _ASM_C6X_HARDIRQ_H
#define _ASM_C6X_HARDIRQ_H

extern void ack_bad_irq(int irq);
#define ack_bad_irq ack_bad_irq

#include <asm-generic/hardirq.h>

#endif /* _ASM_C6X_HARDIRQ_H */
Tue Jul 19 12:53:26 PDT 2016
Fri Jul 22 16:14:45 PDT 2016
Sun, Jul 24, 2016  5:51:09 PM
Tue, Jul 26, 2016 12:46:15 AM
