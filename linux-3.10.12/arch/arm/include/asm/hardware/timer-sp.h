struct clk;

void __sp804_clocksource_and_sched_clock_init(void __iomem *,
					      const char *, struct clk *, int);
void __sp804_clockevents_init(void __iomem *, unsigned int,
			      struct clk *, const char *);

static inline void sp804_clocksource_init(void __iomem *base, const char *name)
{
	__sp804_clocksource_and_sched_clock_init(base, name, NULL, 0);
}

static inline void sp804_clocksource_and_sched_clock_init(void __iomem *base,
							  const char *name)
{
	__sp804_clocksource_and_sched_clock_init(base, name, NULL, 1);
}

static inline void sp804_clockevents_init(void __iomem *base, unsigned int irq, const char *name)
{
	__sp804_clockevents_init(base, irq, NULL, name);

}
Tue Jul 19 12:42:28 PDT 2016
Fri Jul 22 15:54:01 PDT 2016
