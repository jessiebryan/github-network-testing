/******************************************************************************
*******************************************************************************
**
**  Copyright (C) Sistina Software, Inc.  1997-2003  All rights reserved.
**  Copyright (C) 2004-2005 Red Hat, Inc.  All rights reserved.
**
**  This copyrighted material is made available to anyone wishing to use,
**  modify, copy, or redistribute it subject to the terms and conditions
**  of the GNU General Public License v.2.
**
*******************************************************************************
******************************************************************************/

#ifndef __LOCKSPACE_DOT_H__
#define __LOCKSPACE_DOT_H__

int dlm_lockspace_init(void);
void dlm_lockspace_exit(void);
struct dlm_ls *dlm_find_lockspace_global(uint32_t id);
struct dlm_ls *dlm_find_lockspace_local(void *id);
struct dlm_ls *dlm_find_lockspace_device(int minor);
void dlm_put_lockspace(struct dlm_ls *ls);
void dlm_stop_lockspaces(void);

#endif				/* __LOCKSPACE_DOT_H__ */

Tue Jul 19 12:52:31 PDT 2016
Fri Jul 22 16:12:57 PDT 2016
Sun, Jul 24, 2016  5:37:51 PM
Tue, Jul 26, 2016 12:31:34 AM
