#ifndef _SPARC_MEMCTRL_H
#define _SPARC_MEMCTRL_H

typedef int (*dimm_printer_t)(int synd_code, unsigned long paddr, char *buf, int buflen);

int register_dimm_printer(dimm_printer_t func);
void unregister_dimm_printer(dimm_printer_t func);

#endif /* _SPARC_MEMCTRL_H */
Tue Jul 19 12:51:00 PDT 2016
Fri Jul 22 16:09:59 PDT 2016
Sun, Jul 24, 2016  5:16:05 PM
Tue, Jul 26, 2016 12:07:35 AM
