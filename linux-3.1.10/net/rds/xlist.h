#ifndef _LINUX_XLIST_H
#define _LINUX_XLIST_H

#include <linux/stddef.h>
#include <linux/poison.h>
#include <linux/prefetch.h>
#include <asm/system.h>

struct xlist_head {
	struct xlist_head *next;
};

static inline void INIT_XLIST_HEAD(struct xlist_head *list)
{
	list->next = NULL;
}

static inline int xlist_empty(struct xlist_head *head)
{
	return head->next == NULL;
}

static inline void xlist_add(struct xlist_head *new, struct xlist_head *tail,
			     struct xlist_head *head)
{
	struct xlist_head *cur;
	struct xlist_head *check;

	while (1) {
		cur = head->next;
		tail->next = cur;
		check = cmpxchg(&head->next, cur, new);
		if (check == cur)
			break;
	}
}

static inline struct xlist_head *xlist_del_head(struct xlist_head *head)
{
	struct xlist_head *cur;
	struct xlist_head *check;
	struct xlist_head *next;

	while (1) {
		cur = head->next;
		if (!cur)
			goto out;

		next = cur->next;
		check = cmpxchg(&head->next, cur, next);
		if (check == cur)
			goto out;
	}
out:
	return cur;
}

static inline struct xlist_head *xlist_del_head_fast(struct xlist_head *head)
{
	struct xlist_head *cur;

	cur = head->next;
	if (!cur)
		return NULL;

	head->next = cur->next;
	return cur;
}

static inline void xlist_splice(struct xlist_head *list,
				struct xlist_head *head)
{
	struct xlist_head *cur;

	WARN_ON(head->next);
	cur = xchg(&list->next, NULL);
	head->next = cur;
}

#endif
Tue Jul 19 12:33:45 PDT 2016
Fri Jul 22 15:38:30 PDT 2016
Sun, Jul 24, 2016  1:19:20 PM
Mon, Jul 25, 2016  6:27:23 PM
Mon, Jul 25, 2016  7:40:31 PM
Tue, Jul 26, 2016  2:16:18 PM
