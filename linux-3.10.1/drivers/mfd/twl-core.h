#ifndef __TWL_CORE_H__
#define __TWL_CORE_H__

extern int twl6030_init_irq(struct device *dev, int irq_num);
extern int twl6030_exit_irq(void);
extern int twl4030_init_irq(struct device *dev, int irq_num);
extern int twl4030_exit_irq(void);
extern int twl4030_init_chip_irq(const char *chip);

#endif /*  __TWL_CORE_H__ */
Tue Jul 19 12:38:46 PDT 2016
Fri Jul 22 15:47:04 PDT 2016
Sun, Jul 24, 2016  2:22:14 PM
Mon, Jul 25, 2016  8:53:49 PM
