/*
 * arch/powerpc/platforms/embedded6xx/flipper-pic.h
 *
 * Nintendo GameCube/Wii "Flipper" interrupt controller support.
 * Copyright (C) 2004-2009 The GameCube Linux Team
 * Copyright (C) 2007,2008,2009 Albert Herranz
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 */

#ifndef __FLIPPER_PIC_H
#define __FLIPPER_PIC_H

unsigned int flipper_pic_get_irq(void);
void __init flipper_pic_probe(void);

void flipper_quiesce(void);
void flipper_platform_reset(void);
int flipper_is_reset_button_pressed(void);

#endif
Tue Jul 19 12:47:45 PDT 2016
Fri Jul 22 16:03:51 PDT 2016
Sun, Jul 24, 2016  4:29:19 PM
Mon, Jul 25, 2016 11:15:42 PM
