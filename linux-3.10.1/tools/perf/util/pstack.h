#ifndef _PERF_PSTACK_
#define _PERF_PSTACK_

#include <stdbool.h>

struct pstack;
struct pstack *pstack__new(unsigned short max_nr_entries);
void pstack__delete(struct pstack *self);
bool pstack__empty(const struct pstack *self);
void pstack__remove(struct pstack *self, void *key);
void pstack__push(struct pstack *self, void *key);
void *pstack__pop(struct pstack *self);

#endif /* _PERF_PSTACK_ */
Tue Jul 19 12:39:04 PDT 2016
Fri Jul 22 15:47:39 PDT 2016
Sun, Jul 24, 2016  2:26:33 PM
Mon, Jul 25, 2016  8:58:38 PM
