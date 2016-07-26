/*
 * include/linux/mpage.h
 *
 * Contains declarations related to preparing and submitting BIOS which contain
 * multiple pagecache pages.
 */

/*
 * (And no, it doesn't do the #ifdef __MPAGE_H thing, and it doesn't do
 * nested includes.  Get it right in the .c file).
 */
#ifdef CONFIG_BLOCK

struct writeback_control;

int mpage_readpages(struct address_space *mapping, struct list_head *pages,
				unsigned nr_pages, get_block_t get_block);
int mpage_readpage(struct page *page, get_block_t get_block);
int mpage_writepages(struct address_space *mapping,
		struct writeback_control *wbc, get_block_t get_block);
int mpage_writepage(struct page *page, get_block_t *get_block,
		struct writeback_control *wbc);

#endif
Tue Jul 19 12:35:23 PDT 2016
Fri Jul 22 15:40:36 PDT 2016
Sun, Jul 24, 2016  1:34:52 PM
Mon, Jul 25, 2016  7:58:46 PM
Tue, Jul 26, 2016  2:33:31 PM
