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
Tue Jul 19 12:50:58 PDT 2016
Fri Jul 22 16:09:55 PDT 2016
Sun, Jul 24, 2016  5:15:39 PM
Tue, Jul 26, 2016 12:07:06 AM
