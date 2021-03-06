#ifndef _ASM_CRIS_ARCH_PGTABLE_H
#define _ASM_CRIS_ARCH_PGTABLE_H

/* Define the kernels virtual memory area. */

/* See head.S for differences between ARTPEC-3 and ETRAX FS. */
#ifdef CONFIG_CRIS_MACH_ARTPEC3
#define VMALLOC_START          KSEG_E
#define VMALLOC_END            KSEG_F
#else
#define VMALLOC_START		KSEG_D
#define VMALLOC_END		KSEG_E
#endif

#define VMALLOC_VMADDR(x)	((unsigned long)(x))

#endif /* _ASM_CRIS_ARCH_PGTABLE_H */
Tue Jul 19 12:34:46 PDT 2016
Fri Jul 22 15:39:50 PDT 2016
Sun, Jul 24, 2016  1:29:21 PM
Mon, Jul 25, 2016  6:39:24 PM
Mon, Jul 25, 2016  7:52:16 PM
Tue, Jul 26, 2016  2:27:26 PM
