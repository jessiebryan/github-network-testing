#ifndef _LINUX_SWAPFILE_H
#define _LINUX_SWAPFILE_H

/*
 * these were static in swapfile.c but frontswap.c needs them and we don't
 * want to expose them to the dozens of source files that include swap.h
 */
extern spinlock_t swap_lock;
extern struct swap_list_t swap_list;
extern struct swap_info_struct *swap_info[];
extern int try_to_unuse(unsigned int, bool, unsigned long);

#endif /* _LINUX_SWAPFILE_H */
Tue Jul 19 12:47:26 PDT 2016
Fri Jul 22 16:03:17 PDT 2016
Sun, Jul 24, 2016  4:24:58 PM
Mon, Jul 25, 2016 11:10:52 PM
