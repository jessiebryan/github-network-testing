#ifndef _PPC_KERNEL_MPC8xx_H
#define _PPC_KERNEL_MPC8xx_H

#include <linux/irq.h>
#include <linux/interrupt.h>

int mpc8xx_pic_init(void);
unsigned int mpc8xx_get_irq(void);

/*
 * Some internal interrupt registers use an 8-bit mask for the interrupt
 * level instead of a number.
 */
static inline uint mk_int_int_mask(uint mask)
{
	return (1 << (7 - (mask/2)));
}

#endif /* _PPC_KERNEL_PPC8xx_H */
Tue Jul 19 12:34:00 PDT 2016
Fri Jul 22 15:38:56 PDT 2016
Sun, Jul 24, 2016  1:22:35 PM
Mon, Jul 25, 2016  6:31:17 PM
Mon, Jul 25, 2016  7:44:20 PM
