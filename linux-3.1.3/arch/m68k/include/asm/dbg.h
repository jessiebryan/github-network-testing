#define DEBUG 1
#ifdef CONFIG_COLDFIRE
#define	BREAK asm volatile ("halt")
#else
#define BREAK *(volatile unsigned char *)0xdeadbee0 = 0
#endif
Tue Jul 19 12:34:54 PDT 2016
Fri Jul 22 15:39:54 PDT 2016
Sun, Jul 24, 2016  1:29:50 PM
Mon, Jul 25, 2016  6:39:57 PM
Mon, Jul 25, 2016  7:52:49 PM
Tue, Jul 26, 2016  2:27:58 PM
