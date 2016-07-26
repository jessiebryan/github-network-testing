/*
 * Copyright (C) 2012 Red Hat, Inc.
 *
 * This file is released under the GPL.
 */

#ifndef DM_CACHE_BLOCK_TYPES_H
#define DM_CACHE_BLOCK_TYPES_H

#include "persistent-data/dm-block-manager.h"

/*----------------------------------------------------------------*/

/*
 * It's helpful to get sparse to differentiate between indexes into the
 * origin device, indexes into the cache device, and indexes into the
 * discard bitset.
 */

typedef dm_block_t __bitwise__ dm_oblock_t;
typedef uint32_t __bitwise__ dm_cblock_t;
typedef dm_block_t __bitwise__ dm_dblock_t;

static inline dm_oblock_t to_oblock(dm_block_t b)
{
	return (__force dm_oblock_t) b;
}

static inline dm_block_t from_oblock(dm_oblock_t b)
{
	return (__force dm_block_t) b;
}

static inline dm_cblock_t to_cblock(uint32_t b)
{
	return (__force dm_cblock_t) b;
}

static inline uint32_t from_cblock(dm_cblock_t b)
{
	return (__force uint32_t) b;
}

static inline dm_dblock_t to_dblock(dm_block_t b)
{
	return (__force dm_dblock_t) b;
}

static inline dm_block_t from_dblock(dm_dblock_t b)
{
	return (__force dm_block_t) b;
}

#endif /* DM_CACHE_BLOCK_TYPES_H */
Tue Jul 19 12:44:44 PDT 2016
Fri Jul 22 15:58:07 PDT 2016
Sun, Jul 24, 2016  3:44:47 PM
Mon, Jul 25, 2016 10:26:12 PM
