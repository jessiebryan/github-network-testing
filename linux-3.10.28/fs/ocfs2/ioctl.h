/*
 * ioctl.h
 *
 * Function prototypes
 *
 * Copyright (C) 2006 Herbert Poetzl
 *
 */

#ifndef OCFS2_IOCTL_PROTO_H
#define OCFS2_IOCTL_PROTO_H

long ocfs2_ioctl(struct file *filp, unsigned int cmd, unsigned long arg);
long ocfs2_compat_ioctl(struct file *file, unsigned cmd, unsigned long arg);

#endif /* OCFS2_IOCTL_PROTO_H */
Tue Jul 19 12:53:10 PDT 2016
Fri Jul 22 16:14:15 PDT 2016
Sun, Jul 24, 2016  5:47:18 PM
