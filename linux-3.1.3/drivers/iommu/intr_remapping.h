#include <linux/intel-iommu.h>

struct ioapic_scope {
	struct intel_iommu *iommu;
	unsigned int id;
	unsigned int bus;	/* PCI bus number */
	unsigned int devfn;	/* PCI devfn number */
};

struct hpet_scope {
	struct intel_iommu *iommu;
	u8 id;
	unsigned int bus;
	unsigned int devfn;
};

#define IR_X2APIC_MODE(mode) (mode ? (1 << 11) : 0)
Tue Jul 19 12:35:12 PDT 2016
Fri Jul 22 15:40:13 PDT 2016
Sun, Jul 24, 2016  1:32:06 PM
Mon, Jul 25, 2016  7:55:31 PM
Tue, Jul 26, 2016  2:30:29 PM
