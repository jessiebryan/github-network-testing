#ifndef __NVKM_GPIO_H__
#define __NVKM_GPIO_H__

#include <subdev/gpio.h>

void nv50_gpio_dtor(struct nouveau_object *);
int  nv50_gpio_init(struct nouveau_object *);
int  nv50_gpio_fini(struct nouveau_object *, bool);
void nv50_gpio_intr(struct nouveau_subdev *);
void nv50_gpio_intr_enable(struct nouveau_event *, int line);
void nv50_gpio_intr_disable(struct nouveau_event *, int line);

void nvd0_gpio_reset(struct nouveau_gpio *, u8);
int  nvd0_gpio_drive(struct nouveau_gpio *, int, int, int);
int  nvd0_gpio_sense(struct nouveau_gpio *, int);

#endif
Tue Jul 19 12:45:55 PDT 2016
Fri Jul 22 16:00:26 PDT 2016
Sun, Jul 24, 2016  4:02:56 PM
Mon, Jul 25, 2016 10:46:25 PM
