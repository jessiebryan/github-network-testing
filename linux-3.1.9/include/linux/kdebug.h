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
Tue Jul 19 12:38:19 PDT 2016
Fri Jul 22 15:46:10 PDT 2016
Sun, Jul 24, 2016  2:15:56 PM
Mon, Jul 25, 2016  8:46:48 PM
