#ifndef __TWL_CORE_H__
#define __TWL_CORE_H__

extern int twl6030_init_irq(struct device *dev, int irq_num);
extern int twl6030_exit_irq(void);
extern int twl4030_init_irq(struct device *dev, int irq_num);
extern int twl4030_exit_irq(void);
extern int twl4030_init_chip_irq(const char *chip);

#endif /*  __TWL_CORE_H__ */
Tue Jul 19 12:42:06 PDT 2016
Fri Jul 22 15:53:26 PDT 2016
Sun, Jul 24, 2016  3:08:17 PM
Mon, Jul 25, 2016  9:45:30 PM
