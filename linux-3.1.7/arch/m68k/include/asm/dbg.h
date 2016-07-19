#define DEBUG 1
#ifdef CONFIG_COLDFIRE
#define	BREAK asm volatile ("halt")
#else
#define BREAK *(volatile unsigned char *)0xdeadbee0 = 0
#endif
Tue Jul 19 12:36:44 PDT 2016
