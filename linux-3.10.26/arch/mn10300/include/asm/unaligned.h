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
Tue Jul 19 12:51:35 PDT 2016
Fri Jul 22 16:11:08 PDT 2016
Sun, Jul 24, 2016  5:24:34 PM
Tue, Jul 26, 2016 12:16:56 AM
