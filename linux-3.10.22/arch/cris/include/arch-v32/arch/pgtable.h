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
Tue Jul 19 12:48:54 PDT 2016
Fri Jul 22 16:06:02 PDT 2016
Sun, Jul 24, 2016  4:46:09 PM
Mon, Jul 25, 2016 11:34:27 PM
