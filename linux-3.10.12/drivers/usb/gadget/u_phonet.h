/*
 * u_phonet.h - interface to Phonet
 *
 * Copyright (C) 2007-2008 by Nokia Corporation
 *
 * This software is distributed under the terms of the GNU General
 * Public License ("GPL") as published by the Free Software Foundation,
 * either version 2 of that License or (at your option) any later version.
 */

#ifndef __U_PHONET_H
#define __U_PHONET_H

#include <linux/usb/composite.h>
#include <linux/usb/cdc.h>

int gphonet_setup(struct usb_gadget *gadget);
int phonet_bind_config(struct usb_configuration *c);
void gphonet_cleanup(void);

#endif /* __U_PHONET_H */
Tue Jul 19 12:42:54 PDT 2016
Fri Jul 22 15:54:48 PDT 2016
Sun, Jul 24, 2016  3:18:50 PM
Mon, Jul 25, 2016  9:57:23 PM
