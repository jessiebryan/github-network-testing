/*
 * eisa_bus.h interface between the eisa BA driver and the bus enumerator
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 *
 * Copyright (c) 2002 Daniel Engstrom <5116@telia.com>
 *
 */

#ifndef ASM_EISA_H
#define ASM_EISA_H

extern void eisa_make_irq_level(int num);
extern void eisa_make_irq_edge(int num);
extern int eisa_enumerator(unsigned long eeprom_addr,
			   struct resource *io_parent, 
			   struct resource *mem_parent);
extern int eisa_eeprom_init(unsigned long addr);

#endif
Tue Jul 19 12:44:34 PDT 2016
Fri Jul 22 15:57:53 PDT 2016
Sun, Jul 24, 2016  3:42:54 PM
Mon, Jul 25, 2016 10:24:07 PM
