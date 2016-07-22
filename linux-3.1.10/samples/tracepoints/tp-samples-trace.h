#ifndef _TP_SAMPLES_TRACE_H
#define _TP_SAMPLES_TRACE_H

#include <linux/proc_fs.h>	/* for struct inode and struct file */
#include <linux/tracepoint.h>

DECLARE_TRACE(subsys_event,
	TP_PROTO(struct inode *inode, struct file *file),
	TP_ARGS(inode, file));
DECLARE_TRACE_NOARGS(subsys_eventb);
#endif
Tue Jul 19 12:33:45 PDT 2016
Fri Jul 22 15:38:31 PDT 2016
