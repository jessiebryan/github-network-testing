/*
 * Linux driver for TerraTec DMX 6Fire USB
 *
 * Author: Torsten Schenk
 * Created: Jan 01, 2011
 * Copyright:	(C) Torsten Schenk
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef USB6FIRE_FIRMWARE_H
#define USB6FIRE_FIRMWARE_H

#include "common.h"

enum /* firmware state of device */
{
	FW_READY = 0,
	FW_NOT_READY = 1
};

int __devinit usb6fire_fw_init(struct usb_interface *intf);
#endif /* USB6FIRE_FIRMWARE_H */

Tue Jul 19 12:35:28 PDT 2016
Fri Jul 22 15:40:46 PDT 2016
Sun, Jul 24, 2016  1:36:06 PM
Mon, Jul 25, 2016  8:00:14 PM
Tue, Jul 26, 2016  2:34:52 PM
