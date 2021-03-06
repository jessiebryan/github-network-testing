/*
 *  drivers/s390/cio/idset.h
 *
 *    Copyright IBM Corp. 2007
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
int idset_sch_contains(struct idset *set, struct subchannel_id id);
int idset_sch_get_first(struct idset *set, struct subchannel_id *id);
int idset_is_empty(struct idset *set);
void idset_add_set(struct idset *to, struct idset *from);

#endif /* S390_IDSET_H */
Tue Jul 19 12:33:32 PDT 2016
Fri Jul 22 15:38:08 PDT 2016
Sun, Jul 24, 2016  1:16:31 PM
Mon, Jul 25, 2016  6:24:00 PM
Mon, Jul 25, 2016  7:37:12 PM
Tue, Jul 26, 2016  2:13:07 PM
