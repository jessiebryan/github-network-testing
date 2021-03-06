/******************************************************************************
*******************************************************************************
**
**  Copyright (C) 2005-2010 Red Hat, Inc.  All rights reserved.
**
**  This copyrighted material is made available to anyone wishing to use,
**  modify, copy, or redistribute it subject to the terms and conditions
**  of the GNU General Public License v.2.
**
*******************************************************************************
******************************************************************************/

#ifndef __ASTD_DOT_H__
#define __ASTD_DOT_H__

void dlm_del_ast(struct dlm_lkb *lkb);
int dlm_add_lkb_callback(struct dlm_lkb *lkb, uint32_t flags, int mode,
                         int status, uint32_t sbflags, uint64_t seq);
int dlm_rem_lkb_callback(struct dlm_ls *ls, struct dlm_lkb *lkb,
                         struct dlm_callback *cb, int *resid);
void dlm_add_cb(struct dlm_lkb *lkb, uint32_t flags, int mode, int status,
                uint32_t sbflags);

void dlm_callback_work(struct work_struct *work);
int dlm_callback_start(struct dlm_ls *ls);
void dlm_callback_stop(struct dlm_ls *ls);
void dlm_callback_suspend(struct dlm_ls *ls);
void dlm_callback_resume(struct dlm_ls *ls);

#endif


Tue Jul 19 12:46:43 PDT 2016
Fri Jul 22 16:01:56 PDT 2016
Sun, Jul 24, 2016  4:14:23 PM
Mon, Jul 25, 2016 10:59:09 PM
