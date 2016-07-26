#ifndef __MACH_PXA3XX_H	
#define __MACH_PXA3XX_H

#include <mach/hardware.h>
#include <mach/pxa3xx-regs.h>
#include <mach/irqs.h>

extern void __init pxa3xx_map_io(void);
extern void __init pxa3xx_init_irq(void);

#define pxa3xx_handle_irq	ichp_handle_irq

#endif /* __MACH_PXA3XX_H */
Tue Jul 19 12:51:28 PDT 2016
Fri Jul 22 16:10:52 PDT 2016
Sun, Jul 24, 2016  5:22:41 PM
Tue, Jul 26, 2016 12:14:51 AM
