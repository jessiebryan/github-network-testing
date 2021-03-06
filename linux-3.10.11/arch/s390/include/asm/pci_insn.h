#ifndef _ASM_S390_PCI_INSN_H
#define _ASM_S390_PCI_INSN_H

/* Load/Store status codes */
#define ZPCI_PCI_ST_FUNC_NOT_ENABLED		4
#define ZPCI_PCI_ST_FUNC_IN_ERR			8
#define ZPCI_PCI_ST_BLOCKED			12
#define ZPCI_PCI_ST_INSUF_RES			16
#define ZPCI_PCI_ST_INVAL_AS			20
#define ZPCI_PCI_ST_FUNC_ALREADY_ENABLED	24
#define ZPCI_PCI_ST_DMA_AS_NOT_ENABLED		28
#define ZPCI_PCI_ST_2ND_OP_IN_INV_AS		36
#define ZPCI_PCI_ST_FUNC_NOT_AVAIL		40
#define ZPCI_PCI_ST_ALREADY_IN_RQ_STATE		44

/* Load/Store return codes */
#define ZPCI_PCI_LS_OK				0
#define ZPCI_PCI_LS_ERR				1
#define ZPCI_PCI_LS_BUSY			2
#define ZPCI_PCI_LS_INVAL_HANDLE		3

/* Load/Store address space identifiers */
#define ZPCI_PCIAS_MEMIO_0			0
#define ZPCI_PCIAS_MEMIO_1			1
#define ZPCI_PCIAS_MEMIO_2			2
#define ZPCI_PCIAS_MEMIO_3			3
#define ZPCI_PCIAS_MEMIO_4			4
#define ZPCI_PCIAS_MEMIO_5			5
#define ZPCI_PCIAS_CFGSPC			15

/* Modify PCI Function Controls */
#define ZPCI_MOD_FC_REG_INT	2
#define ZPCI_MOD_FC_DEREG_INT	3
#define ZPCI_MOD_FC_REG_IOAT	4
#define ZPCI_MOD_FC_DEREG_IOAT	5
#define ZPCI_MOD_FC_REREG_IOAT	6
#define ZPCI_MOD_FC_RESET_ERROR	7
#define ZPCI_MOD_FC_RESET_BLOCK	9
#define ZPCI_MOD_FC_SET_MEASURE	10

/* FIB function controls */
#define ZPCI_FIB_FC_ENABLED	0x80
#define ZPCI_FIB_FC_ERROR	0x40
#define ZPCI_FIB_FC_LS_BLOCKED	0x20
#define ZPCI_FIB_FC_DMAAS_REG	0x10

/* FIB function controls */
#define ZPCI_FIB_FC_ENABLED	0x80
#define ZPCI_FIB_FC_ERROR	0x40
#define ZPCI_FIB_FC_LS_BLOCKED	0x20
#define ZPCI_FIB_FC_DMAAS_REG	0x10

/* Function Information Block */
struct zpci_fib {
	u32 fmt		:  8;	/* format */
	u32		: 24;
	u32 reserved1;
	u8 fc;			/* function controls */
	u8 reserved2;
	u16 reserved3;
	u32 reserved4;
	u64 pba;		/* PCI base address */
	u64 pal;		/* PCI address limit */
	u64 iota;		/* I/O Translation Anchor */
	u32		:  1;
	u32 isc		:  3;	/* Interrupt subclass */
	u32 noi		: 12;	/* Number of interrupts */
	u32		:  2;
	u32 aibvo	:  6;	/* Adapter interrupt bit vector offset */
	u32 sum		:  1;	/* Adapter int summary bit enabled */
	u32		:  1;
	u32 aisbo	:  6;	/* Adapter int summary bit offset */
	u32 reserved5;
	u64 aibv;		/* Adapter int bit vector address */
	u64 aisb;		/* Adapter int summary bit address */
	u64 fmb_addr;		/* Function measurement block address and key */
	u64 reserved6;
	u64 reserved7;
} __packed;


int s390pci_mod_fc(u64 req, struct zpci_fib *fib);
int s390pci_refresh_trans(u64 fn, u64 addr, u64 range);
int s390pci_load(u64 *data, u64 req, u64 offset);
int s390pci_store(u64 data, u64 req, u64 offset);
int s390pci_store_block(const u64 *data, u64 req, u64 offset);
void set_irq_ctrl(u16 ctl, char *unused, u8 isc);

#endif
Tue Jul 19 12:41:55 PDT 2016
Fri Jul 22 15:53:11 PDT 2016
Sun, Jul 24, 2016  3:06:23 PM
Mon, Jul 25, 2016  9:43:22 PM
