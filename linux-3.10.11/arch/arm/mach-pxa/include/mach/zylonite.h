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

#ifdef CONFIG_MACH_ZYLONITE300
extern void zylonite_pxa300_init(void);
#else
static inline void zylonite_pxa300_init(void)
{
	if (cpu_is_pxa300() || cpu_is_pxa310())
		panic("%s: PXA300/PXA310 not supported\n", __func__);
}
#endif

#ifdef CONFIG_MACH_ZYLONITE320
extern void zylonite_pxa320_init(void);
#else
static inline void zylonite_pxa320_init(void)
{
	if (cpu_is_pxa320())
		panic("%s: PXA320 not supported\n", __func__);
}
#endif

#endif /* __ASM_ARCH_ZYLONITE_H */
Tue Jul 19 12:41:43 PDT 2016
Fri Jul 22 15:52:53 PDT 2016
Sun, Jul 24, 2016  3:04:05 PM
Mon, Jul 25, 2016  9:40:46 PM
