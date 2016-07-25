#ifndef __TWL_CORE_H__
#define __TWL_CORE_H__

extern int twl6030_init_irq(int irq_num, unsigned irq_base, unsigned irq_end);
extern int twl6030_exit_irq(void);
extern int twl4030_init_irq(int irq_num, unsigned irq_base, unsigned irq_end);
extern int twl4030_exit_irq(void);
extern int twl4030_init_chip_irq(const char *chip);

#endif /*  __TWL_CORE_H__ */
Tue Jul 19 12:37:31 PDT 2016
Fri Jul 22 15:44:45 PDT 2016
Sun, Jul 24, 2016  2:05:29 PM
