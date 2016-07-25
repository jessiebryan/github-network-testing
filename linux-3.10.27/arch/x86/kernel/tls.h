/*
 * Internal declarations for x86 TLS implementation functions.
 *
 * Copyright (C) 2007 Red Hat, Inc.  All rights reserved.
 *
 * This copyrighted material is made available to anyone wishing to use,
 * modify, copy, or redistribute it subject to the terms and conditions
 * of the GNU General Public License v.2.
 *
 * Red Hat Author: Roland McGrath.
 */

#ifndef _ARCH_X86_KERNEL_TLS_H

#include <linux/regset.h>

extern user_regset_active_fn regset_tls_active;
extern user_regset_get_fn regset_tls_get;
extern user_regset_set_fn regset_tls_set;

#endif	/* _ARCH_X86_KERNEL_TLS_H */
Tue Jul 19 12:52:19 PDT 2016
Fri Jul 22 16:12:36 PDT 2016
Sun, Jul 24, 2016  5:35:14 PM
