/*
 * AppArmor security module
 *
 * This file contains AppArmor policy loading interface function definitions.
 *
 * Copyright (C) 1998-2008 Novell/SUSE
 * Copyright 2009-2010 Canonical Ltd.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, version 2 of the
 * License.
 */

#ifndef __POLICY_INTERFACE_H
#define __POLICY_INTERFACE_H

struct aa_profile *aa_unpack(void *udata, size_t size, const char **ns);

#endif /* __POLICY_INTERFACE_H */
Tue Jul 19 12:48:09 PDT 2016
Fri Jul 22 16:04:37 PDT 2016
Sun, Jul 24, 2016  4:35:18 PM
Mon, Jul 25, 2016 11:22:22 PM
