#ifndef __MACH_PXA25x_H
#define __MACH_PXA25x_H

#include <mach/hardware.h>
#include <mach/pxa2xx-regs.h>
#include <mach/mfp-pxa25x.h>
#include <mach/irqs.h>

extern void __init pxa25x_map_io(void);
extern void __init pxa25x_init_irq(void);
#ifdef CONFIG_CPU_PXA26x
extern void __init pxa26x_init_irq(void);
#endif

#define pxa25x_handle_irq	icip_handle_irq

#endif /* __MACH_PXA25x_H */
Tue Jul 19 12:50:48 PDT 2016
Fri Jul 22 16:09:37 PDT 2016
Sun, Jul 24, 2016  5:13:22 PM
Tue, Jul 26, 2016 12:04:33 AM
