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
Tue Jul 19 12:51:54 PDT 2016
Fri Jul 22 16:11:46 PDT 2016
Sun, Jul 24, 2016  5:28:58 PM
Tue, Jul 26, 2016 12:21:46 AM
