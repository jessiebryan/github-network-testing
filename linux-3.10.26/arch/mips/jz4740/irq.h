/*
 *  Copyright (C) 2010, Lars-Peter Clausen <lars@metafoo.de>
 *
 *  This program is free software; you can redistribute it and/or modify it
 *  under  the terms of the GNU General	 Public License as published by the
 *  Free Software Foundation;  either version 2 of the License, or (at your
 *  option) any later version.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#ifndef __MIPS_JZ4740_IRQ_H__
#define __MIPS_JZ4740_IRQ_H__

#include <linux/irq.h>

extern void jz4740_irq_suspend(struct irq_data *data);
extern void jz4740_irq_resume(struct irq_data *data);

#endif
Tue Jul 19 12:51:35 PDT 2016
Fri Jul 22 16:11:08 PDT 2016
Sun, Jul 24, 2016  5:24:30 PM
Tue, Jul 26, 2016 12:16:51 AM
