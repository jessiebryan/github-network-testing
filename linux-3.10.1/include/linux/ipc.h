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
Tue Jul 19 12:38:56 PDT 2016
Fri Jul 22 15:47:23 PDT 2016
Sun, Jul 24, 2016  2:24:31 PM
Mon, Jul 25, 2016  8:56:21 PM
