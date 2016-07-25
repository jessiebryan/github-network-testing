#ifndef LCDC_H
#define LCDC_H

int omap_lcdc_set_dma_callback(void (*callback)(void *data), void *data);
void omap_lcdc_free_dma_callback(void);

extern const struct lcd_ctrl omap1_int_ctrl;

#endif
Tue Jul 19 12:41:26 PDT 2016
Fri Jul 22 15:52:25 PDT 2016
Sun, Jul 24, 2016  3:00:31 PM
