/*
 * osd_types.h - Types and constants which are not part of the protocol.
 *
 * Copyright (C) 2008 Panasas Inc.  All rights reserved.
 *
 * Authors:
 *   Boaz Harrosh <bharrosh@panasas.com>
 *   Benny Halevy <bhalevy@panasas.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2
 *
 * Contains types and constants that are implementation specific and are
 * used by more than one part of the osd library.
 *     (Eg initiator/target/security_manager/...)
 */
#ifndef __OSD_TYPES_H__
#define __OSD_TYPES_H__

struct osd_systemid {
	u8 data[OSD_SYSTEMID_LEN];
};

typedef u64 __bitwise osd_id;

struct osd_obj_id {
	osd_id partition;
	osd_id id;
};

static const struct __weak osd_obj_id osd_root_object = {0, 0};

struct osd_attr {
	u32 attr_page;
	u32 attr_id;
	u16 len;		/* byte count of operand */
	void *val_ptr;		/* in network order */
};

struct osd_sg_entry {
	u64 offset;
	u64 len;
};

#endif /* ndef __OSD_TYPES_H__ */
Tue Jul 19 12:39:00 PDT 2016
Fri Jul 22 15:47:31 PDT 2016
Sun, Jul 24, 2016  2:25:31 PM
Mon, Jul 25, 2016  8:57:28 PM
