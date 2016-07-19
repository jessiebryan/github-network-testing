#ifndef _XT_TCPMSS_MATCH_H
#define _XT_TCPMSS_MATCH_H

#include <linux/types.h>

struct xt_tcpmss_match_info {
    __u16 mss_min, mss_max;
    __u8 invert;
};

#endif /*_XT_TCPMSS_MATCH_H*/
Tue Jul 19 12:34:26 PDT 2016
