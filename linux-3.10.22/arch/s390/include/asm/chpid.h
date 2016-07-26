/*
 *    Copyright IBM Corp. 2007, 2012
 *    Author(s): Peter Oberparleiter <peter.oberparleiter@de.ibm.com>
 */
#ifndef _ASM_S390_CHPID_H
#define _ASM_S390_CHPID_H

#include <uapi/asm/chpid.h>
#include <asm/cio.h>

static inline void chp_id_init(struct chp_id *chpid)
{
	memset(chpid, 0, sizeof(struct chp_id));
}

static inline int chp_id_is_equal(struct chp_id *a, struct chp_id *b)
{
	return (a->id == b->id) && (a->cssid == b->cssid);
}

static inline void chp_id_next(struct chp_id *chpid)
{
	if (chpid->id < __MAX_CHPID)
		chpid->id++;
	else {
		chpid->id = 0;
		chpid->cssid++;
	}
}

static inline int chp_id_is_valid(struct chp_id *chpid)
{
	return (chpid->cssid <= __MAX_CSSID);
}


#define chp_id_for_each(c) \
	for (chp_id_init(c); chp_id_is_valid(c); chp_id_next(c))
#endif /* _ASM_S390_CHPID_H */
Tue Jul 19 12:49:01 PDT 2016
Fri Jul 22 16:06:16 PDT 2016
Sun, Jul 24, 2016  4:47:49 PM
Mon, Jul 25, 2016 11:36:18 PM
