extern void __cmx2xx_pci_init_irq(int irq_gpio);
extern void __cmx2xx_pci_suspend(void);
extern void __cmx2xx_pci_resume(void);

#ifdef CONFIG_PCI
#define cmx2xx_pci_init_irq(x) __cmx2xx_pci_init_irq(x)
#define cmx2xx_pci_suspend(x) __cmx2xx_pci_suspend(x)
#define cmx2xx_pci_resume(x) __cmx2xx_pci_resume(x)
#else
#define cmx2xx_pci_init_irq(x) do {} while (0)
#define cmx2xx_pci_suspend(x) do {} while (0)
#define cmx2xx_pci_resume(x) do {} while (0)
#endif
Tue Jul 19 12:44:26 PDT 2016
Fri Jul 22 15:57:38 PDT 2016
Sun, Jul 24, 2016  3:40:56 PM
Mon, Jul 25, 2016 10:21:54 PM
