#ifndef _FS_CEPH_DEBUG_H
#define _FS_CEPH_DEBUG_H

#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt

#ifdef CONFIG_CEPH_LIB_PRETTYDEBUG

/*
 * wrap pr_debug to include a filename:lineno prefix on each line.
 * this incurs some overhead (kernel size and execution time) due to
 * the extra function call at each call site.
 */

# if defined(DEBUG) || defined(CONFIG_DYNAMIC_DEBUG)
extern const char *ceph_file_part(const char *s, int len);
#  define dout(fmt, ...)						\
	pr_debug("%.*s %12.12s:%-4d : " fmt,				\
		 8 - (int)sizeof(KBUILD_MODNAME), "    ",		\
		 ceph_file_part(__FILE__, sizeof(__FILE__)),		\
		 __LINE__, ##__VA_ARGS__)
# else
/* faux printk call just to see any compiler warnings. */
#  define dout(fmt, ...)	do {				\
		if (0)						\
			printk(KERN_DEBUG fmt, ##__VA_ARGS__);	\
	} while (0)
# endif

#else

/*
 * or, just wrap pr_debug
 */
# define dout(fmt, ...)	pr_debug(" " fmt, ##__VA_ARGS__)

#endif

#endif
Tue Jul 19 12:35:55 PDT 2016
Fri Jul 22 15:41:40 PDT 2016
Sun, Jul 24, 2016  1:42:41 PM
Mon, Jul 25, 2016  8:08:00 PM
Tue, Jul 26, 2016  2:42:10 PM
