#ifndef __SYSDEV_SIMPLE_GPIO_H
#define __SYSDEV_SIMPLE_GPIO_H

#include <linux/errno.h>

#ifdef CONFIG_SIMPLE_GPIO
extern void simple_gpiochip_init(const char *compatible);
#else
static inline void simple_gpiochip_init(const char *compatible) {}
#endif /* CONFIG_SIMPLE_GPIO */

#endif /* __SYSDEV_SIMPLE_GPIO_H */
Tue Jul 19 12:39:16 PDT 2016
Fri Jul 22 15:48:04 PDT 2016
Sun, Jul 24, 2016  2:29:29 PM
Mon, Jul 25, 2016  9:01:54 PM
