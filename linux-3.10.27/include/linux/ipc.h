#ifndef _LINUX_IPC_H
#define _LINUX_IPC_H

#include <linux/spinlock.h>
#include <linux/uidgid.h>
#include <uapi/linux/ipc.h>

#define IPCMNI 32768  /* <= MAX_INT limit for ipc arrays (including sysctl changes) */

/* used by in-kernel data structures */
struct kern_ipc_perm
{
	spinlock_t	lock;
	int		deleted;
	int		id;
	key_t		key;
	kuid_t		uid;
	kgid_t		gid;
	kuid_t		cuid;
	kgid_t		cgid;
	umode_t		mode; 
	unsigned long	seq;
	void		*security;
};

#endif /* _LINUX_IPC_H */
Tue Jul 19 12:52:34 PDT 2016
Fri Jul 22 16:13:03 PDT 2016
Sun, Jul 24, 2016  5:38:34 PM
Tue, Jul 26, 2016 12:32:21 AM
