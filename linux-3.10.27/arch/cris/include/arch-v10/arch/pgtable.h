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

Tue Jul 19 12:52:08 PDT 2016
Fri Jul 22 16:12:15 PDT 2016
Sun, Jul 24, 2016  5:32:33 PM
Tue, Jul 26, 2016 12:25:44 AM
