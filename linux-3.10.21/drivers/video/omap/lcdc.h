#ifndef LCDC_H
#define LCDC_H

int omap_lcdc_set_dma_callback(void (*callback)(void *data), void *data);
void omap_lcdc_free_dma_callback(void);

extern const struct lcd_ctrl omap1_int_ctrl;

#endif
Tue Jul 19 12:48:37 PDT 2016
Fri Jul 22 16:05:30 PDT 2016
Sun, Jul 24, 2016  4:41:59 PM
Mon, Jul 25, 2016 11:29:47 PM
