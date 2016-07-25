/*
 * AppArmor security module
 *
 * This file contains AppArmor ipc mediation function definitions.
 *
 * Copyright (C) 1998-2008 Novell/SUSE
 * Copyright 2009-2010 Canonical Ltd.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, version 2 of the
 * License.
 */

#ifndef __AA_IPC_H
#define __AA_IPC_H

#include <linux/sched.h>

struct aa_profile;

int aa_may_ptrace(struct task_struct *tracer_task, struct aa_profile *tracer,
		  struct aa_profile *tracee, unsigned int mode);

int aa_ptrace(struct task_struct *tracer, struct task_struct *tracee,
	      unsigned int mode);

#endif /* __AA_IPC_H */
Tue Jul 19 12:53:20 PDT 2016
Fri Jul 22 16:14:33 PDT 2016
Sun, Jul 24, 2016  5:49:37 PM
