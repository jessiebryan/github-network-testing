#ifndef EADM_SCH_H
#define EADM_SCH_H

#include <linux/device.h>
#include <linux/timer.h>
#include <linux/list.h>
#include "orb.h"

struct eadm_private {
	union orb orb;
	enum {EADM_IDLE, EADM_BUSY, EADM_NOT_OPER} state;
	struct timer_list timer;
	struct list_head head;
	struct subchannel *sch;
} __aligned(8);

#define get_eadm_private(n) ((struct eadm_private *)dev_get_drvdata(&n->dev))
#define set_eadm_private(n, p) (dev_set_drvdata(&n->dev, p))

#endif
Tue Jul 19 12:38:48 PDT 2016
Fri Jul 22 15:47:09 PDT 2016
Sun, Jul 24, 2016  2:22:52 PM
Mon, Jul 25, 2016  8:54:31 PM
