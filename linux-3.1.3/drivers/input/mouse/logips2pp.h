/*
 * Logitech PS/2++ mouse driver header
 *
 * Copyright (c) 2003 Vojtech Pavlik <vojtech@suse.cz>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by
 * the Free Software Foundation.
 */

#ifndef _LOGIPS2PP_H
#define _LOGIPS2PP_H

#ifdef CONFIG_MOUSE_PS2_LOGIPS2PP
int ps2pp_init(struct psmouse *psmouse, bool set_properties);
#else
inline int ps2pp_init(struct psmouse *psmouse, bool set_properties)
{
	return -ENOSYS;
}
#endif /* CONFIG_MOUSE_PS2_LOGIPS2PP */

#endif
Tue Jul 19 12:35:11 PDT 2016
Fri Jul 22 15:40:13 PDT 2016
Sun, Jul 24, 2016  1:32:05 PM
Mon, Jul 25, 2016  7:55:30 PM
Tue, Jul 26, 2016  2:30:28 PM
