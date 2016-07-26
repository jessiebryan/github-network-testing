#ifndef __TWL_CORE_H__
#define __TWL_CORE_H__

extern int twl6030_init_irq(struct device *dev, int irq_num);
extern int twl6030_exit_irq(void);
extern int twl4030_init_irq(struct device *dev, int irq_num);
extern int twl4030_exit_irq(void);
extern int twl4030_init_chip_irq(const char *chip);

#endif /*  __TWL_CORE_H__ */
Tue Jul 19 12:51:06 PDT 2016
Fri Jul 22 16:10:12 PDT 2016
Sun, Jul 24, 2016  5:17:38 PM
Tue, Jul 26, 2016 12:09:18 AM
