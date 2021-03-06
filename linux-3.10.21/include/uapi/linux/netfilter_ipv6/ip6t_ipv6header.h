/* ipv6header match - matches IPv6 packets based
on whether they contain certain headers */

/* Original idea: Brad Chapman 
 * Rewritten by: Andras Kis-Szabo <kisza@sch.bme.hu> */


#ifndef __IPV6HEADER_H
#define __IPV6HEADER_H

#include <linux/types.h>

struct ip6t_ipv6header_info {
	__u8 matchflags;
	__u8 invflags;
	__u8 modeflag;
};

#define MASK_HOPOPTS    128
#define MASK_DSTOPTS    64
#define MASK_ROUTING    32
#define MASK_FRAGMENT   16
#define MASK_AH         8
#define MASK_ESP        4
#define MASK_NONE       2
#define MASK_PROTO      1

#endif /* __IPV6HEADER_H */
Tue Jul 19 12:48:46 PDT 2016
Fri Jul 22 16:05:47 PDT 2016
Sun, Jul 24, 2016  4:44:11 PM
Mon, Jul 25, 2016 11:32:13 PM
