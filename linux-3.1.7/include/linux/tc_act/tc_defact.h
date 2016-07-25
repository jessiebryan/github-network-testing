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
Tue Jul 19 12:37:07 PDT 2016
Fri Jul 22 15:44:00 PDT 2016
Sun, Jul 24, 2016  1:59:58 PM
