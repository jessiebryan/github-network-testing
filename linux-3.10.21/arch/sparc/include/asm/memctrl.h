#ifndef _SPARC_MEMCTRL_H
#define _SPARC_MEMCTRL_H

typedef int (*dimm_printer_t)(int synd_code, unsigned long paddr, char *buf, int buflen);

int register_dimm_printer(dimm_printer_t func);
void unregister_dimm_printer(dimm_printer_t func);

#endif /* _SPARC_MEMCTRL_H */
Tue Jul 19 12:48:25 PDT 2016
Fri Jul 22 16:05:06 PDT 2016
Sun, Jul 24, 2016  4:38:59 PM
Mon, Jul 25, 2016 11:26:27 PM
