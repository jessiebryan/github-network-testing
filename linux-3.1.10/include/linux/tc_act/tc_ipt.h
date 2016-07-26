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
Tue Jul 19 12:33:42 PDT 2016
Fri Jul 22 15:38:25 PDT 2016
Sun, Jul 24, 2016  1:18:43 PM
Mon, Jul 25, 2016  6:26:39 PM
Mon, Jul 25, 2016  7:39:47 PM
Tue, Jul 26, 2016  2:15:37 PM
