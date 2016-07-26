/* ----------------------------------------------------------------------------
 * touchkit_ps2.h  --  Driver for eGalax TouchKit PS/2 Touchscreens
 *
 * Copyright (C) 2005 by Stefan Lucke
 * Copyright (c) 2005 Vojtech Pavlik
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by
 * the Free Software Foundation.
 */

#ifndef _TOUCHKIT_PS2_H
#define _TOUCHKIT_PS2_H

#ifdef CONFIG_MOUSE_PS2_TOUCHKIT
int touchkit_ps2_detect(struct psmouse *psmouse, bool set_properties);
#else
static inline int touchkit_ps2_detect(struct psmouse *psmouse,
				      bool set_properties)
{
	return -ENOSYS;
}
#endif /* CONFIG_MOUSE_PS2_TOUCHKIT */

#endif
Tue Jul 19 12:48:29 PDT 2016
Fri Jul 22 16:05:14 PDT 2016
Sun, Jul 24, 2016  4:40:02 PM
Mon, Jul 25, 2016 11:27:37 PM
