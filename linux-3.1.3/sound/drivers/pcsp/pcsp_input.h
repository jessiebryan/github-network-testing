/*
 * PC-Speaker driver for Linux
 *
 * Copyright (C) 2001-2008  Stas Sergeev
 */

#ifndef __PCSP_INPUT_H__
#define __PCSP_INPUT_H__

int __devinit pcspkr_input_init(struct input_dev **rdev, struct device *dev);
int pcspkr_input_remove(struct input_dev *dev);
void pcspkr_stop_sound(void);

#endif
Tue Jul 19 12:35:27 PDT 2016
Fri Jul 22 15:40:44 PDT 2016
Sun, Jul 24, 2016  1:35:55 PM
Mon, Jul 25, 2016  8:00:02 PM
Tue, Jul 26, 2016  2:34:40 PM
