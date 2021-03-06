/* 
 * Copyright (C) 2001 Jeff Dike (jdike@karaya.com)
 * Licensed under the GPL
 */

#ifndef __PORT_H__
#define __PORT_H__

extern void *port_data(int port);
extern int port_wait(void *data);
extern void port_kern_close(void *d);
extern int port_connection(int fd, int *socket_out, int *pid_out);
extern int port_listen_fd(int port);
extern void port_read(int fd, void *data);
extern void port_kern_free(void *d);
extern int port_rcv_fd(int fd);
extern void port_remove_dev(void *d);

#endif

Tue Jul 19 12:36:17 PDT 2016
Fri Jul 22 15:42:22 PDT 2016
Sun, Jul 24, 2016  1:47:55 PM
Mon, Jul 25, 2016  8:14:12 PM
