#ifndef _SPARC_MEMCTRL_H
#define _SPARC_MEMCTRL_H

typedef int (*dimm_printer_t)(int synd_code, unsigned long paddr, char *buf, int buflen);

int register_dimm_printer(dimm_printer_t func);
void unregister_dimm_printer(dimm_printer_t func);

#endif /* _SPARC_MEMCTRL_H */
Tue Jul 19 12:46:29 PDT 2016
Fri Jul 22 16:01:32 PDT 2016
Sun, Jul 24, 2016  4:11:17 PM
Mon, Jul 25, 2016 10:55:41 PM
