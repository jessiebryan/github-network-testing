/*
 * linux/include/kmsg_dump.h
 *
 * Copyright (C) 2009 Net Insight AB
 *
 * Author: Simon Kagstrom <simon.kagstrom@netinsight.net>
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file COPYING in the main directory of this archive
 * for more details.
 */
#ifndef _LINUX_KMSG_DUMP_H
#define _LINUX_KMSG_DUMP_H

#include <linux/errno.h>
#include <linux/list.h>

enum kmsg_dump_reason {
	KMSG_DUMP_OOPS,
	KMSG_DUMP_PANIC,
	KMSG_DUMP_KEXEC,
	KMSG_DUMP_RESTART,
	KMSG_DUMP_HALT,
	KMSG_DUMP_POWEROFF,
	KMSG_DUMP_EMERG,
};

/**
 * struct kmsg_dumper - kernel crash message dumper structure
 * @dump:	The callback which gets called on crashes. The buffer is passed
 * 		as two sections, where s1 (length l1) contains the older
 * 		messages and s2 (length l2) contains the newer.
 * @list:	Entry in the dumper list (private)
 * @registered:	Flag that specifies if this is already registered
 */
struct kmsg_dumper {
	void (*dump)(struct kmsg_dumper *dumper, enum kmsg_dump_reason reason,
			const char *s1, unsigned long l1,
			const char *s2, unsigned long l2);
	struct list_head list;
	int registered;
};

#ifdef CONFIG_PRINTK
void kmsg_dump(enum kmsg_dump_reason reason);

int kmsg_dump_register(struct kmsg_dumper *dumper);

int kmsg_dump_unregister(struct kmsg_dumper *dumper);
#else
static inline void kmsg_dump(enum kmsg_dump_reason reason)
{
}

static inline int kmsg_dump_register(struct kmsg_dumper *dumper)
{
	return -EINVAL;
}

static inline int kmsg_dump_unregister(struct kmsg_dumper *dumper)
{
	return -EINVAL;
}
#endif

#endif /* _LINUX_KMSG_DUMP_H */
Tue Jul 19 12:33:39 PDT 2016
Fri Jul 22 15:38:22 PDT 2016
Sun, Jul 24, 2016  1:18:13 PM
Mon, Jul 25, 2016  6:26:03 PM
Mon, Jul 25, 2016  7:39:13 PM
Tue, Jul 26, 2016  2:15:04 PM
