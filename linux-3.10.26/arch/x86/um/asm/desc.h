#ifndef __UM_DESC_H
#define __UM_DESC_H

/* Taken from asm-i386/desc.h, it's the only thing we need. The rest wouldn't
 * compile, and has never been used. */
#define LDT_empty(info) (\
	(info)->base_addr	== 0	&& \
	(info)->limit		== 0	&& \
	(info)->contents	== 0	&& \
	(info)->read_exec_only	== 1	&& \
	(info)->seg_32bit	== 0	&& \
	(info)->limit_in_pages	== 0	&& \
	(info)->seg_not_present	== 1	&& \
	(info)->useable		== 0	)

#endif
Tue Jul 19 12:51:41 PDT 2016
Fri Jul 22 16:11:19 PDT 2016
Sun, Jul 24, 2016  5:25:57 PM
Tue, Jul 26, 2016 12:18:27 AM
