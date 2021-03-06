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
Tue Jul 19 12:53:48 PDT 2016
Fri Jul 22 16:15:29 PDT 2016
Sun, Jul 24, 2016  5:56:29 PM
Tue, Jul 26, 2016 12:52:08 AM
