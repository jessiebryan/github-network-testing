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
Tue Jul 19 12:39:42 PDT 2016
Fri Jul 22 15:48:57 PDT 2016
Sun, Jul 24, 2016  2:35:45 PM
Mon, Jul 25, 2016  9:08:53 PM
