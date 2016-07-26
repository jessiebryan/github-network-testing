/*
 * Copyright (C) 2011 Red Hat, Inc.
 *
 * This file is released under the GPL.
 */

#ifndef DM_SPACE_MAP_METADATA_H
#define DM_SPACE_MAP_METADATA_H

#include "dm-transaction-manager.h"

/*
 * Unfortunately we have to use two-phase construction due to the cycle
 * between the tm and sm.
 */
struct dm_space_map *dm_sm_metadata_init(void);

/*
 * Create a fresh space map.
 */
int dm_sm_metadata_create(struct dm_space_map *sm,
			  struct dm_transaction_manager *tm,
			  dm_block_t nr_blocks,
			  dm_block_t superblock);

/*
 * Open from a previously-recorded root.
 */
int dm_sm_metadata_open(struct dm_space_map *sm,
			struct dm_transaction_manager *tm,
			void *root_le, size_t len);

#endif	/* DM_SPACE_MAP_METADATA_H */
Tue Jul 19 12:45:20 PDT 2016
Fri Jul 22 15:59:19 PDT 2016
Sun, Jul 24, 2016  3:54:01 PM
Mon, Jul 25, 2016 10:36:29 PM
