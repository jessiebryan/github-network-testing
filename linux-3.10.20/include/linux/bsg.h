#ifndef BSG_H
#define BSG_H

#include <uapi/linux/bsg.h>


#if defined(CONFIG_BLK_DEV_BSG)
struct bsg_class_device {
	struct device *class_dev;
	struct device *parent;
	int minor;
	struct request_queue *queue;
	struct kref ref;
	void (*release)(struct device *);
};

extern int bsg_register_queue(struct request_queue *q,
			      struct device *parent, const char *name,
			      void (*release)(struct device *));
extern void bsg_unregister_queue(struct request_queue *);
#else
static inline int bsg_register_queue(struct request_queue *q,
				     struct device *parent, const char *name,
				     void (*release)(struct device *))
{
	return 0;
}
static inline void bsg_unregister_queue(struct request_queue *q)
{
}
#endif

#endif
Tue Jul 19 12:48:01 PDT 2016
Fri Jul 22 16:04:22 PDT 2016
Sun, Jul 24, 2016  4:33:18 PM
Mon, Jul 25, 2016 11:20:08 PM
