#ifndef __MACH_PXA3XX_H	
#define __MACH_PXA3XX_H

#include <mach/hardware.h>
#include <mach/pxa3xx-regs.h>
#include <mach/irqs.h>

extern void __init pxa3xx_map_io(void);
extern void __init pxa3xx_init_irq(void);
extern void __init pxa95x_init_irq(void);

#define pxa3xx_handle_irq	ichp_handle_irq

#endif /* __MACH_PXA3XX_H */
Tue Jul 19 12:34:43 PDT 2016
Fri Jul 22 15:39:44 PDT 2016
Sun, Jul 24, 2016  1:28:37 PM
Mon, Jul 25, 2016  6:38:30 PM
Mon, Jul 25, 2016  7:51:24 PM
Tue, Jul 26, 2016  2:26:36 PM
