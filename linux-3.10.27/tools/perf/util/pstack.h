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
Tue Jul 19 12:52:42 PDT 2016
Fri Jul 22 16:13:20 PDT 2016
Sun, Jul 24, 2016  5:40:37 PM
Tue, Jul 26, 2016 12:34:38 AM
