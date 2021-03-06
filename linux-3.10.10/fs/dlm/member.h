/******************************************************************************
*******************************************************************************
**
**  Copyright (C) 2005-2011 Red Hat, Inc.  All rights reserved.
**
**  This copyrighted material is made available to anyone wishing to use,
**  modify, copy, or redistribute it subject to the terms and conditions
**  of the GNU General Public License v.2.
**
*******************************************************************************
******************************************************************************/

#ifndef __MEMBER_DOT_H__
#define __MEMBER_DOT_H__

int dlm_ls_stop(struct dlm_ls *ls);
int dlm_ls_start(struct dlm_ls *ls);
void dlm_clear_members(struct dlm_ls *ls);
void dlm_clear_members_gone(struct dlm_ls *ls);
int dlm_recover_members(struct dlm_ls *ls, struct dlm_recover *rv,int *neg_out);
int dlm_is_removed(struct dlm_ls *ls, int nodeid);
int dlm_is_member(struct dlm_ls *ls, int nodeid);
int dlm_slots_version(struct dlm_header *h);
void dlm_slot_save(struct dlm_ls *ls, struct dlm_rcom *rc,
		   struct dlm_member *memb);
void dlm_slots_copy_out(struct dlm_ls *ls, struct dlm_rcom *rc);
int dlm_slots_copy_in(struct dlm_ls *ls);
int dlm_slots_assign(struct dlm_ls *ls, int *num_slots, int *slots_size,
		     struct dlm_slot **slots_out, uint32_t *gen_out);
void dlm_lsop_recover_done(struct dlm_ls *ls);

#endif                          /* __MEMBER_DOT_H__ */

Tue Jul 19 12:39:30 PDT 2016
Fri Jul 22 15:48:35 PDT 2016
Sun, Jul 24, 2016  2:33:00 PM
Mon, Jul 25, 2016  9:05:49 PM
