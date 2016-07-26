/*
 * Copyright 2009 IBM Corporation.
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version
 *  2 of the License, or (at your option) any later version.
 */

#ifndef __ICS_H
#define __ICS_H

#define XIVE_ADDR_MASK		0x7FFULL

extern void wsp_init_irq(void);

extern int wsp_ics_alloc_irq(struct device_node *dn, int num);
extern void wsp_ics_free_irq(struct device_node *dn, unsigned int irq);

#endif /* __ICS_H */
Tue Jul 19 12:35:41 PDT 2016
Fri Jul 22 15:41:11 PDT 2016
Sun, Jul 24, 2016  1:39:05 PM
Mon, Jul 25, 2016  8:03:46 PM
Tue, Jul 26, 2016  2:38:12 PM
