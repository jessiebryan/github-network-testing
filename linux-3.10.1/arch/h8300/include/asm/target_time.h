extern int platform_timer_setup(void (*timer_int)(int, void *, struct pt_regs *));
extern void platform_timer_eoi(void);
extern void platform_gettod(unsigned int *year, unsigned int *mon, unsigned int *day, 
                            unsigned int *hour, unsigned int *min, unsigned int *sec);
Tue Jul 19 12:38:31 PDT 2016
Fri Jul 22 15:46:36 PDT 2016
Sun, Jul 24, 2016  2:18:52 PM
Mon, Jul 25, 2016  8:50:04 PM
