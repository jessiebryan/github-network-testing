#ifndef __NET_TC_GACT_H
#define __NET_TC_GACT_H

#include <net/act_api.h>

struct tcf_gact {
	struct tcf_common	common;
#ifdef CONFIG_GACT_PROB
        u16			tcfg_ptype;
        u16			tcfg_pval;
        int			tcfg_paction;
#endif
};
#define to_gact(pc) \
	container_of(pc, struct tcf_gact, common)

#endif /* __NET_TC_GACT_H */
Tue Jul 19 12:45:34 PDT 2016
Fri Jul 22 15:59:47 PDT 2016
Sun, Jul 24, 2016  3:57:38 PM
Mon, Jul 25, 2016 10:40:30 PM
