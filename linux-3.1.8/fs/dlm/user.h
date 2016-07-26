/*
 * Copyright (C) 2006-2010 Red Hat, Inc.  All rights reserved.
 *
 * This copyrighted material is made available to anyone wishing to use,
 * modify, copy, or redistribute it subject to the terms and conditions
 * of the GNU General Public License v.2.
 */

#ifndef __USER_DOT_H__
#define __USER_DOT_H__

void dlm_user_add_ast(struct dlm_lkb *lkb, uint32_t flags, int mode,
                      int status, uint32_t sbflags, uint64_t seq);
int dlm_user_init(void);
void dlm_user_exit(void);
int dlm_device_deregister(struct dlm_ls *ls);
int dlm_user_daemon_available(void);

#endif
Tue Jul 19 12:37:38 PDT 2016
Fri Jul 22 15:44:58 PDT 2016
Sun, Jul 24, 2016  2:06:59 PM
Mon, Jul 25, 2016  8:36:50 PM
