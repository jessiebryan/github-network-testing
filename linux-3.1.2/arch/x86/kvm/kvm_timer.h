
struct kvm_timer {
	struct hrtimer timer;
	s64 period; 				/* unit: ns */
	atomic_t pending;			/* accumulated triggered timers */
	bool reinject;
	struct kvm_timer_ops *t_ops;
	struct kvm *kvm;
	struct kvm_vcpu *vcpu;
};

struct kvm_timer_ops {
	bool (*is_periodic)(struct kvm_timer *);
};

enum hrtimer_restart kvm_timer_fn(struct hrtimer *data);
Tue Jul 19 12:34:04 PDT 2016
Fri Jul 22 15:39:03 PDT 2016
Sun, Jul 24, 2016  1:23:31 PM
Mon, Jul 25, 2016  6:32:25 PM
Mon, Jul 25, 2016  7:45:25 PM
