#define DEBUG 1
#ifdef CONFIG_COLDFIRE
#define	BREAK asm volatile ("halt")
#else
#define BREAK *(volatile unsigned char *)0xdeadbee0 = 0
#endif
Tue Jul 19 12:33:19 PDT 2016
Fri Jul 22 15:37:42 PDT 2016
Sun, Jul 24, 2016  1:13:19 PM
Mon, Jul 25, 2016  6:20:12 PM
Mon, Jul 25, 2016  7:33:27 PM
Tue, Jul 26, 2016  2:09:35 PM
