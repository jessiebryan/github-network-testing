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
Tue Jul 19 12:47:06 PDT 2016
Fri Jul 22 16:02:39 PDT 2016
Sun, Jul 24, 2016  4:20:03 PM
Mon, Jul 25, 2016 11:05:27 PM
