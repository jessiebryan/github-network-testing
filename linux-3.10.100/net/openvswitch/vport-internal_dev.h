/*
 * Copyright (c) 2007-2011 Nicira, Inc.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of version 2 of the GNU General Public
 * License as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA
 */

#ifndef VPORT_INTERNAL_DEV_H
#define VPORT_INTERNAL_DEV_H 1

#include "datapath.h"
#include "vport.h"

int ovs_is_internal_dev(const struct net_device *);
struct vport *ovs_internal_dev_get_vport(struct net_device *);

#endif /* vport-internal_dev.h */
Tue Jul 19 12:40:19 PDT 2016
Fri Jul 22 15:50:10 PDT 2016
Sun, Jul 24, 2016  2:44:35 PM
Mon, Jul 25, 2016  9:18:44 PM
