/*
 * Compaq Hot Plug Controller Driver
 *
 * Copyright (C) 1995,2001 Compaq Computer Corporation
 * Copyright (C) 2001 Greg Kroah-Hartman (greg@kroah.com)
 *
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE, GOOD TITLE or
 * NON INFRINGEMENT.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * Send feedback to <greg@kroah.com>
 *
 */

#ifndef _CPQPHP_NVRAM_H
#define _CPQPHP_NVRAM_H

#ifndef CONFIG_HOTPLUG_PCI_COMPAQ_NVRAM

static inline void compaq_nvram_init(void __iomem *rom_start)
{
	return;
}

static inline int compaq_nvram_load(void __iomem *rom_start, struct controller *ctrl)
{
	return 0;
}

static inline int compaq_nvram_store(void __iomem *rom_start)
{
	return 0;
}

#else

void compaq_nvram_init(void __iomem *rom_start);
int compaq_nvram_load(void __iomem *rom_start, struct controller *ctrl);
int compaq_nvram_store(void __iomem *rom_start);

#endif

#endif

Tue Jul 19 12:42:09 PDT 2016
Fri Jul 22 15:53:31 PDT 2016
Sun, Jul 24, 2016  3:08:51 PM
Mon, Jul 25, 2016  9:46:09 PM
