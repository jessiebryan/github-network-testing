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
Tue Jul 19 12:33:42 PDT 2016
Fri Jul 22 15:38:25 PDT 2016
Sun, Jul 24, 2016  1:18:43 PM
Mon, Jul 25, 2016  6:26:39 PM
Mon, Jul 25, 2016  7:39:47 PM
Tue, Jul 26, 2016  2:15:37 PM
