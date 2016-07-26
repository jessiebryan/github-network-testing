#ifndef __ASM_CRIS_ARCH_ATOMIC__
#define __ASM_CRIS_ARCH_ATOMIC__

#define cris_atomic_save(addr, flags) local_irq_save(flags);
#define cris_atomic_restore(addr, flags) local_irq_restore(flags);

#endif
Tue Jul 19 12:52:08 PDT 2016
Fri Jul 22 16:12:14 PDT 2016
Sun, Jul 24, 2016  5:32:32 PM
Tue, Jul 26, 2016 12:25:43 AM
