#ifndef __FSNOTIFY_FDINFO_H__
#define __FSNOTIFY_FDINFO_H__

#include <linux/errno.h>
#include <linux/proc_fs.h>

struct seq_file;
struct file;

#ifdef CONFIG_PROC_FS

#ifdef CONFIG_INOTIFY_USER
extern int inotify_show_fdinfo(struct seq_file *m, struct file *f);
#endif

#ifdef CONFIG_FANOTIFY
extern int fanotify_show_fdinfo(struct seq_file *m, struct file *f);
#endif

#else /* CONFIG_PROC_FS */

#define inotify_show_fdinfo	NULL
#define fanotify_show_fdinfo	NULL

#endif /* CONFIG_PROC_FS */

#endif /* __FSNOTIFY_FDINFO_H__ */
Tue Jul 19 12:39:31 PDT 2016
Fri Jul 22 15:48:35 PDT 2016
Sun, Jul 24, 2016  2:33:06 PM
Mon, Jul 25, 2016  9:05:56 PM
