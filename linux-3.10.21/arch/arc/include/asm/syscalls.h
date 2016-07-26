/*
 * Copyright (C) 2004, 2007-2010, 2011-2012 Synopsys, Inc. (www.synopsys.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _ASM_ARC_SYSCALLS_H
#define _ASM_ARC_SYSCALLS_H  1

#ifdef __KERNEL__

#include <linux/compiler.h>
#include <linux/linkage.h>
#include <linux/types.h>

int sys_clone_wrapper(int, int, int, int, int);
int sys_cacheflush(uint32_t, uint32_t uint32_t);
int sys_arc_settls(void *);
int sys_arc_gettls(void);

#include <asm-generic/syscalls.h>

#endif	/* __KERNEL__ */

#endif
Tue Jul 19 12:48:11 PDT 2016
Fri Jul 22 16:04:41 PDT 2016
Sun, Jul 24, 2016  4:35:47 PM
Mon, Jul 25, 2016 11:22:54 PM
