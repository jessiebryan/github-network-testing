#ifndef __ASM_ARCH_ZYLONITE_H
#define __ASM_ARCH_ZYLONITE_H

#define ZYLONITE_ETH_PHYS	0x14000000

#define EXT_GPIO(x)		(128 + (x))

#define ZYLONITE_NR_IRQS	(IRQ_BOARD_START + 32)

/* the following variables are processor specific and initialized
 * by the corresponding zylonite_pxa3xx_init()
 */
extern int gpio_eth_irq;
extern int gpio_debug_led1;
extern int gpio_debug_led2;

extern int wm9713_irq;

extern int lcd_id;
extern int lcd_orientation;

#ifdef CONFIG_CPU_PXA300
extern void zylonite_pxa300_init(void);
#else
static inline void zylonite_pxa300_init(void)
{
	if (cpu_is_pxa300() || cpu_is_pxa310())
		panic("%s: PXA300/PXA310 not supported\n", __func__);
}
#endif

#ifdef CONFIG_CPU_PXA320
extern void zylonite_pxa320_init(void);
#else
static inline void zylonite_pxa320_init(void)
{
	if (cpu_is_pxa320())
		panic("%s: PXA320 not supported\n", __func__);
}
#endif

#endif /* __ASM_ARCH_ZYLONITE_H */
Tue Jul 19 12:35:31 PDT 2016
Fri Jul 22 15:40:52 PDT 2016
Sun, Jul 24, 2016  1:36:53 PM
Mon, Jul 25, 2016  8:01:09 PM
Tue, Jul 26, 2016  2:35:44 PM
