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
Tue Jul 19 12:53:57 PDT 2016
Fri Jul 22 16:15:46 PDT 2016
Sun, Jul 24, 2016  5:58:39 PM
Tue, Jul 26, 2016 12:54:32 AM
