/*
 *    Copyright IBM Corp. 2006
 *    Author(s): Heiko Carstens <heiko.carstens@de.ibm.com>
 */

#ifndef _ASM_S390_RESET_H
#define _ASM_S390_RESET_H

#include <linux/list.h>

struct reset_call {
	struct list_head list;
	void (*fn)(void);
};

extern void register_reset_call(struct reset_call *reset);
extern void unregister_reset_call(struct reset_call *reset);
extern void s390_reset_system(void (*func)(void *), void *data);
#endif /* _ASM_S390_RESET_H */
Tue Jul 19 12:49:01 PDT 2016
Fri Jul 22 16:06:17 PDT 2016
Sun, Jul 24, 2016  4:47:52 PM
Mon, Jul 25, 2016 11:36:21 PM
