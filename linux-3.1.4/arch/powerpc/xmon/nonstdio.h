#define EOF	(-1)

#define printf	xmon_printf
#define putchar	xmon_putchar

extern int xmon_putchar(int c);
extern int xmon_getchar(void);
extern void xmon_puts(const char *);
extern char *xmon_gets(char *, int);
extern void xmon_printf(const char *, ...);
extern void xmon_map_scc(void);
extern int xmon_expect(const char *str, unsigned long timeout);
extern int xmon_write(const void *ptr, int nb);
extern int xmon_readchar(void);
extern int xmon_read_poll(void);
Tue Jul 19 12:35:41 PDT 2016
Fri Jul 22 15:41:11 PDT 2016
Sun, Jul 24, 2016  1:39:06 PM
Mon, Jul 25, 2016  8:03:47 PM
Tue, Jul 26, 2016  2:38:13 PM
