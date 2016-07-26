#ifndef LCDC_H
#define LCDC_H

int omap_lcdc_set_dma_callback(void (*callback)(void *data), void *data);
void omap_lcdc_free_dma_callback(void);

extern const struct lcd_ctrl omap1_int_ctrl;

#endif
Tue Jul 19 12:33:36 PDT 2016
Fri Jul 22 15:38:15 PDT 2016
Sun, Jul 24, 2016  1:17:23 PM
Mon, Jul 25, 2016  6:25:03 PM
Mon, Jul 25, 2016  7:38:14 PM
Tue, Jul 26, 2016  2:14:07 PM
