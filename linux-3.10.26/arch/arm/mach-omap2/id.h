/*
 * OMAP2 CPU identification code
 *
 * Copyright (C) 2010 Kan-Ru Chen <kanru@0xlab.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef OMAP2_ARCH_ID_H
#define OMAP2_ARCH_ID_H

struct omap_die_id {
	u32 id_0;
	u32 id_1;
	u32 id_2;
	u32 id_3;
};

void omap_get_die_id(struct omap_die_id *odi);

#endif
Tue Jul 19 12:51:27 PDT 2016
Fri Jul 22 16:10:52 PDT 2016
Sun, Jul 24, 2016  5:22:36 PM
Tue, Jul 26, 2016 12:14:46 AM
