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
Tue Jul 19 12:35:14 PDT 2016
Fri Jul 22 15:40:19 PDT 2016
Sun, Jul 24, 2016  1:32:48 PM
Mon, Jul 25, 2016  7:56:21 PM
Tue, Jul 26, 2016  2:31:15 PM
