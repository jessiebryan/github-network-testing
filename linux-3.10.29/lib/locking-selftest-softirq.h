#undef IRQ_DISABLE
#undef IRQ_ENABLE
#undef IRQ_ENTER
#undef IRQ_EXIT

#define IRQ_DISABLE		SOFTIRQ_DISABLE
#define IRQ_ENABLE		SOFTIRQ_ENABLE
#define IRQ_ENTER		SOFTIRQ_ENTER
#define IRQ_EXIT		SOFTIRQ_EXIT
Tue Jul 19 12:53:58 PDT 2016
Fri Jul 22 16:15:47 PDT 2016
Sun, Jul 24, 2016  5:58:48 PM
Tue, Jul 26, 2016 12:54:42 AM
