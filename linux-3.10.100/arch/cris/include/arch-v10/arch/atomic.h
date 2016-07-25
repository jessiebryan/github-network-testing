#ifndef __ASM_CRIS_ARCH_ATOMIC__
#define __ASM_CRIS_ARCH_ATOMIC__

#define cris_atomic_save(addr, flags) local_irq_save(flags);
#define cris_atomic_restore(addr, flags) local_irq_restore(flags);

#endif
Tue Jul 19 12:39:47 PDT 2016
Fri Jul 22 15:49:07 PDT 2016
Sun, Jul 24, 2016  2:36:58 PM
