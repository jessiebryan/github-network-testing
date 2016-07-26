#ifndef _SPARC_MEMCTRL_H
#define _SPARC_MEMCTRL_H

typedef int (*dimm_printer_t)(int synd_code, unsigned long paddr, char *buf, int buflen);

int register_dimm_printer(dimm_printer_t func);
void unregister_dimm_printer(dimm_printer_t func);

#endif /* _SPARC_MEMCTRL_H */
Tue Jul 19 12:37:25 PDT 2016
Fri Jul 22 15:44:35 PDT 2016
Sun, Jul 24, 2016  2:04:14 PM
Mon, Jul 25, 2016  8:33:32 PM
