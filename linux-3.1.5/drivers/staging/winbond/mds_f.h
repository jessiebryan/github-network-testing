#ifndef __WINBOND_MDS_F_H
#define __WINBOND_MDS_F_H

#include "wbhal.h"
#include "core.h"

unsigned char Mds_initial(struct wbsoft_priv *adapter);
void Mds_Tx(struct wbsoft_priv *adapter);
void Mds_SendComplete(struct wbsoft_priv *adapter, struct T02_descriptor *pt02);
void Mds_MpduProcess(struct wbsoft_priv *adapter, struct wb35_descriptor *prxdes);
extern void DataDmp(u8 *pdata, u32 len, u32 offset);

/* For data frame sending */
u16 MDS_GetPacketSize(struct wbsoft_priv *adapter);
void MDS_GetNextPacket(struct wbsoft_priv *adapter, struct wb35_descriptor *pdes);
void MDS_GetNextPacketComplete(struct wbsoft_priv *adapter, struct wb35_descriptor *pdes);
void MDS_SendResult(struct wbsoft_priv *adapter, u8 packetid, unsigned char sendok);

#endif
Tue Jul 19 12:36:27 PDT 2016
Fri Jul 22 15:42:40 PDT 2016
Sun, Jul 24, 2016  1:50:11 PM
Mon, Jul 25, 2016  8:16:50 PM
