#ifndef __MACH_X3PROTO_HARDWARE_H
#define __MACH_X3PROTO_HARDWARE_H

struct gpio_chip;

/* arch/sh/boards/mach-x3proto/gpio.c */
int x3proto_gpio_setup(void);
extern struct gpio_chip x3proto_gpio_chip;

#define NR_BASEBOARD_GPIOS	16

#endif /* __MACH_X3PROTO_HARDWARE_H */
Tue Jul 19 12:41:13 PDT 2016
Fri Jul 22 15:51:58 PDT 2016
Sun, Jul 24, 2016  2:57:26 PM
Mon, Jul 25, 2016  9:33:17 PM
