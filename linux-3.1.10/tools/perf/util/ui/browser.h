#ifndef _PERF_UI_BROWSER_H_
#define _PERF_UI_BROWSER_H_ 1

#include <stdbool.h>
#include <newt.h>
#include <sys/types.h>
#include "../types.h"

#define HE_COLORSET_TOP		50
#define HE_COLORSET_MEDIUM	51
#define HE_COLORSET_NORMAL	52
#define HE_COLORSET_SELECTED	53
#define HE_COLORSET_CODE	54

struct ui_browser {
	newtComponent form, sb;
	u64	      index, top_idx;
	void	      *top, *entries;
	u16	      y, x, width, height;
	void	      *priv;
	unsigned int  (*refresh)(struct ui_browser *self);
	void	      (*write)(struct ui_browser *self, void *entry, int row);
	void	      (*seek)(struct ui_browser *self, off_t offset, int whence);
	u32	      nr_entries;
};

void ui_browser__set_color(struct ui_browser *self, int color);
void ui_browser__set_percent_color(struct ui_browser *self,
				   double percent, bool current);
bool ui_browser__is_current_entry(struct ui_browser *self, unsigned row);
void ui_browser__refresh_dimensions(struct ui_browser *self);
void ui_browser__reset_index(struct ui_browser *self);

void ui_browser__gotorc(struct ui_browser *self, int y, int x);
void ui_browser__add_exit_key(struct ui_browser *self, int key);
void ui_browser__add_exit_keys(struct ui_browser *self, int keys[]);
void __ui_browser__show_title(struct ui_browser *browser, const char *title);
void ui_browser__show_title(struct ui_browser *browser, const char *title);
int ui_browser__show(struct ui_browser *self, const char *title,
		     const char *helpline, ...);
void ui_browser__hide(struct ui_browser *self);
int ui_browser__refresh(struct ui_browser *self);
int ui_browser__run(struct ui_browser *self);

void ui_browser__rb_tree_seek(struct ui_browser *self, off_t offset, int whence);
unsigned int ui_browser__rb_tree_refresh(struct ui_browser *self);

void ui_browser__list_head_seek(struct ui_browser *self, off_t offset, int whence);
unsigned int ui_browser__list_head_refresh(struct ui_browser *self);

void ui_browser__init(void);
#endif /* _PERF_UI_BROWSER_H_ */
Tue Jul 19 12:33:47 PDT 2016
Fri Jul 22 15:38:33 PDT 2016
Sun, Jul 24, 2016  1:19:39 PM
Mon, Jul 25, 2016  6:27:46 PM
Mon, Jul 25, 2016  7:40:53 PM
Tue, Jul 26, 2016  2:16:39 PM
