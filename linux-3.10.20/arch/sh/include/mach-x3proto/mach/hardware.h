#ifndef __MACH_X3PROTO_HARDWARE_H
#define __MACH_X3PROTO_HARDWARE_H

struct gpio_chip;

/* arch/sh/boards/mach-x3proto/gpio.c */
int x3proto_gpio_setup(void);
extern struct gpio_chip x3proto_gpio_chip;

#define NR_BASEBOARD_GPIOS	16

#endif /* __MACH_X3PROTO_HARDWARE_H */
Tue Jul 19 12:47:46 PDT 2016
Fri Jul 22 16:03:54 PDT 2016
Sun, Jul 24, 2016  4:29:39 PM
Mon, Jul 25, 2016 11:16:05 PM
