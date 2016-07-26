#ifndef LCDC_H
#define LCDC_H

int omap_lcdc_set_dma_callback(void (*callback)(void *data), void *data);
void omap_lcdc_free_dma_callback(void);

extern const struct lcd_ctrl omap1_int_ctrl;

#endif
Tue Jul 19 12:47:20 PDT 2016
Fri Jul 22 16:03:06 PDT 2016
Sun, Jul 24, 2016  4:23:31 PM
Mon, Jul 25, 2016 11:09:16 PM
