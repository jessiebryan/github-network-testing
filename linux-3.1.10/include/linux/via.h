/* Miscellaneous definitions for VIA chipsets
   Currently used only by drivers/parport/parport_pc.c */

/* Values for SuperIO function select configuration register */
#define VIA_FUNCTION_PARPORT_SPP     0x00
#define VIA_FUNCTION_PARPORT_ECP     0x01
#define VIA_FUNCTION_PARPORT_EPP     0x02
#define VIA_FUNCTION_PARPORT_DISABLE 0x03
#define VIA_FUNCTION_PROBE           0xFF /* Special magic value to be used in code, not to be written into chip */

/* Bits for parallel port mode configuration register */
#define VIA_PARPORT_ECPEPP 0X20
#define VIA_PARPORT_BIDIR  0x80

/* VIA configuration registers */
#define VIA_CONFIG_INDEX 0x3F0
#define VIA_CONFIG_DATA  0x3F1

/* Mask for parallel port IRQ bits (in ISA PnP IRQ routing register 1) */
#define VIA_IRQCONTROL_PARALLEL 0xF0
/* Mask for parallel port DMA bits (in ISA PnP DMA routing register) */
#define VIA_DMACONTROL_PARALLEL 0x0C
Tue Jul 19 12:33:42 PDT 2016
Fri Jul 22 15:38:26 PDT 2016
Sun, Jul 24, 2016  1:18:48 PM
Mon, Jul 25, 2016  6:26:45 PM
Mon, Jul 25, 2016  7:39:53 PM
Tue, Jul 26, 2016  2:15:43 PM
