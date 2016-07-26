#ifndef __LINUX_BRIDGE_EBT_REDIRECT_H
#define __LINUX_BRIDGE_EBT_REDIRECT_H

struct ebt_redirect_info {
	/* EBT_ACCEPT, EBT_DROP, EBT_CONTINUE or EBT_RETURN */
	int target;
};
#define EBT_REDIRECT_TARGET "redirect"

#endif
Tue Jul 19 12:48:46 PDT 2016
Fri Jul 22 16:05:47 PDT 2016
Sun, Jul 24, 2016  4:44:10 PM
Mon, Jul 25, 2016 11:32:12 PM
