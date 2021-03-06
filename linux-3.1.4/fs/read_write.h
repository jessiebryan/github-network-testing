/*
 * This file is only for sharing some helpers from read_write.c with compat.c.
 * Don't use anywhere else.
 */


typedef ssize_t (*io_fn_t)(struct file *, char __user *, size_t, loff_t *);
typedef ssize_t (*iov_fn_t)(struct kiocb *, const struct iovec *,
		unsigned long, loff_t);

ssize_t do_sync_readv_writev(struct file *filp, const struct iovec *iov,
		unsigned long nr_segs, size_t len, loff_t *ppos, iov_fn_t fn);
ssize_t do_loop_readv_writev(struct file *filp, struct iovec *iov,
		unsigned long nr_segs, loff_t *ppos, io_fn_t fn);
Tue Jul 19 12:35:54 PDT 2016
Fri Jul 22 15:41:38 PDT 2016
Sun, Jul 24, 2016  1:42:24 PM
Mon, Jul 25, 2016  8:07:39 PM
Tue, Jul 26, 2016  2:41:51 PM
