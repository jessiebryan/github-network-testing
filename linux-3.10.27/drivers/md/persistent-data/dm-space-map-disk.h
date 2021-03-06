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
Tue Jul 19 12:52:22 PDT 2016
Fri Jul 22 16:12:42 PDT 2016
Sun, Jul 24, 2016  5:35:53 PM
Tue, Jul 26, 2016 12:29:24 AM
