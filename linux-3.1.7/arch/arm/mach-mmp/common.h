#define ARRAY_AND_SIZE(x)	(x), ARRAY_SIZE(x)

struct sys_timer;

extern void timer_init(int irq);

extern void __init icu_init_irq(void);
extern void __init mmp_map_io(void);
Tue Jul 19 12:36:38 PDT 2016
Fri Jul 22 15:43:05 PDT 2016
Sun, Jul 24, 2016  1:53:08 PM
Mon, Jul 25, 2016  8:20:19 PM
