#define ARRAY_AND_SIZE(x)	(x), ARRAY_SIZE(x)

struct sys_timer;

extern void timer_init(int irq);

extern void __init icu_init_irq(void);
extern void __init mmp_map_io(void);
Tue Jul 19 12:34:42 PDT 2016
Fri Jul 22 15:39:42 PDT 2016
