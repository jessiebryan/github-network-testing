/*
 * Copyright (C) 2007 Luca Bigliardi (shammash@artha.org).
 * Licensed under the GPL.
 */

#ifndef __UM_VDE_H__
#define __UM_VDE_H__

struct vde_data {
	char *vde_switch;
	char *descr;
	void *args;
	void *conn;
	void *dev;
};

struct vde_init {
	char *vde_switch;
	char *descr;
	int port;
	char *group;
	int mode;
};

extern const struct net_user_info vde_user_info;

extern void vde_init_libstuff(struct vde_data *vpri, struct vde_init *init);

extern int vde_user_read(void *conn, void *buf, int len);
extern int vde_user_write(void *conn, void *buf, int len);

#endif
Tue Jul 19 12:33:26 PDT 2016
Fri Jul 22 15:37:55 PDT 2016
Sun, Jul 24, 2016  1:14:55 PM
Mon, Jul 25, 2016  6:22:06 PM
Mon, Jul 25, 2016  7:35:20 PM
Tue, Jul 26, 2016  2:11:20 PM
