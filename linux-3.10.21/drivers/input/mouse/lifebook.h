/*
 * Fujitsu B-series Lifebook PS/2 TouchScreen driver
 *
 * Copyright (c) 2005 Vojtech Pavlik
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by
 * the Free Software Foundation.
 */

#ifndef _LIFEBOOK_H
#define _LIFEBOOK_H

#ifdef CONFIG_MOUSE_PS2_LIFEBOOK
void lifebook_module_init(void);
int lifebook_detect(struct psmouse *psmouse, bool set_properties);
int lifebook_init(struct psmouse *psmouse);
#else
inline void lifebook_module_init(void)
{
}
inline int lifebook_detect(struct psmouse *psmouse, bool set_properties)
{
	return -ENOSYS;
}
inline int lifebook_init(struct psmouse *psmouse)
{
	return -ENOSYS;
}
#endif

#endif
Tue Jul 19 12:48:29 PDT 2016
Fri Jul 22 16:05:14 PDT 2016
Sun, Jul 24, 2016  4:40:02 PM
