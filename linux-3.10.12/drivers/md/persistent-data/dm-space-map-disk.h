/*
 * Copyright (C) 2011 Red Hat, Inc.
 *
 * This file is released under the GPL.
 */

#ifndef _LINUX_DM_SPACE_MAP_DISK_H
#define _LINUX_DM_SPACE_MAP_DISK_H

#include "dm-block-manager.h"

struct dm_space_map;
struct dm_transaction_manager;

/*
 * Unfortunately we have to use two-phase construction due to the cycle
 * between the tm and sm.
 */
struct dm_space_map *dm_sm_disk_create(struct dm_transaction_manager *tm,
				       dm_block_t nr_blocks);

struct dm_space_map *dm_sm_disk_open(struct dm_transaction_manager *tm,
				     void *root, size_t len);

#endif /* _LINUX_DM_SPACE_MAP_DISK_H */
Tue Jul 19 12:42:47 PDT 2016
Fri Jul 22 15:54:34 PDT 2016
Sun, Jul 24, 2016  3:17:06 PM
Mon, Jul 25, 2016  9:55:28 PM
