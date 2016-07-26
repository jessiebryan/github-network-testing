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
Tue Jul 19 12:38:37 PDT 2016
Fri Jul 22 15:46:48 PDT 2016
Sun, Jul 24, 2016  2:20:16 PM
Mon, Jul 25, 2016  8:51:38 PM
