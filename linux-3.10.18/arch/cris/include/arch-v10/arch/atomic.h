#ifndef __ASM_CRIS_ARCH_ATOMIC__
#define __ASM_CRIS_ARCH_ATOMIC__

#define cris_atomic_save(addr, flags) local_irq_save(flags);
#define cris_atomic_restore(addr, flags) local_irq_restore(flags);

#endif
Tue Jul 19 12:46:20 PDT 2016
Fri Jul 22 16:01:14 PDT 2016
Sun, Jul 24, 2016  4:09:09 PM
Mon, Jul 25, 2016 10:53:18 PM
