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
Tue Jul 19 12:45:20 PDT 2016
Fri Jul 22 15:59:19 PDT 2016
Sun, Jul 24, 2016  3:54:00 PM
Mon, Jul 25, 2016 10:36:29 PM
