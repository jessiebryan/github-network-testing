/* Lasat 100 */
#define PVC_REG_100		KSEG1ADDR(0x1c820000)
#define PVC_DATA_SHIFT_100	0
#define PVC_DATA_M_100		0xFF
#define PVC_E_100		(1 << 8)
#define PVC_RW_100		(1 << 9)
#define PVC_RS_100		(1 << 10)

/* Lasat 200 */
#define PVC_REG_200		KSEG1ADDR(0x11000000)
#define PVC_DATA_SHIFT_200	24
#define PVC_DATA_M_200		(0xFF << PVC_DATA_SHIFT_200)
#define PVC_E_200		(1 << 16)
#define PVC_RW_200		(1 << 17)
#define PVC_RS_200		(1 << 18)
Tue Jul 19 12:50:15 PDT 2016
Fri Jul 22 16:08:35 PDT 2016
Sun, Jul 24, 2016  5:05:33 PM
Mon, Jul 25, 2016 11:55:55 PM
