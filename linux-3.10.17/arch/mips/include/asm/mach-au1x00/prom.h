#ifndef __AU1X00_PROM_H
#define __AU1X00_PROM_H

extern int prom_argc;
extern char **prom_argv;
extern char **prom_envp;

extern void prom_init_cmdline(void);
extern char *prom_getenv(char *envname);
extern int prom_get_ethernet_addr(char *ethernet_addr);

#endif
Tue Jul 19 12:45:47 PDT 2016
Fri Jul 22 16:00:11 PDT 2016
Sun, Jul 24, 2016  4:00:52 PM
Mon, Jul 25, 2016 10:44:05 PM
