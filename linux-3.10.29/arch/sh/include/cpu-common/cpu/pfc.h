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
Tue Jul 19 12:53:34 PDT 2016
Fri Jul 22 16:15:02 PDT 2016
Sun, Jul 24, 2016  5:53:12 PM
Tue, Jul 26, 2016 12:48:31 AM
