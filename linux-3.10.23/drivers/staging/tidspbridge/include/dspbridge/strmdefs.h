/*
 * strmdefs.h
 *
 * DSP-BIOS Bridge driver support functions for TI OMAP processors.
 *
 * Global STRM constants and types.
 *
 * Copyright (C) 2005-2006 Texas Instruments, Inc.
 *
 * This package is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * THIS PACKAGE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef STRMDEFS_
#define STRMDEFS_

struct strm_mgr;

struct strm_object;

struct strm_attr {
	void *user_event;
	char *str_event_name;
	void *virt_base;	/* Process virtual base address of
				 * mapped SM */
	u32 virt_size;		/* Size of virtual space in bytes */
	struct dsp_streamattrin *stream_attr_in;
};

struct stream_info {
	enum dsp_strmmode strm_mode;	/* transport mode of
					 * stream(DMA, ZEROCOPY..) */
	u32 segment_id;		/* Segment strm allocs from. 0 is local mem */
	void *virt_base;	/* "      " Stream'process virt base */
	struct dsp_streaminfo *user_strm;	/* User's stream information
						 * returned */
};

#endif /* STRMDEFS_ */
Tue Jul 19 12:49:53 PDT 2016
Fri Jul 22 16:07:53 PDT 2016
Sun, Jul 24, 2016  5:00:10 PM
Mon, Jul 25, 2016 11:50:03 PM
