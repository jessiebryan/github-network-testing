/*
 * Copyright (C) 2004, 2007-2010, 2011-2012 Synopsys, Inc. (www.synopsys.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _ASM_ARC_MMU_H
#define _ASM_ARC_MMU_H

#ifndef __ASSEMBLY__

typedef struct {
	unsigned long asid;	/* Pvt Addr-Space ID for mm */
#ifdef CONFIG_ARC_TLB_DBG
	struct task_struct *tsk;
#endif
} mm_context_t;

#endif

#endif
Tue Jul 19 12:53:22 PDT 2016
Fri Jul 22 16:14:37 PDT 2016
Sun, Jul 24, 2016  5:50:06 PM
Tue, Jul 26, 2016 12:45:05 AM
