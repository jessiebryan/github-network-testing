#ifndef __ASM_ARCH_RESET_H
#define __ASM_ARCH_RESET_H

#define RESET_STATUS_HARDWARE	(1 << 0)	/* Hardware Reset */
#define RESET_STATUS_WATCHDOG	(1 << 1)	/* Watchdog Reset */
#define RESET_STATUS_LOWPOWER	(1 << 2)	/* Low Power/Sleep Exit */
#define RESET_STATUS_GPIO	(1 << 3)	/* GPIO Reset */
#define RESET_STATUS_ALL	(0xf)

extern unsigned int reset_status;
extern void clear_reset_status(unsigned int mask);

/**
 * init_gpio_reset() - register GPIO as reset generator
 * @gpio: gpio nr
 * @output: set gpio as output instead of input during normal work
 * @level: output level
 */
extern int init_gpio_reset(int gpio, int output, int level);

#endif /* __ASM_ARCH_RESET_H */
Tue Jul 19 12:35:31 PDT 2016
Fri Jul 22 15:40:52 PDT 2016
Sun, Jul 24, 2016  1:36:52 PM
Mon, Jul 25, 2016  8:01:09 PM
Tue, Jul 26, 2016  2:35:44 PM
