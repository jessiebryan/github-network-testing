/*
 *    Copyright IBM Corp. 2007, 2012
 *    Author(s): Peter Oberparleiter <peter.oberparleiter@de.ibm.com>
 */

#ifndef S390_IDSET_H
#define S390_IDSET_H S390_IDSET_H

#include <asm/schid.h>

struct idset;

void idset_free(struct idset *set);
void idset_clear(struct idset *set);
void idset_fill(struct idset *set);

struct idset *idset_sch_new(void);
void idset_sch_add(struct idset *set, struct subchannel_id id);
void idset_sch_del(struct idset *set, struct subchannel_id id);
void idset_sch_del_subseq(struct idset *set, struct subchannel_id schid);
int idset_sch_contains(struct idset *set, struct subchannel_id id);
int idset_sch_get_first(struct idset *set, struct subchannel_id *id);
int idset_is_empty(struct idset *set);
void idset_add_set(struct idset *to, struct idset *from);

#endif /* S390_IDSET_H */
Tue Jul 19 12:49:12 PDT 2016
Fri Jul 22 16:06:36 PDT 2016
Sun, Jul 24, 2016  4:50:22 PM
Mon, Jul 25, 2016 11:39:09 PM
