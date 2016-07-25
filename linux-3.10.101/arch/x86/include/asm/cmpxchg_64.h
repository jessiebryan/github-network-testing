#ifndef _ASM_X86_CMPXCHG_64_H
#define _ASM_X86_CMPXCHG_64_H

static inline void set_64bit(volatile u64 *ptr, u64 val)
{
	*ptr = val;
}

#define __HAVE_ARCH_CMPXCHG 1

#define cmpxchg64(ptr, o, n)						\
({									\
	BUILD_BUG_ON(sizeof(*(ptr)) != 8);				\
	cmpxchg((ptr), (o), (n));					\
})

#define cmpxchg64_local(ptr, o, n)					\
({									\
	BUILD_BUG_ON(sizeof(*(ptr)) != 8);				\
	cmpxchg_local((ptr), (o), (n));					\
})

#define system_has_cmpxchg_double() cpu_has_cx16

#endif /* _ASM_X86_CMPXCHG_64_H */
Tue Jul 19 12:40:36 PDT 2016
Fri Jul 22 15:50:44 PDT 2016
Sun, Jul 24, 2016  2:48:38 PM
