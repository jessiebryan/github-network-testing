/*
 * SH Pin Function Control Initialization
 *
 * Copyright (C) 2012  Renesas Solutions Corp.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __ARCH_SH_CPU_PFC_H__
#define __ARCH_SH_CPU_PFC_H__

#include <linux/types.h>

struct resource;

int sh_pfc_register(const char *name,
		    struct resource *resource, u32 num_resources);

#endif /* __ARCH_SH_CPU_PFC_H__ */
Tue Jul 19 12:45:15 PDT 2016
Fri Jul 22 15:59:09 PDT 2016
Sun, Jul 24, 2016  3:52:42 PM
Mon, Jul 25, 2016 10:35:02 PM
