/*
 * Interface for NOR flash driver whose high address lines are latched
 *
 * Copyright © 2008 MontaVista Software, Inc. <source@mvista.com>
 *
 * This file is licensed under the terms of the GNU General Public License
 * version 2. This program is licensed "as is" without any warranty of any
 * kind, whether express or implied.
 */
#ifndef __LATCH_ADDR_FLASH__
#define __LATCH_ADDR_FLASH__

struct map_info;
struct mtd_partition;

struct latch_addr_flash_data {
	unsigned int		width;
	unsigned int		size;

	int			(*init)(void *data, int cs);
	void			(*done)(void *data);
	void			(*set_window)(unsigned long offset, void *data);
	void			*data;

	unsigned int		nr_parts;
	struct mtd_partition	*parts;
};

#endif
Tue Jul 19 12:35:23 PDT 2016
Fri Jul 22 15:40:36 PDT 2016
Sun, Jul 24, 2016  1:34:52 PM
Mon, Jul 25, 2016  7:58:47 PM
Tue, Jul 26, 2016  2:33:31 PM
