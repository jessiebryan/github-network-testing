/*
 * ppp_defs.h - PPP definitions.
 *
 * Copyright 1994-2000 Paul Mackerras.
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  version 2 as published by the Free Software Foundation.
 */
#ifndef _PPP_DEFS_H_
#define _PPP_DEFS_H_

#include <linux/crc-ccitt.h>
#include <uapi/linux/ppp_defs.h>

#define PPP_FCS(fcs, c) crc_ccitt_byte(fcs, c)
#endif /* _PPP_DEFS_H_ */
Tue Jul 19 12:48:42 PDT 2016
Fri Jul 22 16:05:40 PDT 2016
Sun, Jul 24, 2016  4:43:16 PM
Mon, Jul 25, 2016 11:31:12 PM
