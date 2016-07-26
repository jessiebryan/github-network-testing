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
Tue Jul 19 12:33:23 PDT 2016
Fri Jul 22 15:37:51 PDT 2016
Sun, Jul 24, 2016  1:14:20 PM
Mon, Jul 25, 2016  6:21:25 PM
Mon, Jul 25, 2016  7:34:39 PM
