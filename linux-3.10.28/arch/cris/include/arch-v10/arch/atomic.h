#ifndef __ASM_CRIS_ARCH_ATOMIC__
#define __ASM_CRIS_ARCH_ATOMIC__

#define cris_atomic_save(addr, flags) local_irq_save(flags);
#define cris_atomic_restore(addr, flags) local_irq_restore(flags);

#endif
Tue Jul 19 12:52:47 PDT 2016
Fri Jul 22 16:13:30 PDT 2016
Sun, Jul 24, 2016  5:41:51 PM
Tue, Jul 26, 2016 12:35:59 AM
