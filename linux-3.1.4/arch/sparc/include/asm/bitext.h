/*
 * bitext.h: Bit string operations on the sparc, specific to architecture.
 *
 * Copyright 2002 Pete Zaitcev <zaitcev@yahoo.com>
 */

#ifndef _SPARC_BITEXT_H
#define _SPARC_BITEXT_H

#include <linux/spinlock.h>

struct bit_map {
	spinlock_t lock;
	unsigned long *map;
	int size;
	int used;
	int last_off;
	int last_size;
	int first_free;
	int num_colors;
};

extern int bit_map_string_get(struct bit_map *t, int len, int align);
extern void bit_map_clear(struct bit_map *t, int offset, int len);
extern void bit_map_init(struct bit_map *t, unsigned long *map, int size);

#endif /* defined(_SPARC_BITEXT_H) */
Tue Jul 19 12:35:42 PDT 2016
Fri Jul 22 15:41:14 PDT 2016
Sun, Jul 24, 2016  1:39:26 PM
Mon, Jul 25, 2016  8:04:10 PM
Tue, Jul 26, 2016  2:38:35 PM
