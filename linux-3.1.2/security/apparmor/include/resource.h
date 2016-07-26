/*
 * AppArmor security module
 *
 * This file contains AppArmor resource limits function definitions.
 *
 * Copyright (C) 1998-2008 Novell/SUSE
 * Copyright 2009-2010 Canonical Ltd.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, version 2 of the
 * License.
 */

#ifndef __AA_RESOURCE_H
#define __AA_RESOURCE_H

#include <linux/resource.h>
#include <linux/sched.h>

struct aa_profile;

/* struct aa_rlimit - rlimit settings for the profile
 * @mask: which hard limits to set
 * @limits: rlimit values that override task limits
 *
 * AppArmor rlimits are used to set confined task rlimits.  Only the
 * limits specified in @mask will be controlled by apparmor.
 */
struct aa_rlimit {
	unsigned int mask;
	struct rlimit limits[RLIM_NLIMITS];
};

int aa_map_resource(int resource);
int aa_task_setrlimit(struct aa_profile *profile, struct task_struct *,
		      unsigned int resource, struct rlimit *new_rlim);

void __aa_transition_rlimits(struct aa_profile *old, struct aa_profile *new);

static inline void aa_free_rlimit_rules(struct aa_rlimit *rlims)
{
	/* NOP */
}

#endif /* __AA_RESOURCE_H */
Tue Jul 19 12:34:39 PDT 2016
Fri Jul 22 15:39:36 PDT 2016
Sun, Jul 24, 2016  1:27:38 PM
Mon, Jul 25, 2016  6:37:21 PM
Mon, Jul 25, 2016  7:50:15 PM
Tue, Jul 26, 2016  2:25:31 PM
