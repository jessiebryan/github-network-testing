#include <linux/kernel.h>
#include <linux/prefetch.h>

#include "../../../../include/linux/list.h"

#ifndef PERF_LIST_H
#define PERF_LIST_H
/**
 * list_del_range - deletes range of entries from list.
 * @begin: first element in the range to delete from the list.
 * @end: last element in the range to delete from the list.
 * Note: list_empty on the range of entries does not return true after this,
 * the entries is in an undefined state.
 */
static inline void list_del_range(struct list_head *begin,
				  struct list_head *end)
{
	begin->prev->next = end->next;
	end->next->prev = begin->prev;
}

/**
 * list_for_each_from	-	iterate over a list from one of its nodes
 * @pos:  the &struct list_head to use as a loop cursor, from where to start
 * @head: the head for your list.
 */
#define list_for_each_from(pos, head) \
	for (; pos != (head); pos = pos->next)
#endif
Tue Jul 19 12:45:39 PDT 2016
Fri Jul 22 15:59:55 PDT 2016
Sun, Jul 24, 2016  3:58:42 PM
Mon, Jul 25, 2016 10:41:41 PM
