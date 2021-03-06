#ifndef __NOUVEAU_TIMER_H__
#define __NOUVEAU_TIMER_H__

#include <core/subdev.h>
#include <core/device.h>

struct nouveau_alarm {
	struct list_head head;
	u64 timestamp;
	void (*func)(struct nouveau_alarm *);
};

static inline void
nouveau_alarm_init(struct nouveau_alarm *alarm,
		   void (*func)(struct nouveau_alarm *))
{
	INIT_LIST_HEAD(&alarm->head);
	alarm->func = func;
}

bool nouveau_timer_wait_eq(void *, u64 nsec, u32 addr, u32 mask, u32 data);
bool nouveau_timer_wait_ne(void *, u64 nsec, u32 addr, u32 mask, u32 data);
bool nouveau_timer_wait_cb(void *, u64 nsec, bool (*func)(void *), void *data);
void nouveau_timer_alarm(void *, u32 nsec, struct nouveau_alarm *);

#define NV_WAIT_DEFAULT 2000000000ULL
#define nv_wait(o,a,m,v)                                                       \
	nouveau_timer_wait_eq((o), NV_WAIT_DEFAULT, (a), (m), (v))
#define nv_wait_ne(o,a,m,v)                                                    \
	nouveau_timer_wait_ne((o), NV_WAIT_DEFAULT, (a), (m), (v))
#define nv_wait_cb(o,c,d)                                                      \
	nouveau_timer_wait_cb((o), NV_WAIT_DEFAULT, (c), (d))

struct nouveau_timer {
	struct nouveau_subdev base;
	u64  (*read)(struct nouveau_timer *);
	void (*alarm)(struct nouveau_timer *, u64 time, struct nouveau_alarm *);
};

static inline struct nouveau_timer *
nouveau_timer(void *obj)
{
	return (void *)nv_device(obj)->subdev[NVDEV_SUBDEV_TIMER];
}

#define nouveau_timer_create(p,e,o,d)                                          \
	nouveau_subdev_create_((p), (e), (o), 0, "PTIMER", "timer",            \
			       sizeof(**d), (void **)d)
#define nouveau_timer_destroy(p)                                               \
	nouveau_subdev_destroy(&(p)->base)
#define nouveau_timer_init(p)                                                  \
	nouveau_subdev_init(&(p)->base)
#define nouveau_timer_fini(p,s)                                                \
	nouveau_subdev_fini(&(p)->base, (s))

int nouveau_timer_create_(struct nouveau_object *, struct nouveau_engine *,
			  struct nouveau_oclass *, int size, void **);

extern struct nouveau_oclass nv04_timer_oclass;

#endif
Tue Jul 19 12:41:17 PDT 2016
Fri Jul 22 15:52:07 PDT 2016
Sun, Jul 24, 2016  2:58:23 PM
Mon, Jul 25, 2016  9:34:22 PM
