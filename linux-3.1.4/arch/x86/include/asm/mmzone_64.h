/* K8 NUMA support */
/* Copyright 2002,2003 by Andi Kleen, SuSE Labs */
/* 2.5 Version loosely based on the NUMAQ Code by Pat Gaughen. */
#ifndef _ASM_X86_MMZONE_64_H
#define _ASM_X86_MMZONE_64_H

#ifdef CONFIG_NUMA

#include <linux/mmdebug.h>
#include <asm/smp.h>

extern struct pglist_data *node_data[];

#define NODE_DATA(nid)		(node_data[nid])

#endif
#endif /* _ASM_X86_MMZONE_64_H */
Tue Jul 19 12:35:44 PDT 2016
Fri Jul 22 15:41:18 PDT 2016
Sun, Jul 24, 2016  1:39:54 PM
