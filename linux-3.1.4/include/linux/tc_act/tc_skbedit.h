/*
 * Copyright (c) 2008, Intel Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 * Place - Suite 330, Boston, MA 02111-1307 USA.
 *
 * Author: Alexander Duyck <alexander.h.duyck@intel.com>
 */

#ifndef __LINUX_TC_SKBEDIT_H
#define __LINUX_TC_SKBEDIT_H

#include <linux/pkt_cls.h>

#define TCA_ACT_SKBEDIT 11

#define SKBEDIT_F_PRIORITY		0x1
#define SKBEDIT_F_QUEUE_MAPPING		0x2
#define SKBEDIT_F_MARK			0x4

struct tc_skbedit {
	tc_gen;
};

enum {
	TCA_SKBEDIT_UNSPEC,
	TCA_SKBEDIT_TM,
	TCA_SKBEDIT_PARMS,
	TCA_SKBEDIT_PRIORITY,
	TCA_SKBEDIT_QUEUE_MAPPING,
	TCA_SKBEDIT_MARK,
	__TCA_SKBEDIT_MAX
};
#define TCA_SKBEDIT_MAX (__TCA_SKBEDIT_MAX - 1)

#endif
Tue Jul 19 12:35:59 PDT 2016
Fri Jul 22 15:41:46 PDT 2016
Sun, Jul 24, 2016  1:43:29 PM
Mon, Jul 25, 2016  8:08:56 PM
Tue, Jul 26, 2016  2:43:03 PM
