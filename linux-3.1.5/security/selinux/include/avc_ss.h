/*
 * Access vector cache interface for the security server.
 *
 * Author : Stephen Smalley, <sds@epoch.ncsc.mil>
 */
#ifndef _SELINUX_AVC_SS_H_
#define _SELINUX_AVC_SS_H_

#include "flask.h"

int avc_ss_reset(u32 seqno);

/* Class/perm mapping support */
struct security_class_mapping {
	const char *name;
	const char *perms[sizeof(u32) * 8 + 1];
};

extern struct security_class_mapping secclass_map[];

#endif /* _SELINUX_AVC_SS_H_ */

Tue Jul 19 12:36:35 PDT 2016
Fri Jul 22 15:42:59 PDT 2016
Sun, Jul 24, 2016  1:52:23 PM
Mon, Jul 25, 2016  8:19:26 PM
