#ifndef __LINUX_LTALK_H
#define __LINUX_LTALK_H

#define LTALK_HLEN		1
#define LTALK_MTU		600
#define LTALK_ALEN		1

#ifdef __KERNEL__
extern struct net_device *alloc_ltalkdev(int sizeof_priv);
#endif

#endif
Tue Jul 19 12:38:19 PDT 2016
Fri Jul 22 15:46:10 PDT 2016
Sun, Jul 24, 2016  2:15:52 PM
Mon, Jul 25, 2016  8:46:44 PM
