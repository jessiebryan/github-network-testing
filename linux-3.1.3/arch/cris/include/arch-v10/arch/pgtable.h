#ifndef _CRIS_ARCH_PGTABLE_H
#define _CRIS_ARCH_PGTABLE_H

/*
 * Kernels own virtual memory area. 
 */

#ifdef CONFIG_CRIS_LOW_MAP
#define VMALLOC_START     KSEG_7
#define VMALLOC_END       KSEG_8
#else
#define VMALLOC_START     KSEG_D
#define VMALLOC_END       KSEG_E
#endif

#endif

Tue Jul 19 12:34:45 PDT 2016
Fri Jul 22 15:39:50 PDT 2016
Sun, Jul 24, 2016  1:29:17 PM
Mon, Jul 25, 2016  6:39:19 PM
Mon, Jul 25, 2016  7:52:11 PM
Tue, Jul 26, 2016  2:27:21 PM
