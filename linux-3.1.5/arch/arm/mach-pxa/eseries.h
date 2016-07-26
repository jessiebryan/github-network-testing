void __init eseries_fixup(struct machine_desc *desc,
	struct tag *tags, char **cmdline, struct meminfo *mi);

extern struct pxa2xx_udc_mach_info e7xx_udc_mach_info;
extern struct pxaficp_platform_data e7xx_ficp_platform_data;
extern int e7xx_irda_init(void);

extern int eseries_tmio_enable(struct platform_device *dev);
extern int eseries_tmio_disable(struct platform_device *dev);
extern int eseries_tmio_suspend(struct platform_device *dev);
extern int eseries_tmio_resume(struct platform_device *dev);
extern void eseries_get_tmio_gpios(void);
extern struct resource eseries_tmio_resources[];
extern struct platform_device e300_tc6387xb_device;
extern void eseries_register_clks(void);

Tue Jul 19 12:36:05 PDT 2016
Fri Jul 22 15:41:59 PDT 2016
Sun, Jul 24, 2016  1:45:04 PM
Mon, Jul 25, 2016  8:10:50 PM
