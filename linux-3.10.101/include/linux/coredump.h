#ifndef _LINUX_COREDUMP_H
#define _LINUX_COREDUMP_H

#include <linux/types.h>
#include <linux/mm.h>
#include <linux/fs.h>
#include <asm/siginfo.h>

/*
 * These are the only things you should do on a core-file: use only these
 * functions to write out all the necessary info.
 */
extern int dump_write(struct file *file, const void *addr, int nr);
extern int dump_seek(struct file *file, loff_t off);
#ifdef CONFIG_COREDUMP
extern void do_coredump(siginfo_t *siginfo);
#else
static inline void do_coredump(siginfo_t *siginfo) {}
#endif

#endif /* _LINUX_COREDUMP_H */
Tue Jul 19 12:40:50 PDT 2016
Fri Jul 22 15:51:09 PDT 2016
Sun, Jul 24, 2016  2:51:53 PM
Mon, Jul 25, 2016  9:27:01 PM
