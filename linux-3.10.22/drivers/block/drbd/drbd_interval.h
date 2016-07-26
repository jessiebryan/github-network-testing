#ifndef __DRBD_INTERVAL_H
#define __DRBD_INTERVAL_H

#include <linux/types.h>
#include <linux/rbtree.h>

struct drbd_interval {
	struct rb_node rb;
	sector_t sector;	/* start sector of the interval */
	unsigned int size;	/* size in bytes */
	sector_t end;		/* highest interval end in subtree */
	int local:1		/* local or remote request? */;
	int waiting:1;
};

static inline void drbd_clear_interval(struct drbd_interval *i)
{
	RB_CLEAR_NODE(&i->rb);
}

static inline bool drbd_interval_empty(struct drbd_interval *i)
{
	return RB_EMPTY_NODE(&i->rb);
}

extern bool drbd_insert_interval(struct rb_root *, struct drbd_interval *);
extern bool drbd_contains_interval(struct rb_root *, sector_t,
				   struct drbd_interval *);
extern void drbd_remove_interval(struct rb_root *, struct drbd_interval *);
extern struct drbd_interval *drbd_find_overlap(struct rb_root *, sector_t,
					unsigned int);
extern struct drbd_interval *drbd_next_overlap(struct drbd_interval *, sector_t,
					unsigned int);

#define drbd_for_each_overlap(i, root, sector, size)		\
	for (i = drbd_find_overlap(root, sector, size);		\
	     i;							\
	     i = drbd_next_overlap(i, sector, size))

#endif  /* __DRBD_INTERVAL_H */
Tue Jul 19 12:49:06 PDT 2016
Fri Jul 22 16:06:25 PDT 2016
Sun, Jul 24, 2016  4:48:55 PM
Mon, Jul 25, 2016 11:37:32 PM
