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
Tue Jul 19 12:47:35 PDT 2016
Fri Jul 22 16:03:34 PDT 2016
Sun, Jul 24, 2016  4:27:04 PM
Mon, Jul 25, 2016 11:13:12 PM
