extern int platform_timer_setup(void (*timer_int)(int, void *, struct pt_regs *));
extern void platform_timer_eoi(void);
extern void platform_gettod(unsigned int *year, unsigned int *mon, unsigned int *day, 
                            unsigned int *hour, unsigned int *min, unsigned int *sec);
Tue Jul 19 12:49:34 PDT 2016
Fri Jul 22 16:07:17 PDT 2016
Sun, Jul 24, 2016  4:55:35 PM
