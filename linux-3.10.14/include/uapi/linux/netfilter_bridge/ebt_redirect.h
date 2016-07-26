#ifndef __LINUX_BRIDGE_EBT_REDIRECT_H
#define __LINUX_BRIDGE_EBT_REDIRECT_H

struct ebt_redirect_info {
	/* EBT_ACCEPT, EBT_DROP, EBT_CONTINUE or EBT_RETURN */
	int target;
};
#define EBT_REDIRECT_TARGET "redirect"

#endif
Tue Jul 19 12:44:21 PDT 2016
Fri Jul 22 15:57:28 PDT 2016
Sun, Jul 24, 2016  3:39:36 PM
Mon, Jul 25, 2016 10:20:25 PM
