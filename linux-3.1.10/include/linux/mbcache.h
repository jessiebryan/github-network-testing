/*
  File: linux/mbcache.h

  (C) 2001 by Andreas Gruenbacher, <a.gruenbacher@computer.org>
*/

struct mb_cache_entry {
	struct list_head		e_lru_list;
	struct mb_cache			*e_cache;
	unsigned short			e_used;
	unsigned short			e_queued;
	struct block_device		*e_bdev;
	sector_t			e_block;
	struct list_head		e_block_list;
	struct {
		struct list_head	o_list;
		unsigned int		o_key;
	} e_index;
};

struct mb_cache {
	struct list_head		c_cache_list;
	const char			*c_name;
	atomic_t			c_entry_count;
	int				c_max_entries;
	int				c_bucket_bits;
	struct kmem_cache		*c_entry_cache;
	struct list_head		*c_block_hash;
	struct list_head		*c_index_hash;
};

/* Functions on caches */

struct mb_cache *mb_cache_create(const char *, int);
void mb_cache_shrink(struct block_device *);
void mb_cache_destroy(struct mb_cache *);

/* Functions on cache entries */

struct mb_cache_entry *mb_cache_entry_alloc(struct mb_cache *, gfp_t);
int mb_cache_entry_insert(struct mb_cache_entry *, struct block_device *,
			  sector_t, unsigned int);
void mb_cache_entry_release(struct mb_cache_entry *);
void mb_cache_entry_free(struct mb_cache_entry *);
struct mb_cache_entry *mb_cache_entry_get(struct mb_cache *,
					  struct block_device *,
					  sector_t);
struct mb_cache_entry *mb_cache_entry_find_first(struct mb_cache *cache,
						 struct block_device *, 
						 unsigned int);
struct mb_cache_entry *mb_cache_entry_find_next(struct mb_cache_entry *,
						struct block_device *, 
						unsigned int);
Tue Jul 19 12:33:40 PDT 2016
Fri Jul 22 15:38:22 PDT 2016
Sun, Jul 24, 2016  1:18:16 PM
Mon, Jul 25, 2016  6:26:06 PM
Mon, Jul 25, 2016  7:39:15 PM
Tue, Jul 26, 2016  2:15:07 PM
