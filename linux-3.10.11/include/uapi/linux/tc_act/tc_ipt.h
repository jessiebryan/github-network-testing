#ifndef __LINUX_TC_IPT_H
#define __LINUX_TC_IPT_H

#include <linux/pkt_cls.h>

#define TCA_ACT_IPT 6

enum {
	TCA_IPT_UNSPEC,
	TCA_IPT_TABLE,
	TCA_IPT_HOOK,
	TCA_IPT_INDEX,
	TCA_IPT_CNT,
	TCA_IPT_TM,
	TCA_IPT_TARG,
	__TCA_IPT_MAX
};
#define TCA_IPT_MAX (__TCA_IPT_MAX - 1)
                                                                                
#endif
Tue Jul 19 12:42:25 PDT 2016
Fri Jul 22 15:53:55 PDT 2016
Sun, Jul 24, 2016  3:12:00 PM
Mon, Jul 25, 2016  9:49:42 PM
