#define DEBUG 1
#ifdef CONFIG_COLDFIRE
#define	BREAK asm volatile ("halt")
#else
#define BREAK *(volatile unsigned char *)0xdeadbee0 = 0
#endif
Tue Jul 19 12:33:56 PDT 2016
Fri Jul 22 15:38:48 PDT 2016
Sun, Jul 24, 2016  1:21:34 PM
Mon, Jul 25, 2016  6:30:04 PM
Mon, Jul 25, 2016  7:43:08 PM
Tue, Jul 26, 2016  2:18:50 PM
