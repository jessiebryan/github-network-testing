#define ARRAY_AND_SIZE(x)	(x), ARRAY_SIZE(x)

extern void timer_init(int irq);

extern void __init icu_init_irq(void);
extern void __init mmp_map_io(void);
extern void mmp_restart(char, const char *);
extern void __init pxa168_clk_init(void);
extern void __init pxa910_clk_init(void);
extern void __init mmp2_clk_init(void);
Tue Jul 19 12:47:34 PDT 2016
Fri Jul 22 16:03:32 PDT 2016
Sun, Jul 24, 2016  4:26:53 PM
Mon, Jul 25, 2016 11:13:00 PM
