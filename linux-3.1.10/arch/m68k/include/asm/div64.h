#ifndef _M68K_DIV64_H
#define _M68K_DIV64_H

#ifdef CONFIG_MMU

#include <linux/types.h>

/* n = n / base; return rem; */

#define do_div(n, base) ({					\
	union {							\
		unsigned long n32[2];				\
		unsigned long long n64;				\
	} __n;							\
	unsigned long __rem, __upper;				\
								\
	__n.n64 = (n);						\
	if ((__upper = __n.n32[0])) {				\
		asm ("divul.l %2,%1:%0"				\
			: "=d" (__n.n32[0]), "=d" (__upper)	\
			: "d" (base), "0" (__n.n32[0]));	\
	}							\
	asm ("divu.l %2,%1:%0"					\
		: "=d" (__n.n32[1]), "=d" (__rem)		\
		: "d" (base), "1" (__upper), "0" (__n.n32[1]));	\
	(n) = __n.n64;						\
	__rem;							\
})

#else
#include <asm-generic/div64.h>
#endif /* CONFIG_MMU */

#endif /* _M68K_DIV64_H */
Tue Jul 19 12:33:19 PDT 2016
Fri Jul 22 15:37:42 PDT 2016
Sun, Jul 24, 2016  1:13:19 PM
Mon, Jul 25, 2016  6:20:12 PM
