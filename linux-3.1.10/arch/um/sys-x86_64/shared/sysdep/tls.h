#ifndef _SYSDEP_TLS_H
#define _SYSDEP_TLS_H

# ifndef __KERNEL__

/* Change name to avoid conflicts with the original one from <asm/ldt.h>, which
 * may be named user_desc (but in 2.4 and in header matching its API was named
 * modify_ldt_ldt_s). */

typedef struct um_dup_user_desc {
	unsigned int  entry_number;
	unsigned int  base_addr;
	unsigned int  limit;
	unsigned int  seg_32bit:1;
	unsigned int  contents:2;
	unsigned int  read_exec_only:1;
	unsigned int  limit_in_pages:1;
	unsigned int  seg_not_present:1;
	unsigned int  useable:1;
	unsigned int  lm:1;
} user_desc_t;

# else /* __KERNEL__ */

#  include <ldt.h>
typedef struct user_desc user_desc_t;

# endif /* __KERNEL__ */
#endif /* _SYSDEP_TLS_H */
Tue Jul 19 12:33:26 PDT 2016
Fri Jul 22 15:37:56 PDT 2016
Sun, Jul 24, 2016  1:15:01 PM
Mon, Jul 25, 2016  6:22:13 PM
Mon, Jul 25, 2016  7:35:26 PM
Tue, Jul 26, 2016  2:11:27 PM
