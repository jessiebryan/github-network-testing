#define DEBUG 1
#ifdef CONFIG_COLDFIRE
#define	BREAK asm volatile ("halt")
#else
#define BREAK *(volatile unsigned char *)0xdeadbee0 = 0
#endif
Tue Jul 19 12:37:58 PDT 2016
Fri Jul 22 15:45:30 PDT 2016
Sun, Jul 24, 2016  2:11:03 PM
