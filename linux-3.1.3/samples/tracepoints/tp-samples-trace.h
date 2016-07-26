#ifndef _TP_SAMPLES_TRACE_H
#define _TP_SAMPLES_TRACE_H

#include <linux/proc_fs.h>	/* for struct inode and struct file */
#include <linux/tracepoint.h>

DECLARE_TRACE(subsys_event,
	TP_PROTO(struct inode *inode, struct file *file),
	TP_ARGS(inode, file));
DECLARE_TRACE_NOARGS(subsys_eventb);
#endif
Tue Jul 19 12:35:27 PDT 2016
Fri Jul 22 15:40:44 PDT 2016
Sun, Jul 24, 2016  1:35:52 PM
Mon, Jul 25, 2016  7:59:57 PM
Tue, Jul 26, 2016  2:34:37 PM
