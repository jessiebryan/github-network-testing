/*
 * PC-Speaker driver for Linux
 *
 * Copyright (C) 2001-2008  Stas Sergeev
 */

#ifndef __PCSP_INPUT_H__
#define __PCSP_INPUT_H__

int pcspkr_input_init(struct input_dev **rdev, struct device *dev);
int pcspkr_input_remove(struct input_dev *dev);
void pcspkr_stop_sound(void);

#endif
Tue Jul 19 12:52:41 PDT 2016
Fri Jul 22 16:13:17 PDT 2016
Sun, Jul 24, 2016  5:40:20 PM
Tue, Jul 26, 2016 12:34:20 AM
