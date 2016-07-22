
/*
 *  linux/arch/arm/mach-nomadik/clock.h
 *
 *  Copyright (C) 2009 Alessandro Rubini
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
struct clk {
	unsigned long		rate;
};

int __init clk_init(void);
Tue Jul 19 12:37:52 PDT 2016
Fri Jul 22 15:45:20 PDT 2016
