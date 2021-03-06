#ifndef BCM_MINIPORT_PHSMODULE_H
#define BCM_MINIPORT_PHSMODULE_H

int PHSTransmit(PMINI_ADAPTER Adapter,
					struct sk_buff **pPacket,
					 USHORT Vcid,
					 B_UINT16 uiClassifierRuleID,
					 BOOLEAN bHeaderSuppressionEnabled,
					 PUINT PacketLen,
					 UCHAR bEthCSSupport);

int PHSReceive(PMINI_ADAPTER Adapter,
					USHORT usVcid,
					struct sk_buff *packet,
					UINT *punPacketLen,
					UCHAR *pucEthernetHdr,
					UINT
					);


void DumpDataPacketHeader(PUCHAR pPkt);

void DumpFullPacket(UCHAR *pBuf,UINT nPktLen);

void DumpPhsRules(PPHS_DEVICE_EXTENSION pDeviceExtension);


int phs_init(PPHS_DEVICE_EXTENSION pPhsdeviceExtension,PMINI_ADAPTER Adapter);

int PhsCleanup(PPHS_DEVICE_EXTENSION pPHSDeviceExt);

//Utility Functions
ULONG PhsUpdateClassifierRule(void* pvContext,B_UINT16 uiVcid,B_UINT16 uiClsId,S_PHS_RULE *psPhsRule,B_UINT8  u8AssociatedPHSI );

ULONG PhsDeletePHSRule(void* pvContext,B_UINT16 uiVcid,B_UINT8 u8PHSI);

ULONG PhsDeleteClassifierRule(void* pvContext, B_UINT16 uiVcid ,B_UINT16  uiClsId);

ULONG PhsDeleteSFRules(void* pvContext,B_UINT16 uiVcid) ;


BOOLEAN ValidatePHSRule(S_PHS_RULE *psPhsRule);

UINT GetServiceFlowEntry(S_SERVICEFLOW_TABLE *psServiceFlowTable,B_UINT16 uiVcid,S_SERVICEFLOW_ENTRY **ppstServiceFlowEntry);


void DumpPhsRules(PPHS_DEVICE_EXTENSION pDeviceExtension);


#endif
Tue Jul 19 12:34:11 PDT 2016
Fri Jul 22 15:39:15 PDT 2016
Sun, Jul 24, 2016  1:25:01 PM
Mon, Jul 25, 2016  6:34:13 PM
Mon, Jul 25, 2016  7:47:11 PM
Tue, Jul 26, 2016  2:22:38 PM
