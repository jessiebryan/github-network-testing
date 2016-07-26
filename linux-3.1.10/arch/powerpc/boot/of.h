#ifndef _PPC_BOOT_OF_H_
#define _PPC_BOOT_OF_H_

typedef void *phandle;
typedef void *ihandle;

void of_init(void *promptr);
int of_call_prom(const char *service, int nargs, int nret, ...);
void *of_claim(unsigned long virt, unsigned long size, unsigned long align);
void *of_vmlinux_alloc(unsigned long size);
void of_exit(void);
void *of_finddevice(const char *name);
int of_getprop(const void *phandle, const char *name, void *buf,
	       const int buflen);
int of_setprop(const void *phandle, const char *name, const void *buf,
	       const int buflen);

/* Console functions */
void of_console_init(void);

#endif /* _PPC_BOOT_OF_H_ */
Tue Jul 19 12:33:22 PDT 2016
Fri Jul 22 15:37:49 PDT 2016
Sun, Jul 24, 2016  1:14:06 PM
Mon, Jul 25, 2016  6:21:07 PM
Mon, Jul 25, 2016  7:34:22 PM
Tue, Jul 26, 2016  2:10:26 PM
