/*
 * Copyright (C) 2009 IBM Corporation
 * Author: Mimi Zohar <zohar@us.ibm.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 2 of the License.
 */

#ifndef _LINUX_INTEGRITY_H
#define _LINUX_INTEGRITY_H

#include <linux/fs.h>

enum integrity_status {
	INTEGRITY_PASS = 0,
	INTEGRITY_FAIL,
	INTEGRITY_NOLABEL,
	INTEGRITY_NOXATTRS,
	INTEGRITY_UNKNOWN,
};

/* List of EVM protected security xattrs */
#ifdef CONFIG_INTEGRITY
extern struct integrity_iint_cache *integrity_inode_get(struct inode *inode);
extern void integrity_inode_free(struct inode *inode);

#else
static inline struct integrity_iint_cache *
				integrity_inode_get(struct inode *inode)
{
	return NULL;
}

static inline void integrity_inode_free(struct inode *inode)
{
	return;
}
#endif /* CONFIG_INTEGRITY */
#endif /* _LINUX_INTEGRITY_H */
Tue Jul 19 12:44:15 PDT 2016
Fri Jul 22 15:57:18 PDT 2016
Sun, Jul 24, 2016  3:38:12 PM
Mon, Jul 25, 2016 10:18:54 PM
