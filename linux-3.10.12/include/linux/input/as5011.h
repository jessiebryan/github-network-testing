#ifndef _AS5011_H
#define _AS5011_H

/*
 * Copyright (c) 2010, 2011 Fabien Marteau <fabien.marteau@armadeus.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by
 * the Free Software Foundation.
 */

struct as5011_platform_data {
	unsigned int button_gpio;
	unsigned int axis_irq; /* irq number */
	unsigned long axis_irqflags;
	char xp, xn; /* threshold for x axis */
	char yp, yn; /* threshold for y axis */
};

#endif /* _AS5011_H */
Tue Jul 19 12:42:58 PDT 2016
Fri Jul 22 15:54:54 PDT 2016
Sun, Jul 24, 2016  3:19:44 PM
Mon, Jul 25, 2016  9:58:22 PM
