#ifndef __ASM_EMEV2_H__
#define __ASM_EMEV2_H__

extern void emev2_map_io(void);
extern void emev2_init_irq(void);
extern void emev2_add_early_devices(void);
extern void emev2_add_standard_devices(void);
extern void emev2_clock_init(void);
extern void emev2_set_boot_vector(unsigned long value);

#define EMEV2_GPIO_BASE 200
#define EMEV2_GPIO_IRQ(n) (EMEV2_GPIO_BASE + (n))

extern struct smp_operations emev2_smp_ops;

#endif /* __ASM_EMEV2_H__ */
Tue Jul 19 12:50:49 PDT 2016
Fri Jul 22 16:09:37 PDT 2016
Sun, Jul 24, 2016  5:13:29 PM
Tue, Jul 26, 2016 12:04:40 AM
