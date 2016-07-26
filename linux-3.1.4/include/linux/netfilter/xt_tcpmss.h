#ifndef _XT_TCPMSS_MATCH_H
#define _XT_TCPMSS_MATCH_H

#include <linux/types.h>

struct xt_tcpmss_match_info {
    __u16 mss_min, mss_max;
    __u8 invert;
};

#endif /*_XT_TCPMSS_MATCH_H*/
Tue Jul 19 12:35:57 PDT 2016
Fri Jul 22 15:41:44 PDT 2016
Sun, Jul 24, 2016  1:43:11 PM
Mon, Jul 25, 2016  8:08:36 PM
