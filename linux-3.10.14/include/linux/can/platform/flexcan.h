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
Tue Jul 19 12:44:14 PDT 2016
Fri Jul 22 15:57:15 PDT 2016
Sun, Jul 24, 2016  3:37:56 PM
Mon, Jul 25, 2016 10:18:36 PM
