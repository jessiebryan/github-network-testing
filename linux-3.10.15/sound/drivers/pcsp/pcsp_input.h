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
Tue Jul 19 12:45:01 PDT 2016
Fri Jul 22 15:58:41 PDT 2016
Sun, Jul 24, 2016  3:49:13 PM
Mon, Jul 25, 2016 10:31:10 PM
