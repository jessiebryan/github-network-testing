#include <linux/atomic.h>
#include <linux/debugfs.h>
#include <linux/notifier.h>

struct notifier_err_inject_action {
	unsigned long val;
	int error;
	const char *name;
};

#define NOTIFIER_ERR_INJECT_ACTION(action)	\
	.name = #action, .val = (action),

struct notifier_err_inject {
	struct notifier_block nb;
	struct notifier_err_inject_action actions[];
	/* The last slot must be terminated with zero sentinel */
};

extern struct dentry *notifier_err_inject_dir;

extern struct dentry *notifier_err_inject_init(const char *name,
		struct dentry *parent, struct notifier_err_inject *err_inject,
		int priority);
Tue Jul 19 12:52:01 PDT 2016
Fri Jul 22 16:12:01 PDT 2016
Sun, Jul 24, 2016  5:30:52 PM
Tue, Jul 26, 2016 12:23:52 AM
