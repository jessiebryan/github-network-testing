#ifndef __MV64X60_H__
#define __MV64X60_H__

#include <linux/init.h>

extern void __init mv64x60_init_irq(void);
extern unsigned int mv64x60_get_irq(void);

extern void __init mv64x60_pci_init(void);
extern void __init mv64x60_init_early(void);

#endif /* __MV64X60_H__ */
Tue Jul 19 12:50:18 PDT 2016
Fri Jul 22 16:08:42 PDT 2016
Sun, Jul 24, 2016  5:06:22 PM
Mon, Jul 25, 2016 11:56:49 PM
