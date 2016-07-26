#ifndef B43_TABLES_PHY_LCN_H_
#define B43_TABLES_PHY_LCN_H_

/* The LCN-PHY tables. */
#define B43_LCNTAB_TYPEMASK		0xF0000000
#define B43_LCNTAB_8BIT			0x10000000
#define B43_LCNTAB_16BIT		0x20000000
#define B43_LCNTAB_32BIT		0x30000000
#define B43_LCNTAB8(table, offset)	(((table) << 10) | (offset) | B43_LCNTAB_8BIT)
#define B43_LCNTAB16(table, offset)	(((table) << 10) | (offset) | B43_LCNTAB_16BIT)
#define B43_LCNTAB32(table, offset)	(((table) << 10) | (offset) | B43_LCNTAB_32BIT)

#define B43_LCNTAB_TX_GAIN_SIZE		128

u32 b43_lcntab_read(struct b43_wldev *dev, u32 offset);
void b43_lcntab_read_bulk(struct b43_wldev *dev, u32 offset,
			  unsigned int nr_elements, void *_data);
void b43_lcntab_write(struct b43_wldev *dev, u32 offset, u32 value);
void b43_lcntab_write_bulk(struct b43_wldev *dev, u32 offset,
			   unsigned int nr_elements, const void *_data);

void b43_phy_lcn_tables_init(struct b43_wldev *dev);

#endif /* B43_TABLES_PHY_LCN_H_ */
Tue Jul 19 12:53:43 PDT 2016
Fri Jul 22 16:15:18 PDT 2016
Sun, Jul 24, 2016  5:55:14 PM
Tue, Jul 26, 2016 12:50:46 AM
