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
Tue Jul 19 12:45:33 PDT 2016
Fri Jul 22 15:59:43 PDT 2016
Sun, Jul 24, 2016  3:57:14 PM
Mon, Jul 25, 2016 10:40:02 PM
