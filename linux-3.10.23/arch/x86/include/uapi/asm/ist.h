/*
 * Include file for the interface to IST BIOS
 * Copyright 2002 Andy Grover <andrew.grover@intel.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2, or (at your option) any
 * later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 */
#ifndef _UAPI_ASM_X86_IST_H
#define _UAPI_ASM_X86_IST_H



#include <linux/types.h>

struct ist_info {
	__u32 signature;
	__u32 command;
	__u32 event;
	__u32 perf_level;
};

#endif /* _UAPI_ASM_X86_IST_H */
Tue Jul 19 12:49:44 PDT 2016
Fri Jul 22 16:07:35 PDT 2016
Sun, Jul 24, 2016  4:57:57 PM
Mon, Jul 25, 2016 11:47:36 PM
