#ifndef _LINUX_IPSEC_H
#define _LINUX_IPSEC_H

/* The definitions, required to talk to KAME racoon IKE. */

#include <linux/pfkeyv2.h>

#define IPSEC_PORT_ANY		0
#define IPSEC_ULPROTO_ANY	255
#define IPSEC_PROTO_ANY		255

enum {
	IPSEC_MODE_ANY		= 0,	/* We do not support this for SA */
	IPSEC_MODE_TRANSPORT	= 1,
	IPSEC_MODE_TUNNEL	= 2,
	IPSEC_MODE_BEET         = 3
};

enum {
	IPSEC_DIR_ANY		= 0,
	IPSEC_DIR_INBOUND	= 1,
	IPSEC_DIR_OUTBOUND	= 2,
	IPSEC_DIR_FWD		= 3,	/* It is our own */
	IPSEC_DIR_MAX		= 4,
	IPSEC_DIR_INVALID	= 5
};

enum {
	IPSEC_POLICY_DISCARD	= 0,
	IPSEC_POLICY_NONE	= 1,
	IPSEC_POLICY_IPSEC	= 2,
	IPSEC_POLICY_ENTRUST	= 3,
	IPSEC_POLICY_BYPASS	= 4
};

enum {
	IPSEC_LEVEL_DEFAULT	= 0,
	IPSEC_LEVEL_USE		= 1,
	IPSEC_LEVEL_REQUIRE	= 2,
	IPSEC_LEVEL_UNIQUE	= 3
};

#define IPSEC_MANUAL_REQID_MAX	0x3fff

#define IPSEC_REPLAYWSIZE  32

#endif	/* _LINUX_IPSEC_H */
Tue Jul 19 12:53:57 PDT 2016
Fri Jul 22 16:15:45 PDT 2016
Sun, Jul 24, 2016  5:58:28 PM
Tue, Jul 26, 2016 12:54:20 AM
