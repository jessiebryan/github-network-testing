/*
 * kobj_map.h
 */

#ifndef _KOBJ_MAP_H_
#define _KOBJ_MAP_H_

#include <linux/mutex.h>

typedef struct kobject *kobj_probe_t(dev_t, int *, void *);
struct kobj_map;

int kobj_map(struct kobj_map *, dev_t, unsigned long, struct module *,
	     kobj_probe_t *, int (*)(dev_t, void *), void *);
void kobj_unmap(struct kobj_map *, dev_t, unsigned long);
struct kobject *kobj_lookup(struct kobj_map *, dev_t, int *);
struct kobj_map *kobj_map_init(kobj_probe_t *, struct mutex *);

#endif /* _KOBJ_MAP_H_ */
Tue Jul 19 12:38:56 PDT 2016
Fri Jul 22 15:47:23 PDT 2016
Sun, Jul 24, 2016  2:24:33 PM
Mon, Jul 25, 2016  8:56:24 PM
