#ifndef _SPARC_MEMCTRL_H
#define _SPARC_MEMCTRL_H

typedef int (*dimm_printer_t)(int synd_code, unsigned long paddr, char *buf, int buflen);

int register_dimm_printer(dimm_printer_t func);
void unregister_dimm_printer(dimm_printer_t func);

#endif /* _SPARC_MEMCTRL_H */
Tue Jul 19 12:43:59 PDT 2016
Fri Jul 22 15:56:48 PDT 2016
Sun, Jul 24, 2016  3:34:23 PM
Mon, Jul 25, 2016 10:14:40 PM
