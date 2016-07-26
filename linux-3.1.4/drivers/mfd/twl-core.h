#ifndef __TWL_CORE_H__
#define __TWL_CORE_H__

extern int twl6030_init_irq(int irq_num, unsigned irq_base, unsigned irq_end);
extern int twl6030_exit_irq(void);
extern int twl4030_init_irq(int irq_num, unsigned irq_base, unsigned irq_end);
extern int twl4030_exit_irq(void);
extern int twl4030_init_chip_irq(const char *chip);

#endif /*  __TWL_CORE_H__ */
Tue Jul 19 12:35:48 PDT 2016
Fri Jul 22 15:41:25 PDT 2016
Sun, Jul 24, 2016  1:40:44 PM
Mon, Jul 25, 2016  8:05:43 PM
