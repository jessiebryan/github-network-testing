/*
 * Line6 Linux USB driver - 0.9.1beta
 *
 * Copyright (C) 2004-2010 Markus Grabner (grabner@icg.tugraz.at)
 *
 *	This program is free software; you can redistribute it and/or
 *	modify it under the terms of the GNU General Public License as
 *	published by the Free Software Foundation, version 2.
 *
 */

#ifndef AUDIO_H
#define AUDIO_H

#include "driver.h"

extern void line6_cleanup_audio(struct usb_line6 *);
extern int line6_init_audio(struct usb_line6 *);
extern int line6_register_audio(struct usb_line6 *);

#endif
Tue Jul 19 12:46:40 PDT 2016
Fri Jul 22 16:01:51 PDT 2016
Sun, Jul 24, 2016  4:13:48 PM
Mon, Jul 25, 2016 10:58:30 PM
