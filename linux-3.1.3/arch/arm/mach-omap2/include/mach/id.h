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
Tue Jul 19 12:34:42 PDT 2016
Fri Jul 22 15:39:43 PDT 2016
Sun, Jul 24, 2016  1:28:31 PM
Mon, Jul 25, 2016  6:38:24 PM
Mon, Jul 25, 2016  7:51:17 PM
Tue, Jul 26, 2016  2:26:30 PM
