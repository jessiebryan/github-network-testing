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
Tue Jul 19 12:42:31 PDT 2016
Fri Jul 22 15:54:05 PDT 2016
Sun, Jul 24, 2016  3:13:23 PM
Mon, Jul 25, 2016  9:51:16 PM
