#ifndef __LINUX_GRE_H
#define __LINUX_GRE_H

#include <linux/skbuff.h>

#define GREPROTO_CISCO		0
#define GREPROTO_PPTP		1
#define GREPROTO_MAX		2

struct gre_protocol {
	int  (*handler)(struct sk_buff *skb);
	void (*err_handler)(struct sk_buff *skb, u32 info);
};

int gre_add_protocol(const struct gre_protocol *proto, u8 version);
int gre_del_protocol(const struct gre_protocol *proto, u8 version);

#endif
Tue Jul 19 12:34:35 PDT 2016
Fri Jul 22 15:39:32 PDT 2016
Sun, Jul 24, 2016  1:27:11 PM
Mon, Jul 25, 2016  6:36:49 PM
Mon, Jul 25, 2016  7:49:44 PM
