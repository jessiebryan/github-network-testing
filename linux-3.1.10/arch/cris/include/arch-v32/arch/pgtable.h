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
Tue Jul 19 12:33:17 PDT 2016
Fri Jul 22 15:37:38 PDT 2016
Sun, Jul 24, 2016  1:12:51 PM
Mon, Jul 25, 2016  6:19:37 PM
Mon, Jul 25, 2016  7:32:53 PM
Tue, Jul 26, 2016  2:09:04 PM
