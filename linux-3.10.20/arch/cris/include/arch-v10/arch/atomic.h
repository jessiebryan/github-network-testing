#ifndef __ASM_CRIS_ARCH_ATOMIC__
#define __ASM_CRIS_ARCH_ATOMIC__

#define cris_atomic_save(addr, flags) local_irq_save(flags);
#define cris_atomic_restore(addr, flags) local_irq_restore(flags);

#endif
Tue Jul 19 12:47:37 PDT 2016
Fri Jul 22 16:03:38 PDT 2016
Sun, Jul 24, 2016  4:27:36 PM
Mon, Jul 25, 2016 11:13:48 PM
