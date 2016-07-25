/*
 *  include/asm-s390/reset.h
 *
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
extern void s390_reset_system(void);
#endif /* _ASM_S390_RESET_H */
Tue Jul 19 12:38:03 PDT 2016
Fri Jul 22 15:45:39 PDT 2016
Sun, Jul 24, 2016  2:12:08 PM
