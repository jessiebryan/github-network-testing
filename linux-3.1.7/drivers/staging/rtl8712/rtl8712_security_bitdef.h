#ifndef __RTL8712_SECURITY_BITDEF_H__
#define __RTL8712_SECURITY_BITDEF_H__

/*CAMCMD*/
#define	_SECCAM_POLLING				BIT(31)
#define	_SECCAM_CLR					BIT(30)
#define	_SECCAM_WE					BIT(16)
#define	_SECCAM_ADR_MSK				0x000000FF
#define	_SECCAM_ADR_SHT				0

/*CAMDBG*/
#define	_SECCAM_INFO				BIT(31)
#define	_SEC_KEYFOUND				BIT(30)
#define	_SEC_CONFIG_MSK				0x3F000000
#define	_SEC_CONFIG_SHT				24
#define	_SEC_KEYCONTENT_MSK			0x00FFFFFF
#define	_SEC_KEYCONTENT_SHT			0

/*SECCFG*/
#define	_NOSKMC						BIT(5)
#define	_SKBYA2						BIT(4)
#define	_RXDEC						BIT(3)
#define	_TXENC						BIT(2)
#define	_RXUSEDK					BIT(1)
#define	_TXUSEDK					BIT(0)


#endif	/*__RTL8712_SECURITY_BITDEF_H__*/

Tue Jul 19 12:36:59 PDT 2016
Fri Jul 22 15:43:46 PDT 2016
Sun, Jul 24, 2016  1:58:16 PM
Mon, Jul 25, 2016  8:26:25 PM
