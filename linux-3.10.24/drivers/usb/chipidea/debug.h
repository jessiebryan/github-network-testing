/*
 * debug.h - ChipIdea USB driver debug interfaces
 *
 * Copyright (C) 2008 Chipidea - MIPS Technologies, Inc. All rights reserved.
 *
 * Author: David Lopo
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __DRIVERS_USB_CHIPIDEA_DEBUG_H
#define __DRIVERS_USB_CHIPIDEA_DEBUG_H

#ifdef CONFIG_USB_CHIPIDEA_DEBUG
int dbg_create_files(struct ci13xxx *ci);
void dbg_remove_files(struct ci13xxx *ci);
#else
static inline int dbg_create_files(struct ci13xxx *ci)
{
	return 0;
}

static inline void dbg_remove_files(struct ci13xxx *ci)
{
}
#endif

#endif /* __DRIVERS_USB_CHIPIDEA_DEBUG_H */
Tue Jul 19 12:50:33 PDT 2016
Fri Jul 22 16:09:08 PDT 2016
Sun, Jul 24, 2016  5:09:40 PM
Tue, Jul 26, 2016 12:00:29 AM
