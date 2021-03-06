/*
 * Header file for iptables xt_AUDIT target
 *
 * (C) 2010-2011 Thomas Graf <tgraf@redhat.com>
 * (C) 2010-2011 Red Hat, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _XT_AUDIT_TARGET_H
#define _XT_AUDIT_TARGET_H

#include <linux/types.h>

enum {
	XT_AUDIT_TYPE_ACCEPT = 0,
	XT_AUDIT_TYPE_DROP,
	XT_AUDIT_TYPE_REJECT,
	__XT_AUDIT_TYPE_MAX,
};

#define XT_AUDIT_TYPE_MAX (__XT_AUDIT_TYPE_MAX - 1)

struct xt_audit_info {
	__u8 type; /* XT_AUDIT_TYPE_* */
};

#endif /* _XT_AUDIT_TARGET_H */
Tue Jul 19 12:39:01 PDT 2016
Fri Jul 22 15:47:33 PDT 2016
Sun, Jul 24, 2016  2:25:49 PM
Mon, Jul 25, 2016  8:57:49 PM
