#ifndef _XT_STATE_H
#define _XT_STATE_H

#define XT_STATE_BIT(ctinfo) (1 << ((ctinfo)%IP_CT_IS_REPLY+1))
#define XT_STATE_INVALID (1 << 0)

#define XT_STATE_UNTRACKED (1 << (IP_CT_NUMBER + 1))

struct xt_state_info {
	unsigned int statemask;
};
#endif /*_XT_STATE_H*/
Tue Jul 19 12:45:00 PDT 2016
Fri Jul 22 15:58:38 PDT 2016
Sun, Jul 24, 2016  3:48:47 PM
Mon, Jul 25, 2016 10:30:41 PM
