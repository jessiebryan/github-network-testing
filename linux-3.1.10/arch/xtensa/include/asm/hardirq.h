/*
 * include/asm-xtensa/hardirq.h
 *
 * This file is subject to the terms and conditions of the GNU General
 * Public License.  See the file "COPYING" in the main directory of
 * this archive for more details.
 *
 * Copyright (C) 2002 - 2005 Tensilica Inc.
 */

#ifndef _XTENSA_HARDIRQ_H
#define _XTENSA_HARDIRQ_H

void ack_bad_irq(unsigned int irq);
#define ack_bad_irq ack_bad_irq

#include <asm-generic/hardirq.h>

#endif	/* _XTENSA_HARDIRQ_H */
Tue Jul 19 12:33:27 PDT 2016
Fri Jul 22 15:37:58 PDT 2016
Sun, Jul 24, 2016  1:15:18 PM
Mon, Jul 25, 2016  6:22:33 PM
Mon, Jul 25, 2016  7:35:47 PM
