/* unaligned.h: unaligned access handler
 *
 * Copyright (C) 2004 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */

#ifndef _ASM_UNALIGNED_H
#define _ASM_UNALIGNED_H

#include <linux/unaligned/le_byteshift.h>
#include <linux/unaligned/be_struct.h>
#include <linux/unaligned/generic.h>

#define get_unaligned	__get_unaligned_be
#define put_unaligned	__put_unaligned_be

#endif /* _ASM_UNALIGNED_H */
Tue Jul 19 12:52:48 PDT 2016
Fri Jul 22 16:13:32 PDT 2016
Sun, Jul 24, 2016  5:42:05 PM
Tue, Jul 26, 2016 12:36:15 AM
