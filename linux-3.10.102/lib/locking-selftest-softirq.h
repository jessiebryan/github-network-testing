#undef IRQ_DISABLE
#undef IRQ_ENABLE
#undef IRQ_ENTER
#undef IRQ_EXIT

#define IRQ_DISABLE		SOFTIRQ_DISABLE
#define IRQ_ENABLE		SOFTIRQ_ENABLE
#define IRQ_ENTER		SOFTIRQ_ENTER
#define IRQ_EXIT		SOFTIRQ_EXIT
Tue Jul 19 12:41:37 PDT 2016
Fri Jul 22 15:52:44 PDT 2016
Sun, Jul 24, 2016  3:02:56 PM
Mon, Jul 25, 2016  9:39:29 PM
