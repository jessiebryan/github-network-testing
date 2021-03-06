#ifndef _XT_CONNMARK_H
#define _XT_CONNMARK_H

#include <linux/types.h>

/* Copyright (C) 2002,2004 MARA Systems AB <http://www.marasystems.com>
 * by Henrik Nordstrom <hno@marasystems.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

enum {
	XT_CONNMARK_SET = 0,
	XT_CONNMARK_SAVE,
	XT_CONNMARK_RESTORE
};

struct xt_connmark_tginfo1 {
	__u32 ctmark, ctmask, nfmask;
	__u8 mode;
};

struct xt_connmark_mtinfo1 {
	__u32 mark, mask;
	__u8 invert;
};

#endif /*_XT_CONNMARK_H*/
Tue Jul 19 12:34:26 PDT 2016
Fri Jul 22 15:39:28 PDT 2016
Sun, Jul 24, 2016  1:26:40 PM
Mon, Jul 25, 2016  6:36:11 PM
Mon, Jul 25, 2016  7:49:07 PM
Tue, Jul 26, 2016  2:24:27 PM
