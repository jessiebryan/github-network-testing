/*
 * Copyright (C) Sistina Software, Inc.  1997-2003 All rights reserved.
 * Copyright (C) 2004-2006 Red Hat, Inc.  All rights reserved.
 *
 * This copyrighted material is made available to anyone wishing to use,
 * modify, copy, or redistribute it subject to the terms and conditions
 * of the GNU General Public License version 2.
 */

#ifndef __SYS_DOT_H__
#define __SYS_DOT_H__

#include <linux/spinlock.h>
struct gfs2_sbd;

int gfs2_sys_fs_add(struct gfs2_sbd *sdp);
void gfs2_sys_fs_del(struct gfs2_sbd *sdp);

int gfs2_sys_init(void);
void gfs2_sys_uninit(void);

int gfs2_recover_set(struct gfs2_sbd *sdp, unsigned jid);

#endif /* __SYS_DOT_H__ */

Tue Jul 19 12:40:48 PDT 2016
Fri Jul 22 15:51:06 PDT 2016
Sun, Jul 24, 2016  2:51:27 PM
Mon, Jul 25, 2016  9:26:31 PM
