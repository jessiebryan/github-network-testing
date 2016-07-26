#ifndef __LINUX_PHONEDEV_H
#define __LINUX_PHONEDEV_H

#include <linux/types.h>

#ifdef __KERNEL__

#include <linux/poll.h>

struct phone_device {
	struct phone_device *next;
	const struct file_operations *f_op;
	int (*open) (struct phone_device *, struct file *);
	int board;		/* Device private index */
	int minor;
};

extern int phonedev_init(void);
#define PHONE_MAJOR	100
extern int phone_register_device(struct phone_device *, int unit);
#define PHONE_UNIT_ANY	-1
extern void phone_unregister_device(struct phone_device *);

#endif
#endif
Tue Jul 19 12:43:00 PDT 2016
Fri Jul 22 15:54:57 PDT 2016
Sun, Jul 24, 2016  3:20:04 PM
Mon, Jul 25, 2016  9:58:45 PM
