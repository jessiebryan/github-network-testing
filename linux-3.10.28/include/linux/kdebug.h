#ifndef _LINUX_KDEBUG_H
#define _LINUX_KDEBUG_H

#include <asm/kdebug.h>

struct notifier_block;

struct die_args {
	struct pt_regs *regs;
	const char *str;
	long err;
	int trapnr;
	int signr;
};

int register_die_notifier(struct notifier_block *nb);
int unregister_die_notifier(struct notifier_block *nb);

int notify_die(enum die_val val, const char *str,
	       struct pt_regs *regs, long err, int trap, int sig);

#endif /* _LINUX_KDEBUG_H */
Tue Jul 19 12:53:13 PDT 2016
Fri Jul 22 16:14:19 PDT 2016
Sun, Jul 24, 2016  5:47:55 PM
Tue, Jul 26, 2016 12:42:39 AM
