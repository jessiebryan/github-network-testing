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
Tue Jul 19 12:34:58 PDT 2016
Fri Jul 22 15:40:03 PDT 2016
Sun, Jul 24, 2016  1:30:51 PM
Mon, Jul 25, 2016  7:54:01 PM
Tue, Jul 26, 2016  2:29:06 PM
