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

/*
 * The security server must be initialized before
 * any labeling or access decisions can be provided.
 */
extern int ss_initialized;

#endif /* _SELINUX_AVC_SS_H_ */

Tue Jul 19 12:39:02 PDT 2016
Fri Jul 22 15:47:36 PDT 2016
Sun, Jul 24, 2016  2:26:14 PM
Mon, Jul 25, 2016  8:58:17 PM
