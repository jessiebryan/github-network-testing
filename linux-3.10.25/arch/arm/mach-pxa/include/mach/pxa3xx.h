#ifndef __MACH_PXA3XX_H	
#define __MACH_PXA3XX_H

#include <mach/hardware.h>
#include <mach/pxa3xx-regs.h>
#include <mach/irqs.h>

extern void __init pxa3xx_map_io(void);
extern void __init pxa3xx_init_irq(void);

#define pxa3xx_handle_irq	ichp_handle_irq

#endif /* __MACH_PXA3XX_H */
Tue Jul 19 12:50:48 PDT 2016
Fri Jul 22 16:09:37 PDT 2016
Sun, Jul 24, 2016  5:13:22 PM
Tue, Jul 26, 2016 12:04:33 AM
