#ifndef PLAT_CLCD_H
#define PLAT_CLCD_H

struct clcd_panel *versatile_clcd_get_panel(const char *);
int versatile_clcd_setup_dma(struct clcd_fb *, unsigned long);
int versatile_clcd_mmap_dma(struct clcd_fb *, struct vm_area_struct *);
void versatile_clcd_remove_dma(struct clcd_fb *);

#endif
Tue Jul 19 12:41:44 PDT 2016
Fri Jul 22 15:52:55 PDT 2016
Sun, Jul 24, 2016  3:04:17 PM
Mon, Jul 25, 2016  9:41:00 PM
