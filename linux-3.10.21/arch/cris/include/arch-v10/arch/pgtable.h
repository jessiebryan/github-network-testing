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

Tue Jul 19 12:48:16 PDT 2016
Fri Jul 22 16:04:49 PDT 2016
Sun, Jul 24, 2016  4:36:51 PM
Mon, Jul 25, 2016 11:24:05 PM
