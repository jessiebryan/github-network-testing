#ifndef __SYSDEV_SIMPLE_GPIO_H
#define __SYSDEV_SIMPLE_GPIO_H

#include <linux/errno.h>

#ifdef CONFIG_SIMPLE_GPIO
extern void simple_gpiochip_init(const char *compatible);
#else
static inline void simple_gpiochip_init(const char *compatible) {}
#endif /* CONFIG_SIMPLE_GPIO */

#endif /* __SYSDEV_SIMPLE_GPIO_H */
Tue Jul 19 12:41:55 PDT 2016
Fri Jul 22 15:53:11 PDT 2016
Sun, Jul 24, 2016  3:06:20 PM
Mon, Jul 25, 2016  9:43:18 PM
