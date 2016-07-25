/*
 * Copyright (C) 2004 Red Hat, Inc. All rights reserved.
 *
 * This file is released under the GPL.
 *
 * Multipath.
 */

#ifndef	DM_MPATH_H
#define	DM_MPATH_H

struct dm_dev;

struct dm_path {
	struct dm_dev *dev;	/* Read-only */
	void *pscontext;	/* For path-selector use */
};

/* Callback for hwh_pg_init_fn to use when complete */
void dm_pg_init_complete(struct dm_path *path, unsigned err_flags);

#endif
Tue Jul 19 12:41:19 PDT 2016
Fri Jul 22 15:52:09 PDT 2016
Sun, Jul 24, 2016  2:58:40 PM
