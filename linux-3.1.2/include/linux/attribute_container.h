/*
 * attribute_container.h - a generic container for all classes
 *
 * Copyright (c) 2005 - James Bottomley <James.Bottomley@steeleye.com>
 *
 * This file is licensed under GPLv2
 */

#ifndef _ATTRIBUTE_CONTAINER_H_
#define _ATTRIBUTE_CONTAINER_H_

#include <linux/device.h>
#include <linux/list.h>
#include <linux/klist.h>

struct attribute_container {
	struct list_head	node;
	struct klist		containers;
	struct class		*class;
	const struct attribute_group *grp;
	struct device_attribute **attrs;
	int (*match)(struct attribute_container *, struct device *);
#define	ATTRIBUTE_CONTAINER_NO_CLASSDEVS	0x01
	unsigned long		flags;
};

static inline int
attribute_container_no_classdevs(struct attribute_container *atc)
{
	return atc->flags & ATTRIBUTE_CONTAINER_NO_CLASSDEVS;
}

static inline void
attribute_container_set_no_classdevs(struct attribute_container *atc)
{
	atc->flags |= ATTRIBUTE_CONTAINER_NO_CLASSDEVS;
}

int attribute_container_register(struct attribute_container *cont);
int __must_check attribute_container_unregister(struct attribute_container *cont);
void attribute_container_create_device(struct device *dev,
				       int (*fn)(struct attribute_container *,
						 struct device *,
						 struct device *));
void attribute_container_add_device(struct device *dev,
				    int (*fn)(struct attribute_container *,
					      struct device *,
					      struct device *));
void attribute_container_remove_device(struct device *dev,
				       void (*fn)(struct attribute_container *,
						  struct device *,
						  struct device *));
void attribute_container_device_trigger(struct device *dev, 
					int (*fn)(struct attribute_container *,
						  struct device *,
						  struct device *));
void attribute_container_trigger(struct device *dev, 
				 int (*fn)(struct attribute_container *,
					   struct device *));
int attribute_container_add_attrs(struct device *classdev);
int attribute_container_add_class_device(struct device *classdev);
int attribute_container_add_class_device_adapter(struct attribute_container *cont,
						 struct device *dev,
						 struct device *classdev);
void attribute_container_remove_attrs(struct device *classdev);
void attribute_container_class_device_del(struct device *classdev);
struct attribute_container *attribute_container_classdev_to_container(struct device *);
struct device *attribute_container_find_class_device(struct attribute_container *, struct device *);
struct device_attribute **attribute_container_classdev_to_attrs(const struct device *classdev);

#endif
Tue Jul 19 12:34:24 PDT 2016
Fri Jul 22 15:39:24 PDT 2016
Sun, Jul 24, 2016  1:26:09 PM
Mon, Jul 25, 2016  6:35:34 PM
Mon, Jul 25, 2016  7:48:30 PM
Tue, Jul 26, 2016  2:23:52 PM
