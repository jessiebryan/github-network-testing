/*
 * kref.h - library routines for handling generic reference counted objects
 *
 * Copyright (C) 2004 Greg Kroah-Hartman <greg@kroah.com>
 * Copyright (C) 2004 IBM Corp.
 *
 * based on kobject.h which was:
 * Copyright (C) 2002-2003 Patrick Mochel <mochel@osdl.org>
 * Copyright (C) 2002-2003 Open Source Development Labs
 *
 * This file is released under the GPLv2.
 *
 */

#ifndef _KREF_H_
#define _KREF_H_

#include <linux/types.h>

struct kref {
	atomic_t refcount;
};

void kref_init(struct kref *kref);
void kref_get(struct kref *kref);
int kref_put(struct kref *kref, void (*release) (struct kref *kref));
int kref_sub(struct kref *kref, unsigned int count,
	     void (*release) (struct kref *kref));

#endif /* _KREF_H_ */
Tue Jul 19 12:37:05 PDT 2016
Fri Jul 22 15:43:56 PDT 2016
Sun, Jul 24, 2016  1:59:28 PM
Mon, Jul 25, 2016  8:27:51 PM
