#ifndef __TWL_CORE_H__
#define __TWL_CORE_H__

extern int twl6030_init_irq(int irq_num, unsigned irq_base, unsigned irq_end);
extern int twl6030_exit_irq(void);
extern int twl4030_init_irq(int irq_num, unsigned irq_base, unsigned irq_end);
extern int twl4030_exit_irq(void);
extern int twl4030_init_chip_irq(const char *chip);

#endif /*  __TWL_CORE_H__ */
Tue Jul 19 12:34:07 PDT 2016
Fri Jul 22 15:39:08 PDT 2016
Sun, Jul 24, 2016  1:24:14 PM
Mon, Jul 25, 2016  6:33:17 PM
