#ifndef __MV64X60_H__
#define __MV64X60_H__

#include <linux/init.h>

extern void __init mv64x60_init_irq(void);
extern unsigned int mv64x60_get_irq(void);

extern void __init mv64x60_pci_init(void);
extern void __init mv64x60_init_early(void);

#endif /* __MV64X60_H__ */
Tue Jul 19 12:36:15 PDT 2016
Fri Jul 22 15:42:18 PDT 2016
Sun, Jul 24, 2016  1:47:20 PM
Mon, Jul 25, 2016  8:13:31 PM
