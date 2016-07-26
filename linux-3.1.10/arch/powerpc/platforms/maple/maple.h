/*
 * Declarations for maple-specific code.
 *
 * Maple is the name of a PPC970 evaluation board.
 */
extern int maple_set_rtc_time(struct rtc_time *tm);
extern void maple_get_rtc_time(struct rtc_time *tm);
extern unsigned long maple_get_boot_time(void);
extern void maple_calibrate_decr(void);
extern void maple_pci_init(void);
extern void maple_pci_irq_fixup(struct pci_dev *dev);
extern int maple_pci_get_legacy_ide_irq(struct pci_dev *dev, int channel);
Tue Jul 19 12:33:23 PDT 2016
Fri Jul 22 15:37:51 PDT 2016
Sun, Jul 24, 2016  1:14:19 PM
Mon, Jul 25, 2016  6:21:24 PM
Mon, Jul 25, 2016  7:34:38 PM
