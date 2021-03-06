#ifndef _IP6T_MH_H
#define _IP6T_MH_H

#include <linux/types.h>

/* MH matching stuff */
struct ip6t_mh {
	__u8 types[2];	/* MH type range */
	__u8 invflags;	/* Inverse flags */
};

/* Values for "invflags" field in struct ip6t_mh. */
#define IP6T_MH_INV_TYPE	0x01	/* Invert the sense of type. */
#define IP6T_MH_INV_MASK	0x01	/* All possible flags. */

#endif /*_IP6T_MH_H*/
Tue Jul 19 12:35:23 PDT 2016
Fri Jul 22 15:40:37 PDT 2016
Sun, Jul 24, 2016  1:34:58 PM
Mon, Jul 25, 2016  7:58:54 PM
Tue, Jul 26, 2016  2:33:38 PM
