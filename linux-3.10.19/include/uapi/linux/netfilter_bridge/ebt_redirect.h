#ifndef __LINUX_BRIDGE_EBT_REDIRECT_H
#define __LINUX_BRIDGE_EBT_REDIRECT_H

struct ebt_redirect_info {
	/* EBT_ACCEPT, EBT_DROP, EBT_CONTINUE or EBT_RETURN */
	int target;
};
#define EBT_REDIRECT_TARGET "redirect"

#endif
Tue Jul 19 12:47:29 PDT 2016
Fri Jul 22 16:03:23 PDT 2016
Sun, Jul 24, 2016  4:25:42 PM
Mon, Jul 25, 2016 11:11:41 PM
