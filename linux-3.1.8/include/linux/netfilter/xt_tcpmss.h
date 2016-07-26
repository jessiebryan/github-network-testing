#ifndef _XT_TCPMSS_MATCH_H
#define _XT_TCPMSS_MATCH_H

#include <linux/types.h>

struct xt_tcpmss_match_info {
    __u16 mss_min, mss_max;
    __u8 invert;
};

#endif /*_XT_TCPMSS_MATCH_H*/
Tue Jul 19 12:37:43 PDT 2016
Fri Jul 22 15:45:06 PDT 2016
Sun, Jul 24, 2016  2:07:55 PM
Mon, Jul 25, 2016  8:37:54 PM
