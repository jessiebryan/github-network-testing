#ifndef _SPARC_MEMCTRL_H
#define _SPARC_MEMCTRL_H

typedef int (*dimm_printer_t)(int synd_code, unsigned long paddr, char *buf, int buflen);

int register_dimm_printer(dimm_printer_t func);
void unregister_dimm_printer(dimm_printer_t func);

#endif /* _SPARC_MEMCTRL_H */
Tue Jul 19 12:38:04 PDT 2016
Fri Jul 22 15:45:41 PDT 2016
Sun, Jul 24, 2016  2:12:28 PM
Mon, Jul 25, 2016  8:42:58 PM
