extern int platform_timer_setup(void (*timer_int)(int, void *, struct pt_regs *));
extern void platform_timer_eoi(void);
extern void platform_gettod(unsigned int *year, unsigned int *mon, unsigned int *day, 
                            unsigned int *hour, unsigned int *min, unsigned int *sec);
Tue Jul 19 12:50:12 PDT 2016
Fri Jul 22 16:08:31 PDT 2016
Sun, Jul 24, 2016  5:04:57 PM
Mon, Jul 25, 2016 11:55:14 PM
