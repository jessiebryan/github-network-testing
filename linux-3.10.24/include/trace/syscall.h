#ifndef _TRACE_SYSCALL_H
#define _TRACE_SYSCALL_H

#include <linux/tracepoint.h>
#include <linux/unistd.h>
#include <linux/ftrace_event.h>

#include <asm/ptrace.h>


/*
 * A syscall entry in the ftrace syscalls array.
 *
 * @name: name of the syscall
 * @syscall_nr: number of the syscall
 * @nb_args: number of parameters it takes
 * @types: list of types as strings
 * @args: list of args as strings (args[i] matches types[i])
 * @enter_event: associated syscall_enter trace event
 * @exit_event: associated syscall_exit trace event
 */
struct syscall_metadata {
	const char	*name;
	int		syscall_nr;
	int		nb_args;
	const char	**types;
	const char	**args;
	struct list_head enter_fields;

	struct ftrace_event_call *enter_event;
	struct ftrace_event_call *exit_event;
};

#endif /* _TRACE_SYSCALL_H */
Tue Jul 19 12:50:41 PDT 2016
Fri Jul 22 16:09:24 PDT 2016
Sun, Jul 24, 2016  5:11:45 PM
Tue, Jul 26, 2016 12:02:47 AM
