#ifndef B43_BUS_H_
#define B43_BUS_H_

enum b43_bus_type {
#ifdef CONFIG_B43_BCMA
	B43_BUS_BCMA,
#endif
	B43_BUS_SSB,
};

struct b43_bus_dev {
	enum b43_bus_type bus_type;
	union {
		struct bcma_device *bdev;
		struct ssb_device *sdev;
	};

	int (*bus_may_powerdown)(struct b43_bus_dev *dev);
	int (*bus_powerup)(struct b43_bus_dev *dev, bool dynamic_pctl);
	int (*device_is_enabled)(struct b43_bus_dev *dev);
	void (*device_enable)(struct b43_bus_dev *dev,
			      u32 core_specific_flags);
	void (*device_disable)(struct b43_bus_dev *dev,
			       u32 core_specific_flags);

	u16 (*read16)(struct b43_bus_dev *dev, u16 offset);
	u32 (*read32)(struct b43_bus_dev *dev, u16 offset);
	void (*write16)(struct b43_bus_dev *dev, u16 offset, u16 value);
	void (*write32)(struct b43_bus_dev *dev, u16 offset, u32 value);
	void (*block_read)(struct b43_bus_dev *dev, void *buffer,
			   size_t count, u16 offset, u8 reg_width);
	void (*block_write)(struct b43_bus_dev *dev, const void *buffer,
			    size_t count, u16 offset, u8 reg_width);

	struct device *dev;
	struct device *dma_dev;
	unsigned int irq;

	u16 board_vendor;
	u16 board_type;
	u16 board_rev;

	u16 chip_id;
	u8 chip_rev;
	u8 chip_pkg;

	struct ssb_sprom *bus_sprom;

	u16 core_id;
	u8 core_rev;
};

static inline bool b43_bus_host_is_pcmcia(struct b43_bus_dev *dev)
{
	return (dev->bus_type == B43_BUS_SSB &&
		dev->sdev->bus->bustype == SSB_BUSTYPE_PCMCIA);
}
static inline bool b43_bus_host_is_sdio(struct b43_bus_dev *dev)
{
	return (dev->bus_type == B43_BUS_SSB &&
		dev->sdev->bus->bustype == SSB_BUSTYPE_SDIO);
}

struct b43_bus_dev *b43_bus_dev_bcma_init(struct bcma_device *core);
struct b43_bus_dev *b43_bus_dev_ssb_init(struct ssb_device *sdev);

void *b43_bus_get_wldev(struct b43_bus_dev *dev);
void b43_bus_set_wldev(struct b43_bus_dev *dev, void *data);

#endif /* B43_BUS_H_ */
Tue Jul 19 12:40:04 PDT 2016
Fri Jul 22 15:49:40 PDT 2016
Sun, Jul 24, 2016  2:40:57 PM
Mon, Jul 25, 2016  9:14:40 PM
