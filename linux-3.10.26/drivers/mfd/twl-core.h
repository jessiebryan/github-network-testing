#ifndef __TWL_CORE_H__
#define __TWL_CORE_H__

extern int twl6030_init_irq(struct device *dev, int irq_num);
extern int twl6030_exit_irq(void);
extern int twl4030_init_irq(struct device *dev, int irq_num);
extern int twl4030_exit_irq(void);
extern int twl4030_init_chip_irq(const char *chip);

#endif /*  __TWL_CORE_H__ */
Tue Jul 19 12:51:45 PDT 2016
Fri Jul 22 16:11:29 PDT 2016
Sun, Jul 24, 2016  5:26:56 PM
Tue, Jul 26, 2016 12:19:32 AM
