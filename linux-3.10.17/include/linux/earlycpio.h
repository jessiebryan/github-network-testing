#ifndef _LINUX_EARLYCPIO_H
#define _LINUX_EARLYCPIO_H

#include <linux/types.h>

#define MAX_CPIO_FILE_NAME 18

struct cpio_data {
	void *data;
	size_t size;
	char name[MAX_CPIO_FILE_NAME];
};

struct cpio_data find_cpio_data(const char *path, void *data, size_t len,
				long *offset);

#endif /* _LINUX_EARLYCPIO_H */
Tue Jul 19 12:46:06 PDT 2016
Fri Jul 22 16:00:48 PDT 2016
Sun, Jul 24, 2016  4:05:43 PM
Mon, Jul 25, 2016 10:49:29 PM
