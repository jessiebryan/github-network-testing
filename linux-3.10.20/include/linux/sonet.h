/* sonet.h - SONET/SHD physical layer control */
#ifndef LINUX_SONET_H
#define LINUX_SONET_H


#include <linux/atomic.h>
#include <uapi/linux/sonet.h>

struct k_sonet_stats {
#define __HANDLE_ITEM(i) atomic_t i
	__SONET_ITEMS
#undef __HANDLE_ITEM
};

extern void sonet_copy_stats(struct k_sonet_stats *from,struct sonet_stats *to);
extern void sonet_subtract_stats(struct k_sonet_stats *from,
    struct sonet_stats *to);

#endif
Tue Jul 19 12:48:04 PDT 2016
Fri Jul 22 16:04:28 PDT 2016
Sun, Jul 24, 2016  4:34:08 PM
Mon, Jul 25, 2016 11:21:03 PM
