/* atm_tcp.h - Driver-specific declarations of the ATMTCP driver (for use by
	       driver-specific utilities) */

/* Written 1997-2000 by Werner Almesberger, EPFL LRC/ICA */

#ifndef LINUX_ATM_TCP_H
#define LINUX_ATM_TCP_H

#include <uapi/linux/atm_tcp.h>


struct atm_tcp_ops {
	int (*attach)(struct atm_vcc *vcc,int itf);
	int (*create_persistent)(int itf);
	int (*remove_persistent)(int itf);
	struct module *owner;
};

extern struct atm_tcp_ops atm_tcp_ops;

#endif
Tue Jul 19 12:40:11 PDT 2016
Fri Jul 22 15:49:54 PDT 2016
Sun, Jul 24, 2016  2:42:36 PM
Mon, Jul 25, 2016  9:16:29 PM
