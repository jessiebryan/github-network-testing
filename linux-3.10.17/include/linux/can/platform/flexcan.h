/*
 * Copyright (C) 2010 Marc Kleine-Budde <kernel@pengutronix.de>
 *
 * This file is released under the GPLv2
 *
 */

#ifndef __CAN_PLATFORM_FLEXCAN_H
#define __CAN_PLATFORM_FLEXCAN_H

/**
 * struct flexcan_platform_data - flex CAN controller platform data
 * @transceiver_enable:         - called to power on/off the transceiver
 *
 */
struct flexcan_platform_data {
	void (*transceiver_switch)(int enable);
};

#endif /* __CAN_PLATFORM_FLEXCAN_H */
Tue Jul 19 12:46:06 PDT 2016
Fri Jul 22 16:00:47 PDT 2016
Sun, Jul 24, 2016  4:05:37 PM
Mon, Jul 25, 2016 10:49:23 PM
