#ifndef _LINUX_MIGRATE_H
#define _LINUX_MIGRATE_H

#include <linux/mm.h>
#include <linux/mempolicy.h>

typedef struct page *new_page_t(struct page *, unsigned long private, int **);

#ifdef CONFIG_MIGRATION
#define PAGE_MIGRATION 1

extern void putback_lru_pages(struct list_head *l);
extern int migrate_page(struct address_space *,
			struct page *, struct page *);
extern int migrate_pages(struct list_head *l, new_page_t x,
			unsigned long private, bool offlining,
			bool sync);
extern int migrate_huge_pages(struct list_head *l, new_page_t x,
			unsigned long private, bool offlining,
			bool sync);

extern int fail_migrate_page(struct address_space *,
			struct page *, struct page *);

extern int migrate_prep(void);
extern int migrate_prep_local(void);
extern int migrate_vmas(struct mm_struct *mm,
		const nodemask_t *from, const nodemask_t *to,
		unsigned long flags);
extern void migrate_page_copy(struct page *newpage, struct page *page);
extern int migrate_huge_page_move_mapping(struct address_space *mapping,
				  struct page *newpage, struct page *page);
#else
#define PAGE_MIGRATION 0

static inline void putback_lru_pages(struct list_head *l) {}
static inline int migrate_pages(struct list_head *l, new_page_t x,
		unsigned long private, bool offlining,
		bool sync) { return -ENOSYS; }
static inline int migrate_huge_pages(struct list_head *l, new_page_t x,
		unsigned long private, bool offlining,
		bool sync) { return -ENOSYS; }

static inline int migrate_prep(void) { return -ENOSYS; }
static inline int migrate_prep_local(void) { return -ENOSYS; }

static inline int migrate_vmas(struct mm_struct *mm,
		const nodemask_t *from, const nodemask_t *to,
		unsigned long flags)
{
	return -ENOSYS;
}

static inline void migrate_page_copy(struct page *newpage,
				     struct page *page) {}

static inline int migrate_huge_page_move_mapping(struct address_space *mapping,
				  struct page *newpage, struct page *page)
{
	return -ENOSYS;
}

/* Possible settings for the migrate_page() method in address_operations */
#define migrate_page NULL
#define fail_migrate_page NULL

#endif /* CONFIG_MIGRATION */
#endif /* _LINUX_MIGRATE_H */
Tue Jul 19 12:35:23 PDT 2016
Fri Jul 22 15:40:35 PDT 2016
Sun, Jul 24, 2016  1:34:50 PM
Mon, Jul 25, 2016  7:58:44 PM
Tue, Jul 26, 2016  2:33:29 PM
