#ifndef __COW_SYS_H__
#define __COW_SYS_H__

#include "kern_util.h"
#include "os.h"
#include "user.h"
#include "um_malloc.h"

static inline void *cow_malloc(int size)
{
	return uml_kmalloc(size, UM_GFP_KERNEL);
}

static inline void cow_free(void *ptr)
{
	kfree(ptr);
}

#define cow_printf printk

static inline char *cow_strdup(char *str)
{
	return uml_strdup(str);
}

static inline int cow_seek_file(int fd, __u64 offset)
{
	return os_seek_file(fd, offset);
}

static inline int cow_file_size(char *file, unsigned long long *size_out)
{
	return os_file_size(file, size_out);
}

static inline int cow_write_file(int fd, void *buf, int size)
{
	return os_write_file(fd, buf, size);
}

#endif
Tue Jul 19 12:36:51 PDT 2016
Fri Jul 22 15:43:29 PDT 2016
Sun, Jul 24, 2016  1:56:09 PM
Mon, Jul 25, 2016  8:23:54 PM
