#ifndef __TWL_CORE_H__
#define __TWL_CORE_H__

extern int twl6030_init_irq(struct device *dev, int irq_num);
extern int twl6030_exit_irq(void);
extern int twl4030_init_irq(struct device *dev, int irq_num);
extern int twl4030_exit_irq(void);
extern int twl4030_init_chip_irq(const char *chip);

#endif /*  __TWL_CORE_H__ */
Tue Jul 19 12:49:48 PDT 2016
Fri Jul 22 16:07:44 PDT 2016
Sun, Jul 24, 2016  4:58:59 PM
Mon, Jul 25, 2016 11:48:45 PM
