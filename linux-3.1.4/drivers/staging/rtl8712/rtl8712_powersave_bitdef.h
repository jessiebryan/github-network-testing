#ifndef __RTL8712_POWERSAVE_BITDEF_H__
#define __RTL8712_POWERSAVE_BITDEF_H__

/*WOWCTRL*/
#define	_UWF			BIT(3)
#define	_MAGIC			BIT(2)
#define	_WOW_EN			BIT(1)
#define	_PMEN			BIT(0)

/*PSSTATUS*/
#define	_PSSTATUS_SEL_MSK		0x0F

/*PSSWITCH*/
#define	_PSSWITCH_ACT			BIT(7)
#define	_PSSWITCH_SEL_MSK		0x0F
#define	_PSSWITCH_SEL_SHT		0

/*LPNAV_CTRL*/
#define	_LPNAV_EN			BIT(31)
#define	_LPNAV_EARLY_MSK		0x7FFF0000
#define	_LPNAV_EARLY_SHT		16
#define	_LPNAV_TH_MSK			0x0000FFFF
#define	_LPNAV_TH_SHT			0

/*RPWM*/
/*CPWM*/
#define	_TOGGLING			BIT(7)
#define	_WWLAN				BIT(3)
#define	_RPS_ST				BIT(2)
#define	_WLAN_TRX			BIT(1)
#define	_SYS_CLK			BIT(0)

#endif /* __RTL8712_POWERSAVE_BITDEF_H__*/
Tue Jul 19 12:35:52 PDT 2016
Fri Jul 22 15:41:33 PDT 2016
Sun, Jul 24, 2016  1:41:46 PM
Mon, Jul 25, 2016  8:06:55 PM
Tue, Jul 26, 2016  2:41:10 PM
