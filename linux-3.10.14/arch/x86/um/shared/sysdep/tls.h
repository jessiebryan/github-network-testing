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
#ifdef __x86_64__
	unsigned int  lm:1;
#endif
} user_desc_t;

# else /* __KERNEL__ */

typedef struct user_desc user_desc_t;

# endif /* __KERNEL__ */

extern int os_set_thread_area(user_desc_t *info, int pid);
extern int os_get_thread_area(user_desc_t *info, int pid);

#ifdef __i386__
#define GDT_ENTRY_TLS_MIN_I386 6
#define GDT_ENTRY_TLS_MIN_X86_64 12
#endif

#endif /* _SYSDEP_TLS_H */
Tue Jul 19 12:44:02 PDT 2016
Fri Jul 22 15:56:52 PDT 2016
Sun, Jul 24, 2016  3:34:58 PM
Mon, Jul 25, 2016 10:15:19 PM
