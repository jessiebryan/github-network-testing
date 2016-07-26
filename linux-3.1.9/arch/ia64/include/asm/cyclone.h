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
Tue Jul 19 12:37:57 PDT 2016
Fri Jul 22 15:45:29 PDT 2016
Sun, Jul 24, 2016  2:10:49 PM
Mon, Jul 25, 2016  8:41:09 PM
