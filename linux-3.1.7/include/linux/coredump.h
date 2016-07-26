#ifndef _LINUX_COREDUMP_H
#define _LINUX_COREDUMP_H

#include <linux/types.h>
#include <linux/mm.h>
#include <linux/fs.h>

/*
 * These are the only things you should do on a core-file: use only these
 * functions to write out all the necessary info.
 */
extern int dump_write(struct file *file, const void *addr, int nr);
extern int dump_seek(struct file *file, loff_t off);

#endif /* _LINUX_COREDUMP_H */
Tue Jul 19 12:37:04 PDT 2016
Fri Jul 22 15:43:54 PDT 2016
Sun, Jul 24, 2016  1:59:12 PM
Mon, Jul 25, 2016  8:27:32 PM
