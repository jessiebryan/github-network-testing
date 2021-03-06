#ifndef _ASM_POWERPC_SYNCH_H 
#define _ASM_POWERPC_SYNCH_H 
#ifdef __KERNEL__

#include <linux/stringify.h>
#include <asm/feature-fixups.h>

#if defined(__powerpc64__) || defined(CONFIG_PPC_E500MC)
#define __SUBARCH_HAS_LWSYNC
#endif

#ifndef __ASSEMBLY__
extern unsigned int __start___lwsync_fixup, __stop___lwsync_fixup;
extern void do_lwsync_fixups(unsigned long value, void *fixup_start,
			     void *fixup_end);
extern void do_final_fixups(void);

static inline void eieio(void)
{
	__asm__ __volatile__ ("eieio" : : : "memory");
}

static inline void isync(void)
{
	__asm__ __volatile__ ("isync" : : : "memory");
}
#endif /* __ASSEMBLY__ */

#if defined(__powerpc64__)
#    define LWSYNC	lwsync
#elif defined(CONFIG_E500)
#    define LWSYNC					\
	START_LWSYNC_SECTION(96);			\
	sync;						\
	MAKE_LWSYNC_SECTION_ENTRY(96, __lwsync_fixup);
#else
#    define LWSYNC	sync
#endif

#ifdef CONFIG_SMP
#define __PPC_ACQUIRE_BARRIER				\
	START_LWSYNC_SECTION(97);			\
	isync;						\
	MAKE_LWSYNC_SECTION_ENTRY(97, __lwsync_fixup);
#define PPC_ACQUIRE_BARRIER	"\n" stringify_in_c(__PPC_ACQUIRE_BARRIER)
#define PPC_RELEASE_BARRIER	stringify_in_c(LWSYNC) "\n"
#else
#define PPC_ACQUIRE_BARRIER
#define PPC_RELEASE_BARRIER
#endif

#endif /* __KERNEL__ */
#endif	/* _ASM_POWERPC_SYNCH_H */
Tue Jul 19 12:34:58 PDT 2016
Fri Jul 22 15:40:02 PDT 2016
Sun, Jul 24, 2016  1:30:46 PM
Mon, Jul 25, 2016  7:53:55 PM
Tue, Jul 26, 2016  2:29:00 PM
