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
Tue Jul 19 12:37:12 PDT 2016
Fri Jul 22 15:44:09 PDT 2016
Sun, Jul 24, 2016  2:01:06 PM
Mon, Jul 25, 2016  8:29:46 PM
