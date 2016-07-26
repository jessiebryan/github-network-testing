/*
 * Copyright 2007-2008 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef _BFIN_KPAD_H
#define _BFIN_KPAD_H

struct bfin_kpad_platform_data {
	int rows;
	int cols;
	const unsigned int *keymap;
	unsigned short keymapsize;
	unsigned short repeat;
	u32 debounce_time;	/* in ns */
	u32 coldrive_time;	/* in ns */
	u32 keyup_test_interval; /* in ms */
};

#define KEYVAL(col, row, val) (((1 << col) << 24) | ((1 << row) << 16) | (val))

#endif
Tue Jul 19 12:35:34 PDT 2016
Fri Jul 22 15:40:58 PDT 2016
Sun, Jul 24, 2016  1:37:30 PM
Mon, Jul 25, 2016  8:01:53 PM
Tue, Jul 26, 2016  2:36:26 PM
