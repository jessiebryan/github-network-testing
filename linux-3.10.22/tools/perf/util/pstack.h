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
Tue Jul 19 12:49:28 PDT 2016
Fri Jul 22 16:07:05 PDT 2016
Sun, Jul 24, 2016  4:54:04 PM
Mon, Jul 25, 2016 11:43:18 PM
