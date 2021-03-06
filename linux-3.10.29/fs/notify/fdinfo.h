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
Tue Jul 19 12:53:49 PDT 2016
Fri Jul 22 16:15:29 PDT 2016
Sun, Jul 24, 2016  5:56:35 PM
Tue, Jul 26, 2016 12:52:15 AM
