/*
 * linux/arch/arm/mach-clps711x/common.h
 *
 * Common bits.
 */

#define CLPS711X_NR_IRQS	(33)
#define CLPS711X_NR_GPIO	(4 * 8 + 3)
#define CLPS711X_GPIO(prt, bit)	((prt) * 8 + (bit))

extern void clps711x_map_io(void);
extern void clps711x_init_irq(void);
extern void clps711x_timer_init(void);
extern void clps711x_handle_irq(struct pt_regs *regs);
extern void clps711x_restart(char mode, const char *cmd);
Tue Jul 19 12:48:50 PDT 2016
Fri Jul 22 16:05:55 PDT 2016
Sun, Jul 24, 2016  4:45:13 PM
Mon, Jul 25, 2016 11:33:24 PM
