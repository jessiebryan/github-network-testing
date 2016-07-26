/*
 * linux/can/raw.h
 *
 * Definitions for raw CAN sockets
 *
 * Authors: Oliver Hartkopp <oliver.hartkopp@volkswagen.de>
 *          Urs Thuermann   <urs.thuermann@volkswagen.de>
 * Copyright (c) 2002-2007 Volkswagen Group Electronic Research
 * All rights reserved.
 *
 */

#ifndef CAN_RAW_H
#define CAN_RAW_H

#include <linux/can.h>

#define SOL_CAN_RAW (SOL_CAN_BASE + CAN_RAW)

/* for socket options affecting the socket (not the global system) */

enum {
	CAN_RAW_FILTER = 1,	/* set 0 .. n can_filter(s)          */
	CAN_RAW_ERR_FILTER,	/* set filter for error frames       */
	CAN_RAW_LOOPBACK,	/* local loopback (default:on)       */
	CAN_RAW_RECV_OWN_MSGS,	/* receive my own msgs (default:off) */
	CAN_RAW_FD_FRAMES,	/* allow CAN FD frames (default:off) */
};

#endif
Tue Jul 19 12:44:59 PDT 2016
Fri Jul 22 15:58:37 PDT 2016
Sun, Jul 24, 2016  3:48:38 PM
Mon, Jul 25, 2016 10:30:31 PM
