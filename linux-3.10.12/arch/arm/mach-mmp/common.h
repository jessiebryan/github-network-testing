#define ARRAY_AND_SIZE(x)	(x), ARRAY_SIZE(x)

extern void timer_init(int irq);

extern void __init icu_init_irq(void);
extern void __init mmp_map_io(void);
extern void mmp_restart(char, const char *);
extern void __init pxa168_clk_init(void);
extern void __init pxa910_clk_init(void);
extern void __init mmp2_clk_init(void);
Tue Jul 19 12:42:30 PDT 2016
Fri Jul 22 15:54:03 PDT 2016
Sun, Jul 24, 2016  3:13:06 PM
Mon, Jul 25, 2016  9:50:57 PM
