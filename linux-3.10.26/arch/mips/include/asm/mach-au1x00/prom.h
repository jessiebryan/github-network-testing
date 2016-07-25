#ifndef __AU1X00_PROM_H
#define __AU1X00_PROM_H

extern int prom_argc;
extern char **prom_argv;
extern char **prom_envp;

extern void prom_init_cmdline(void);
extern char *prom_getenv(char *envname);
extern int prom_get_ethernet_addr(char *ethernet_addr);

#endif
Tue Jul 19 12:51:34 PDT 2016
Fri Jul 22 16:11:05 PDT 2016
Sun, Jul 24, 2016  5:24:10 PM
