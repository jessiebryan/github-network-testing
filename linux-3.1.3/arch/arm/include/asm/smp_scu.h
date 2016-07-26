#ifndef __ASMARM_ARCH_SCU_H
#define __ASMARM_ARCH_SCU_H

#define SCU_PM_NORMAL	0
#define SCU_PM_DORMANT	2
#define SCU_PM_POWEROFF	3

#ifndef __ASSEMBLER__
unsigned int scu_get_core_count(void __iomem *);
void scu_enable(void __iomem *);
int scu_power_mode(void __iomem *, unsigned int);
#endif

#endif
Tue Jul 19 12:34:41 PDT 2016
Fri Jul 22 15:39:39 PDT 2016
Sun, Jul 24, 2016  1:28:07 PM
Mon, Jul 25, 2016  6:37:55 PM
Mon, Jul 25, 2016  7:50:48 PM
Tue, Jul 26, 2016  2:26:03 PM
