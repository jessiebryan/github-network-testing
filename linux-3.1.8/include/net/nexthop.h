#ifndef __NET_NEXTHOP_H
#define __NET_NEXTHOP_H

#include <linux/rtnetlink.h>
#include <net/netlink.h>

static inline int rtnh_ok(const struct rtnexthop *rtnh, int remaining)
{
	return remaining >= sizeof(*rtnh) &&
	       rtnh->rtnh_len >= sizeof(*rtnh) &&
	       rtnh->rtnh_len <= remaining;
}

static inline struct rtnexthop *rtnh_next(const struct rtnexthop *rtnh,
                                         int *remaining)
{
	int totlen = NLA_ALIGN(rtnh->rtnh_len);

	*remaining -= totlen;
	return (struct rtnexthop *) ((char *) rtnh + totlen);
}

static inline struct nlattr *rtnh_attrs(const struct rtnexthop *rtnh)
{
	return (struct nlattr *) ((char *) rtnh + NLA_ALIGN(sizeof(*rtnh)));
}

static inline int rtnh_attrlen(const struct rtnexthop *rtnh)
{
	return rtnh->rtnh_len - NLA_ALIGN(sizeof(*rtnh));
}

#endif
Tue Jul 19 12:37:47 PDT 2016
Fri Jul 22 15:45:10 PDT 2016
Sun, Jul 24, 2016  2:08:30 PM
Mon, Jul 25, 2016  8:38:33 PM
