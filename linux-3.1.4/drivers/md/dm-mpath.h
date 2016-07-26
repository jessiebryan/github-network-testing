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
Tue Jul 19 12:35:46 PDT 2016
Fri Jul 22 15:41:22 PDT 2016
Sun, Jul 24, 2016  1:40:25 PM
Mon, Jul 25, 2016  8:05:21 PM
Tue, Jul 26, 2016  2:39:42 PM
