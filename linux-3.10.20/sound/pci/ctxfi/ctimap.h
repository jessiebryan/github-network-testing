/**
 * Copyright (C) 2008, Creative Technology Ltd. All Rights Reserved.
 *
 * This source file is released under GPL v2 license (no other versions).
 * See the COPYING file included in the main directory of this source
 * distribution for the license terms and conditions.
 *
 * @File	ctimap.h
 *
 * @Brief
 * This file contains the definition of generic input mapper operations
 * for input mapper management.
 *
 * @Author	Liu Chun
 * @Date 	May 23 2008
 *
 */

#ifndef CTIMAP_H
#define CTIMAP_H

#include <linux/list.h>

struct imapper {
	unsigned short slot; /* the id of the slot containing input data */
	unsigned short user; /* the id of the user resource consuming data */
	unsigned short addr; /* the input mapper ram id */
	unsigned short next; /* the next input mapper ram id */
	struct list_head	list;
};

int input_mapper_add(struct list_head *mappers, struct imapper *entry,
		     int (*map_op)(void *, struct imapper *), void *data);

int input_mapper_delete(struct list_head *mappers, struct imapper *entry,
		     int (*map_op)(void *, struct imapper *), void *data);

void free_input_mapper_list(struct list_head *mappers);

#endif /* CTIMAP_H */
Tue Jul 19 12:48:09 PDT 2016
Fri Jul 22 16:04:38 PDT 2016
Sun, Jul 24, 2016  4:35:24 PM
Mon, Jul 25, 2016 11:22:28 PM
