#ifndef __LINUX_TC_DEF_H
#define __LINUX_TC_DEF_H

#include <linux/pkt_cls.h>

struct tc_defact {
	tc_gen;
};
                                                                                
enum {
	TCA_DEF_UNSPEC,
	TCA_DEF_TM,
	TCA_DEF_PARMS,
	TCA_DEF_DATA,
	__TCA_DEF_MAX
};
#define TCA_DEF_MAX (__TCA_DEF_MAX - 1)

#endif
Tue Jul 19 12:53:54 PDT 2016
Fri Jul 22 16:15:39 PDT 2016
Sun, Jul 24, 2016  5:57:50 PM
Tue, Jul 26, 2016 12:53:37 AM
