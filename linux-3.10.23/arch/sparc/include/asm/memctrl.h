#ifndef _SPARC_MEMCTRL_H
#define _SPARC_MEMCTRL_H

typedef int (*dimm_printer_t)(int synd_code, unsigned long paddr, char *buf, int buflen);

int register_dimm_printer(dimm_printer_t func);
void unregister_dimm_printer(dimm_printer_t func);

#endif /* _SPARC_MEMCTRL_H */
Tue Jul 19 12:49:42 PDT 2016
Fri Jul 22 16:07:31 PDT 2016
Sun, Jul 24, 2016  4:57:27 PM
Mon, Jul 25, 2016 11:47:02 PM
