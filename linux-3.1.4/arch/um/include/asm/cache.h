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
Tue Jul 19 12:35:43 PDT 2016
Fri Jul 22 15:41:16 PDT 2016
Sun, Jul 24, 2016  1:39:41 PM
Mon, Jul 25, 2016  8:04:28 PM
Tue, Jul 26, 2016  2:38:52 PM
