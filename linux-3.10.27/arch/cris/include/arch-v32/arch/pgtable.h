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
Tue Jul 19 12:52:08 PDT 2016
Fri Jul 22 16:12:15 PDT 2016
Sun, Jul 24, 2016  5:32:37 PM
Tue, Jul 26, 2016 12:25:49 AM
