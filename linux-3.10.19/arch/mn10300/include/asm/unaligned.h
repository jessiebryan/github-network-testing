/* MN10300 Unaligned memory access handling
 *
 * Copyright (C) 2007 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public Licence
 * as published by the Free Software Foundation; either version
 * 2 of the Licence, or (at your option) any later version.
 */
#ifndef _ASM_MN10300_UNALIGNED_H
#define _ASM_MN10300_UNALIGNED_H

#include <linux/unaligned/access_ok.h>
#include <linux/unaligned/generic.h>

#define get_unaligned	__get_unaligned_le
#define put_unaligned	__put_unaligned_le

#endif /* _ASM_MN10300_UNALIGNED_H */
Tue Jul 19 12:47:05 PDT 2016
Fri Jul 22 16:02:37 PDT 2016
Sun, Jul 24, 2016  4:19:41 PM
Mon, Jul 25, 2016 11:05:02 PM
