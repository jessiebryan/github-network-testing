/*
 * SELinux services exported to the rest of the kernel.
 *
 * Author: James Morris <jmorris@redhat.com>
 *
 * Copyright (C) 2005 Red Hat, Inc., James Morris <jmorris@redhat.com>
 * Copyright (C) 2006 Trusted Computer Solutions, Inc. <dgoeddel@trustedcs.com>
 * Copyright (C) 2006 IBM Corporation, Timothy R. Chavez <tinytim@us.ibm.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2,
 * as published by the Free Software Foundation.
 */
#ifndef _LINUX_SELINUX_H
#define _LINUX_SELINUX_H

struct selinux_audit_rule;
struct audit_context;
struct kern_ipc_perm;

#ifdef CONFIG_SECURITY_SELINUX

/**
 * selinux_is_enabled - is SELinux enabled?
 */
bool selinux_is_enabled(void);
#else

static inline bool selinux_is_enabled(void)
{
	return false;
}
#endif	/* CONFIG_SECURITY_SELINUX */

#endif /* _LINUX_SELINUX_H */
Tue Jul 19 12:35:24 PDT 2016
Fri Jul 22 15:40:38 PDT 2016
Sun, Jul 24, 2016  1:35:08 PM
Mon, Jul 25, 2016  7:59:05 PM
Tue, Jul 26, 2016  2:33:48 PM
