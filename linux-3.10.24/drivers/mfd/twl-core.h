#ifndef __TWL_CORE_H__
#define __TWL_CORE_H__

extern int twl6030_init_irq(struct device *dev, int irq_num);
extern int twl6030_exit_irq(void);
extern int twl4030_init_irq(struct device *dev, int irq_num);
extern int twl4030_exit_irq(void);
extern int twl4030_init_chip_irq(const char *chip);

#endif /*  __TWL_CORE_H__ */
Tue Jul 19 12:50:27 PDT 2016
Fri Jul 22 16:08:57 PDT 2016
Sun, Jul 24, 2016  5:08:19 PM
Mon, Jul 25, 2016 11:59:00 PM
