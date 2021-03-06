/*
 * Copyright (C) 2004 Jeff Dike (jdike@karaya.com)
 * Licensed under the GPL
 */

#ifndef AIO_H__
#define AIO_H__

enum aio_type { AIO_READ, AIO_WRITE, AIO_MMAP };

struct aio_thread_reply {
	void *data;
	int err;
};

struct aio_context {
	int reply_fd;
	struct aio_context *next;
};

#define INIT_AIO_CONTEXT { .reply_fd	= -1, \
			   .next	= NULL }

extern int submit_aio(enum aio_type type, int fd, char *buf, int len,
		      unsigned long long offset, int reply_fd,
                      struct aio_context *aio);

#endif
Tue Jul 19 12:34:03 PDT 2016
Fri Jul 22 15:39:00 PDT 2016
Sun, Jul 24, 2016  1:23:12 PM
Mon, Jul 25, 2016  6:32:02 PM
Mon, Jul 25, 2016  7:45:04 PM
Tue, Jul 26, 2016  2:20:39 PM
