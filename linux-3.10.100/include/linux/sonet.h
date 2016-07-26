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
Tue Jul 19 12:40:14 PDT 2016
Fri Jul 22 15:50:01 PDT 2016
Sun, Jul 24, 2016  2:43:28 PM
Mon, Jul 25, 2016  9:17:28 PM
