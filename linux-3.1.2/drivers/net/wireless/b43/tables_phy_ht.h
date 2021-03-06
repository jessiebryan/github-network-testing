#ifndef B43_TABLES_PHY_HT_H_
#define B43_TABLES_PHY_HT_H_

/* The HT-PHY tables. */
#define B43_HTTAB_TYPEMASK		0xF0000000
#define B43_HTTAB_8BIT			0x10000000
#define B43_HTTAB_16BIT			0x20000000
#define B43_HTTAB_32BIT			0x30000000
#define B43_HTTAB8(table, offset)	(((table) << 10) | (offset) | B43_HTTAB_8BIT)
#define B43_HTTAB16(table, offset)	(((table) << 10) | (offset) | B43_HTTAB_16BIT)
#define B43_HTTAB32(table, offset)	(((table) << 10) | (offset) | B43_HTTAB_32BIT)

u32 b43_httab_read(struct b43_wldev *dev, u32 offset);
void b43_httab_read_bulk(struct b43_wldev *dev, u32 offset,
			 unsigned int nr_elements, void *_data);
void b43_httab_write(struct b43_wldev *dev, u32 offset, u32 value);
void b43_httab_write_bulk(struct b43_wldev *dev, u32 offset,
			  unsigned int nr_elements, const void *_data);

void b43_phy_ht_tables_init(struct b43_wldev *dev);

#endif /* B43_TABLES_PHY_HT_H_ */
Tue Jul 19 12:34:09 PDT 2016
Fri Jul 22 15:39:11 PDT 2016
Sun, Jul 24, 2016  1:24:33 PM
Mon, Jul 25, 2016  6:33:39 PM
Mon, Jul 25, 2016  7:46:39 PM
Tue, Jul 26, 2016  2:22:08 PM
