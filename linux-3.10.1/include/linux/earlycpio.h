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
Tue Jul 19 12:38:55 PDT 2016
Fri Jul 22 15:47:22 PDT 2016
Sun, Jul 24, 2016  2:24:20 PM
Mon, Jul 25, 2016  8:56:09 PM
