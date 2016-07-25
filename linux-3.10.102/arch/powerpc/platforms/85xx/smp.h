#ifndef POWERPC_85XX_SMP_H_
#define POWERPC_85XX_SMP_H_ 1

#include <linux/init.h>

#ifdef CONFIG_SMP
void __init mpc85xx_smp_init(void);
#else
static inline void mpc85xx_smp_init(void)
{
	/* Nothing to do */
}
#endif

#endif /* not POWERPC_85XX_SMP_H_ */
Tue Jul 19 12:41:12 PDT 2016
Fri Jul 22 15:51:55 PDT 2016
Sun, Jul 24, 2016  2:57:05 PM
