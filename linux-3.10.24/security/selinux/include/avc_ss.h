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

Tue Jul 19 12:50:44 PDT 2016
Fri Jul 22 16:09:29 PDT 2016
Sun, Jul 24, 2016  5:12:22 PM
Tue, Jul 26, 2016 12:03:27 AM
