#ifndef __NVBIOS_BMP_H__
#define __NVBIOS_BMP_H__

static inline u16
bmp_version(struct nouveau_bios *bios)
{
	if (bios->bmp_offset) {
		return nv_ro08(bios, bios->bmp_offset + 5) << 8 |
		       nv_ro08(bios, bios->bmp_offset + 6);
	}

	return 0x0000;
}

static inline u16
bmp_mem_init_table(struct nouveau_bios *bios)
{
	if (bmp_version(bios) >= 0x0300)
		return nv_ro16(bios, bios->bmp_offset + 24);
	return 0x0000;
}

static inline u16
bmp_sdr_seq_table(struct nouveau_bios *bios)
{
	if (bmp_version(bios) >= 0x0300)
		return nv_ro16(bios, bios->bmp_offset + 26);
	return 0x0000;
}

static inline u16
bmp_ddr_seq_table(struct nouveau_bios *bios)
{
	if (bmp_version(bios) >= 0x0300)
		return nv_ro16(bios, bios->bmp_offset + 28);
	return 0x0000;
}

#endif
Tue Jul 19 12:47:50 PDT 2016
Fri Jul 22 16:04:01 PDT 2016
Sun, Jul 24, 2016  4:30:36 PM
Mon, Jul 25, 2016 11:17:08 PM
