/*
 * Copyright (C) 2012 Synopsys, Inc. (www.synopsys.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _ASM_ARC_CLK_H
#define _ASM_ARC_CLK_H

/* Although we can't really hide core_freq, the accessor is still better way */
extern unsigned long core_freq;

static inline unsigned long arc_get_core_freq(void)
{
	return core_freq;
}

extern int arc_set_core_freq(unsigned long);

#endif
Tue Jul 19 12:41:40 PDT 2016
Fri Jul 22 15:52:48 PDT 2016
Sun, Jul 24, 2016  3:03:32 PM
Mon, Jul 25, 2016  9:40:09 PM
