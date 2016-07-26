extern int platform_timer_setup(void (*timer_int)(int, void *, struct pt_regs *));
extern void platform_timer_eoi(void);
extern void platform_gettod(unsigned int *year, unsigned int *mon, unsigned int *day, 
                            unsigned int *hour, unsigned int *min, unsigned int *sec);
Tue Jul 19 12:34:47 PDT 2016
Fri Jul 22 15:39:52 PDT 2016
Sun, Jul 24, 2016  1:29:35 PM
Mon, Jul 25, 2016  6:39:40 PM
Mon, Jul 25, 2016  7:52:32 PM
Tue, Jul 26, 2016  2:27:41 PM
