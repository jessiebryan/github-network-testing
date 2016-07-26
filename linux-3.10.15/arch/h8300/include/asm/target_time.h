extern int platform_timer_setup(void (*timer_int)(int, void *, struct pt_regs *));
extern void platform_timer_eoi(void);
extern void platform_gettod(unsigned int *year, unsigned int *mon, unsigned int *day, 
                            unsigned int *hour, unsigned int *min, unsigned int *sec);
Tue Jul 19 12:44:30 PDT 2016
Fri Jul 22 15:57:45 PDT 2016
Sun, Jul 24, 2016  3:41:48 PM
Mon, Jul 25, 2016 10:22:52 PM
