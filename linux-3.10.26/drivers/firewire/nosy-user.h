#ifndef __nosy_user_h
#define __nosy_user_h

#include <linux/ioctl.h>
#include <linux/types.h>

#define NOSY_IOC_GET_STATS _IOR('&', 0, struct nosy_stats)
#define NOSY_IOC_START     _IO('&', 1)
#define NOSY_IOC_STOP      _IO('&', 2)
#define NOSY_IOC_FILTER    _IOW('&', 2, __u32)

struct nosy_stats {
	__u32 total_packet_count;
	__u32 lost_packet_count;
};

/*
 * Format of packets returned from the kernel driver:
 *
 *	quadlet with timestamp		(microseconds, CPU endian)
 *	quadlet-padded packet data...	(little endian)
 *	quadlet with ack		(little endian)
 */

#endif /* __nosy_user_h */
Tue Jul 19 12:51:42 PDT 2016
Fri Jul 22 16:11:21 PDT 2016
Sun, Jul 24, 2016  5:26:10 PM
Tue, Jul 26, 2016 12:18:42 AM
