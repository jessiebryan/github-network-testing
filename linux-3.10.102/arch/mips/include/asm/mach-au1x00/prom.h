#ifndef __AU1X00_PROM_H
#define __AU1X00_PROM_H

extern int prom_argc;
extern char **prom_argv;
extern char **prom_envp;

extern void prom_init_cmdline(void);
extern char *prom_getenv(char *envname);
extern int prom_get_ethernet_addr(char *ethernet_addr);

#endif
Tue Jul 19 12:41:09 PDT 2016
Fri Jul 22 15:51:47 PDT 2016
Sun, Jul 24, 2016  2:56:19 PM
Mon, Jul 25, 2016  9:32:01 PM
