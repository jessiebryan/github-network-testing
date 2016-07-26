#ifndef __SPARC_SIGNAL_H
#define __SPARC_SIGNAL_H

#ifndef __ASSEMBLY__
#include <linux/personality.h>
#include <linux/types.h>
#endif
#include <uapi/asm/signal.h>

#ifndef __ASSEMBLY__
/*
 * DJHR
 * SA_STATIC_ALLOC is used for the sparc32 system to indicate that this
 * interrupt handler's irq structure should be statically allocated
 * by the request_irq routine.
 * The alternative is that arch/sparc/kernel/irq.c has carnal knowledge
 * of interrupt usage and that sucks. Also without a flag like this
 * it may be possible for the free_irq routine to attempt to free
 * statically allocated data.. which is NOT GOOD.
 *
 */
#define SA_STATIC_ALLOC         0x8000

#define __ARCH_HAS_KA_RESTORER
#define __ARCH_HAS_SA_RESTORER

#endif /* !(__ASSEMBLY__) */
#endif /* !(__SPARC_SIGNAL_H) */
Tue Jul 19 12:52:17 PDT 2016
Fri Jul 22 16:12:32 PDT 2016
Sun, Jul 24, 2016  5:34:44 PM
Tue, Jul 26, 2016 12:28:09 AM
