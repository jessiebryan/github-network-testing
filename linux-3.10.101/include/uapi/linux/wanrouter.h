/*
 * wanrouter.h	Legacy declarations kept around until X25 is removed
 */

#ifndef _UAPI_ROUTER_H
#define _UAPI_ROUTER_H

/* 'state' defines */
enum wan_states
{
	WAN_UNCONFIGURED,	/* link/channel is not configured */
	WAN_DISCONNECTED,	/* link/channel is disconnected */
	WAN_CONNECTING,		/* connection is in progress */
	WAN_CONNECTED		/* link/channel is operational */
};

#endif /* _UAPI_ROUTER_H */
Tue Jul 19 12:40:57 PDT 2016
Fri Jul 22 15:51:24 PDT 2016
Sun, Jul 24, 2016  2:53:36 PM
Mon, Jul 25, 2016  9:28:56 PM
