#ifndef __UM_CACHE_H
#define __UM_CACHE_H


#if defined(CONFIG_UML_X86) && !defined(CONFIG_64BIT)
# define L1_CACHE_SHIFT		(CONFIG_X86_L1_CACHE_SHIFT)
#elif defined(CONFIG_UML_X86) /* 64-bit */
# define L1_CACHE_SHIFT		6 /* Should be 7 on Intel */
#else
/* XXX: this was taken from x86, now it's completely random. Luckily only
 * affects SMP padding. */
# define L1_CACHE_SHIFT		5
#endif

#define L1_CACHE_BYTES		(1 << L1_CACHE_SHIFT)

#endif
Tue Jul 19 12:33:26 PDT 2016
Fri Jul 22 15:37:55 PDT 2016
Sun, Jul 24, 2016  1:14:55 PM
Mon, Jul 25, 2016  6:22:07 PM
Mon, Jul 25, 2016  7:35:20 PM
Tue, Jul 26, 2016  2:11:21 PM
