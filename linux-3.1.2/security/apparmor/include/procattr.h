/*
 * AppArmor security module
 *
 * This file contains AppArmor /proc/<pid>/attr/ interface function definitions.
 *
 * Copyright (C) 1998-2008 Novell/SUSE
 * Copyright 2009-2010 Canonical Ltd.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, version 2 of the
 * License.
 */

#ifndef __AA_PROCATTR_H
#define __AA_PROCATTR_H

#define AA_DO_TEST 1
#define AA_ONEXEC  1

int aa_getprocattr(struct aa_profile *profile, char **string);
int aa_setprocattr_changehat(char *args, size_t size, int test);
int aa_setprocattr_changeprofile(char *fqname, bool onexec, int test);
int aa_setprocattr_permipc(char *fqname);

#endif /* __AA_PROCATTR_H */
Tue Jul 19 12:34:39 PDT 2016
Fri Jul 22 15:39:36 PDT 2016
Sun, Jul 24, 2016  1:27:38 PM
Mon, Jul 25, 2016  6:37:21 PM
Mon, Jul 25, 2016  7:50:15 PM
Tue, Jul 26, 2016  2:25:31 PM
