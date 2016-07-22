/*
 * Intel Low Power Subsystem clocks.
 *
 * Copyright (C) 2013, Intel Corporation
 * Authors: Mika Westerberg <mika.westerberg@linux.intel.com>
 *          Rafael J. Wysocki <rafael.j.wysocki@intel.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __CLK_LPSS_H
#define __CLK_LPSS_H

struct lpss_clk_data {
	const char *name;
	struct clk *clk;
};

extern int lpt_clk_init(void);

#endif /* __CLK_LPSS_H */
Tue Jul 19 12:48:03 PDT 2016
Fri Jul 22 16:04:27 PDT 2016
