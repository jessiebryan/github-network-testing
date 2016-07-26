/* include/net/dsfield.h - Manipulation of the Differentiated Services field */

/* Written 1998-2000 by Werner Almesberger, EPFL ICA */


#ifndef __NET_DSFIELD_H
#define __NET_DSFIELD_H

#include <linux/types.h>
#include <linux/ip.h>
#include <linux/ipv6.h>
#include <asm/byteorder.h>


static inline __u8 ipv4_get_dsfield(const struct iphdr *iph)
{
	return iph->tos;
}


static inline __u8 ipv6_get_dsfield(const struct ipv6hdr *ipv6h)
{
	return ntohs(*(const __be16 *)ipv6h) >> 4;
}


static inline void ipv4_change_dsfield(struct iphdr *iph,__u8 mask,
    __u8 value)
{
        __u32 check = ntohs((__force __be16)iph->check);
	__u8 dsfield;

	dsfield = (iph->tos & mask) | value;
	check += iph->tos;
	if ((check+1) >> 16) check = (check+1) & 0xffff;
	check -= dsfield;
	check += check >> 16; /* adjust carry */
	iph->check = (__force __sum16)htons(check);
	iph->tos = dsfield;
}


static inline void ipv6_change_dsfield(struct ipv6hdr *ipv6h,__u8 mask,
    __u8 value)
{
        __u16 tmp;

	tmp = ntohs(*(__be16 *) ipv6h);
	tmp = (tmp & ((mask << 4) | 0xf00f)) | (value << 4);
	*(__be16 *) ipv6h = htons(tmp);
}


#endif
Tue Jul 19 12:33:43 PDT 2016
Fri Jul 22 15:38:27 PDT 2016
Sun, Jul 24, 2016  1:18:55 PM
Mon, Jul 25, 2016  6:26:54 PM
Mon, Jul 25, 2016  7:40:02 PM
Tue, Jul 26, 2016  2:15:51 PM
