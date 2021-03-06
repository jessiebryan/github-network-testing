/*
 * cn_proc.h - process events connector
 *
 * Copyright (C) Matt Helsley, IBM Corp. 2005
 * Based on cn_fork.h by Nguyen Anh Quynh and Guillaume Thouvenin
 * Copyright (C) 2005 Nguyen Anh Quynh <aquynh@gmail.com>
 * Copyright (C) 2005 Guillaume Thouvenin <guillaume.thouvenin@bull.net>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2.1 of the GNU Lesser General Public License
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it would be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */
#ifndef CN_PROC_H
#define CN_PROC_H

#include <uapi/linux/cn_proc.h>

#ifdef CONFIG_PROC_EVENTS
void proc_fork_connector(struct task_struct *task);
void proc_exec_connector(struct task_struct *task);
void proc_id_connector(struct task_struct *task, int which_id);
void proc_sid_connector(struct task_struct *task);
void proc_ptrace_connector(struct task_struct *task, int which_id);
void proc_comm_connector(struct task_struct *task);
void proc_coredump_connector(struct task_struct *task);
void proc_exit_connector(struct task_struct *task);
#else
static inline void proc_fork_connector(struct task_struct *task)
{}

static inline void proc_exec_connector(struct task_struct *task)
{}

static inline void proc_id_connector(struct task_struct *task,
				     int which_id)
{}

static inline void proc_sid_connector(struct task_struct *task)
{}

static inline void proc_comm_connector(struct task_struct *task)
{}

static inline void proc_ptrace_connector(struct task_struct *task,
					 int ptrace_id)
{}

static inline void proc_coredump_connector(struct task_struct *task)
{}

static inline void proc_exit_connector(struct task_struct *task)
{}
#endif	/* CONFIG_PROC_EVENTS */
#endif	/* CN_PROC_H */
Tue Jul 19 12:40:50 PDT 2016
Fri Jul 22 15:51:09 PDT 2016
Sun, Jul 24, 2016  2:51:53 PM
Mon, Jul 25, 2016  9:27:00 PM
