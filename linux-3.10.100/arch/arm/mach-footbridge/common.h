
extern void footbridge_timer_init(void);
extern void isa_timer_init(void);

extern void isa_rtc_init(void);

extern void footbridge_map_io(void);
extern void footbridge_init_irq(void);

extern void isa_init_irq(unsigned int irq);
extern void footbridge_restart(char, const char *);
Tue Jul 19 12:39:43 PDT 2016
Fri Jul 22 15:49:00 PDT 2016
