#ifndef __ASM_CRIS_ARCH_ATOMIC__
#define __ASM_CRIS_ARCH_ATOMIC__

#define cris_atomic_save(addr, flags) local_irq_save(flags);
#define cris_atomic_restore(addr, flags) local_irq_restore(flags);

#endif
Tue Jul 19 12:35:34 PDT 2016
Fri Jul 22 15:40:59 PDT 2016
Sun, Jul 24, 2016  1:37:31 PM
Mon, Jul 25, 2016  8:01:55 PM
Tue, Jul 26, 2016  2:36:28 PM
