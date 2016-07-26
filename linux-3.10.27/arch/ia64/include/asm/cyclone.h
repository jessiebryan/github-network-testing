#ifndef ASM_IA64_CYCLONE_H
#define ASM_IA64_CYCLONE_H

#ifdef	CONFIG_IA64_CYCLONE
extern int use_cyclone;
extern void __init cyclone_setup(void);
#else	/* CONFIG_IA64_CYCLONE */
#define use_cyclone 0
static inline void cyclone_setup(void)
{
	printk(KERN_ERR "Cyclone Counter: System not configured"
					" w/ CONFIG_IA64_CYCLONE.\n");
}
#endif	/* CONFIG_IA64_CYCLONE */
#endif	/* !ASM_IA64_CYCLONE_H */
Tue Jul 19 12:52:10 PDT 2016
Fri Jul 22 16:12:18 PDT 2016
Sun, Jul 24, 2016  5:32:55 PM
Tue, Jul 26, 2016 12:26:09 AM
