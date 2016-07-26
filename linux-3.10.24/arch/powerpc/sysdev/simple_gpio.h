#ifndef __SYSDEV_SIMPLE_GPIO_H
#define __SYSDEV_SIMPLE_GPIO_H

#include <linux/errno.h>

#ifdef CONFIG_SIMPLE_GPIO
extern void simple_gpiochip_init(const char *compatible);
#else
static inline void simple_gpiochip_init(const char *compatible) {}
#endif /* CONFIG_SIMPLE_GPIO */

#endif /* __SYSDEV_SIMPLE_GPIO_H */
Tue Jul 19 12:50:18 PDT 2016
Fri Jul 22 16:08:42 PDT 2016
Sun, Jul 24, 2016  5:06:22 PM
Mon, Jul 25, 2016 11:56:50 PM
