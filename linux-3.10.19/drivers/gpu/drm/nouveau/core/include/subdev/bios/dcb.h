#ifndef __NVBIOS_DCB_H__
#define __NVBIOS_DCB_H__

struct nouveau_bios;

enum dcb_output_type {
	DCB_OUTPUT_ANALOG	= 0x0,
	DCB_OUTPUT_TV		= 0x1,
	DCB_OUTPUT_TMDS		= 0x2,
	DCB_OUTPUT_LVDS		= 0x3,
	DCB_OUTPUT_DP		= 0x6,
	DCB_OUTPUT_EOL		= 0xe,
	DCB_OUTPUT_UNUSED	= 0xf,
	DCB_OUTPUT_ANY = -1,
};

struct dcb_output {
	int index;	/* may not be raw dcb index if merging has happened */
	u16 hasht;
	u16 hashm;
	enum dcb_output_type type;
	uint8_t i2c_index;
	uint8_t heads;
	uint8_t connector;
	uint8_t bus;
	uint8_t location;
	uint8_t or;
	uint8_t link;
	bool duallink_possible;
	uint8_t extdev;
	union {
		struct sor_conf {
			int link;
		} sorconf;
		struct {
			int maxfreq;
		} crtconf;
		struct {
			struct sor_conf sor;
			bool use_straps_for_mode;
			bool use_acpi_for_edid;
			bool use_power_scripts;
		} lvdsconf;
		struct {
			bool has_component_output;
		} tvconf;
		struct {
			struct sor_conf sor;
			int link_nr;
			int link_bw;
		} dpconf;
		struct {
			struct sor_conf sor;
			int slave_addr;
		} tmdsconf;
	};
	bool i2c_upper_default;
};

u16 dcb_table(struct nouveau_bios *, u8 *ver, u8 *hdr, u8 *ent, u8 *len);
u16 dcb_outp(struct nouveau_bios *, u8 idx, u8 *ver, u8 *len);
u16 dcb_outp_parse(struct nouveau_bios *, u8 idx, u8 *, u8 *,
		   struct dcb_output *);
u16 dcb_outp_match(struct nouveau_bios *, u16 type, u16 mask, u8 *, u8 *,
		   struct dcb_output *);
int dcb_outp_foreach(struct nouveau_bios *, void *data, int (*exec)
		     (struct nouveau_bios *, void *, int index, u16 entry));

#endif
Tue Jul 19 12:47:12 PDT 2016
Fri Jul 22 16:02:49 PDT 2016
Sun, Jul 24, 2016  4:21:20 PM
Mon, Jul 25, 2016 11:06:53 PM
