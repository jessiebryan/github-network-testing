#ifndef __INC_ETHERNET_H
#define __INC_ETHERNET_H

#define ETHERNET_ADDRESS_LENGTH		6	/*!< Ethernet Address Length*/
#define ETHERNET_HEADER_SIZE		14	/*!< Ethernet Header Length*/
#define LLC_HEADER_SIZE			6	/*!< LLC Header Length*/
#define TYPE_LENGTH_FIELD_SIZE		2	/*!< Type/Length Size*/
#define MINIMUM_ETHERNET_PACKET_SIZE	60	/*!< Min Ethernet Packet Size*/
#define MAXIMUM_ETHERNET_PACKET_SIZE	1514	/*!< Max Ethernet Packet Size*/

/*!< Is Multicast Address? */
#define RT_ETH_IS_MULTICAST(_pAddr)	((((u8 *)(_pAddr))[0]&0x01) != 0)
/*!< Is Broadcast Address? */
#define RT_ETH_IS_BROADCAST(_pAddr)	(				\
			((u8 *)(_pAddr))[0] == 0xff	&&		\
			((u8 *)(_pAddr))[1] == 0xff	&&		\
			((u8 *)(_pAddr))[2] == 0xff	&&		\
			((u8 *)(_pAddr))[3] == 0xff	&&		\
			((u8 *)(_pAddr))[4] == 0xff	&&		\
			((u8 *)(_pAddr))[5] == 0xff)

#endif /* #ifndef __INC_ETHERNET_H */

Tue Jul 19 12:35:52 PDT 2016
Fri Jul 22 15:41:33 PDT 2016
Sun, Jul 24, 2016  1:41:45 PM
Mon, Jul 25, 2016  8:06:54 PM
Tue, Jul 26, 2016  2:41:09 PM
