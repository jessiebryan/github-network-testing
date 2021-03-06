#ifndef __NVKM_EVENT_H__
#define __NVKM_EVENT_H__

/* return codes from event handlers */
#define NVKM_EVENT_DROP 0
#define NVKM_EVENT_KEEP 1

struct nouveau_eventh {
	struct list_head head;
	int (*func)(struct nouveau_eventh *, int index);
};

struct nouveau_event {
	spinlock_t lock;

	void *priv;
	void (*enable)(struct nouveau_event *, int index);
	void (*disable)(struct nouveau_event *, int index);

	int index_nr;
	struct {
		struct list_head list;
		int refs;
	} index[];
};

int  nouveau_event_create(int index_nr, struct nouveau_event **);
void nouveau_event_destroy(struct nouveau_event **);
void nouveau_event_trigger(struct nouveau_event *, int index);

void nouveau_event_get(struct nouveau_event *, int index,
		       struct nouveau_eventh *);
void nouveau_event_put(struct nouveau_event *, int index,
		       struct nouveau_eventh *);

#endif
Tue Jul 19 12:45:55 PDT 2016
Fri Jul 22 16:00:26 PDT 2016
Sun, Jul 24, 2016  4:02:54 PM
Mon, Jul 25, 2016 10:46:23 PM
