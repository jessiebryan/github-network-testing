/*
 * AppArmor security module
 *
 * This file contains AppArmor security identifier (sid) definitions
 *
 * Copyright 2009-2010 Canonical Ltd.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, version 2 of the
 * License.
 */

#ifndef __AA_SID_H
#define __AA_SID_H

#include <linux/types.h>

struct aa_profile;

u32 aa_alloc_sid(void);
void aa_free_sid(u32 sid);

#endif /* __AA_SID_H */
Tue Jul 19 12:45:37 PDT 2016
Fri Jul 22 15:59:52 PDT 2016
Sun, Jul 24, 2016  3:58:24 PM
Mon, Jul 25, 2016 10:41:21 PM
