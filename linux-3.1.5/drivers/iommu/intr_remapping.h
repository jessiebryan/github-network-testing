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
Tue Jul 19 12:36:20 PDT 2016
Fri Jul 22 15:42:28 PDT 2016
Sun, Jul 24, 2016  1:48:35 PM
Mon, Jul 25, 2016  8:15:00 PM
