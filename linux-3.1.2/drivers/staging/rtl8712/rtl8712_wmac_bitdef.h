#ifndef __RTL8712_WMAC_BITDEF_H__
#define __RTL8712_WMAC_BITDEF_H__

/*NAVCTRL*/
#define	_NAV_UPPER_EN			BIT(18)
#define	_NAV_MTO_EN				BIT(17)
#define	_NAV_UPPER				BIT(16)
#define	_NAV_MTO_MSK			0xFF00
#define	_NAV_MTO_SHT			8
#define	_RTSRST_MSK				0x00FF
#define	_RTSRST_SHT				0

/*BWOPMODE*/
#define	_20MHZBW				BIT(2)

/*BACAMCMD*/
#define	_BACAM_POLL				BIT(31)
#define	_BACAM_RST				BIT(17)
#define	_BACAM_RW				BIT(16)
#define	_BACAM_ADDR_MSK			0x0000007F
#define	_BACAM_ADDR_SHT			0

/*LBDLY*/
#define	_LBDLY_MSK				0x1F

/*FWDLY*/
#define	_FWDLY_MSK				0x0F

/*RXERR_RPT*/
#define	_RXERR_RPT_SEL_MSK		0xF0000000
#define	_RXERR_RPT_SEL_SHT		28
#define	_RPT_CNT_MSK			0x000FFFFF
#define	_RPT_CNT_SHT			0


#endif	/*__RTL8712_WMAC_BITDEF_H__*/

Tue Jul 19 12:34:12 PDT 2016
Fri Jul 22 15:39:17 PDT 2016
Sun, Jul 24, 2016  1:25:17 PM
Mon, Jul 25, 2016  6:34:31 PM
Mon, Jul 25, 2016  7:47:29 PM
Tue, Jul 26, 2016  2:22:55 PM
