
extern struct sys_timer footbridge_timer;
extern struct sys_timer isa_timer;

extern void isa_rtc_init(void);

extern void footbridge_map_io(void);
extern void footbridge_init_irq(void);

extern void isa_init_irq(unsigned int irq);
Tue Jul 19 12:33:13 PDT 2016
Fri Jul 22 15:37:30 PDT 2016
Sun, Jul 24, 2016  1:11:46 PM
