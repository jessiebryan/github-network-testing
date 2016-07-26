#ifndef PLAT_CLCD_H
#define PLAT_CLCD_H

struct clcd_panel *versatile_clcd_get_panel(const char *);
int versatile_clcd_setup_dma(struct clcd_fb *, unsigned long);
int versatile_clcd_mmap_dma(struct clcd_fb *, struct vm_area_struct *);
void versatile_clcd_remove_dma(struct clcd_fb *);

#endif
Tue Jul 19 12:43:49 PDT 2016
Fri Jul 22 15:56:27 PDT 2016
Sun, Jul 24, 2016  3:31:55 PM
Mon, Jul 25, 2016 10:11:56 PM
