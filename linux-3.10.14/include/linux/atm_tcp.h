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
Tue Jul 19 12:44:14 PDT 2016
Fri Jul 22 15:57:15 PDT 2016
Sun, Jul 24, 2016  3:37:54 PM
Mon, Jul 25, 2016 10:18:34 PM
