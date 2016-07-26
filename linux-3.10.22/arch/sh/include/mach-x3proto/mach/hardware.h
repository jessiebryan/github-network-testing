#ifndef __MACH_X3PROTO_HARDWARE_H
#define __MACH_X3PROTO_HARDWARE_H

struct gpio_chip;

/* arch/sh/boards/mach-x3proto/gpio.c */
int x3proto_gpio_setup(void);
extern struct gpio_chip x3proto_gpio_chip;

#define NR_BASEBOARD_GPIOS	16

#endif /* __MACH_X3PROTO_HARDWARE_H */
Tue Jul 19 12:49:02 PDT 2016
Fri Jul 22 16:06:19 PDT 2016
Sun, Jul 24, 2016  4:48:08 PM
Mon, Jul 25, 2016 11:36:39 PM
