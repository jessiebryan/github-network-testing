#ifndef _ASM_CRIS_STRING_H
#define _ASM_CRIS_STRING_H

/* the optimized memcpy is in arch/cris/lib/string.c */

#define __HAVE_ARCH_MEMCPY
extern void *memcpy(void *, const void *, size_t);

/* New and improved.  In arch/cris/lib/memset.c */

#define __HAVE_ARCH_MEMSET
extern void *memset(void *, int, size_t);

#ifdef CONFIG_ETRAX_ARCH_V32
/* For v32 we provide strcmp.  */
#define __HAVE_ARCH_STRCMP
extern int strcmp(const char *s1, const char *s2);
#endif

#endif
Tue Jul 19 12:48:54 PDT 2016
Fri Jul 22 16:06:03 PDT 2016
Sun, Jul 24, 2016  4:46:14 PM
Mon, Jul 25, 2016 11:34:32 PM
