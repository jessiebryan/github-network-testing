#define ARRAY_AND_SIZE(x)	(x), ARRAY_SIZE(x)

extern void timer_init(int irq);

extern void __init icu_init_irq(void);
extern void __init mmp_map_io(void);
extern void mmp_restart(char, const char *);
extern void __init pxa168_clk_init(void);
extern void __init pxa910_clk_init(void);
extern void __init mmp2_clk_init(void);
Tue Jul 19 12:51:27 PDT 2016
Fri Jul 22 16:10:51 PDT 2016
Sun, Jul 24, 2016  5:22:30 PM
Tue, Jul 26, 2016 12:14:39 AM
