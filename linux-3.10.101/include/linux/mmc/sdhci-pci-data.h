#ifndef LINUX_MMC_SDHCI_PCI_DATA_H
#define LINUX_MMC_SDHCI_PCI_DATA_H

struct pci_dev;

struct sdhci_pci_data {
	struct pci_dev	*pdev;
	int		slotno;
	int		rst_n_gpio; /* Set to -EINVAL if unused */
	int		cd_gpio;    /* Set to -EINVAL if unused */
	int		(*setup)(struct sdhci_pci_data *data);
	void		(*cleanup)(struct sdhci_pci_data *data);
};

extern struct sdhci_pci_data *(*sdhci_pci_get_data)(struct pci_dev *pdev,
				int slotno);

#endif
Tue Jul 19 12:40:52 PDT 2016
Fri Jul 22 15:51:13 PDT 2016
Sun, Jul 24, 2016  2:52:18 PM
Mon, Jul 25, 2016  9:27:29 PM
