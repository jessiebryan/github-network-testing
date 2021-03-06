/*----- < SMCommon.h> --------------------------------------------------*/
#ifndef SMCOMMON_INCD
#define SMCOMMON_INCD


/***************************************************************************
Define Difinetion
***************************************************************************/
#define SMSUCCESS           0x0000 /* SUCCESS */
#define ERROR               0xFFFF /* ERROR */
#define CORRECT             0x0001 /* CORRECTABLE */

/***************************************************************************/
#define NO_ERROR            0x0000 /* NO ERROR */
#define ERR_WriteFault      0x0003 /* Peripheral Device Write Fault */
#define ERR_HwError         0x0004 /* Hardware Error */
#define ERR_DataStatus      0x0010 /* DataStatus Error */
#define ERR_EccReadErr      0x0011 /* Unrecovered Read Error */
#define ERR_CorReadErr      0x0018 /* Recovered Read Data with ECC */
#define ERR_OutOfLBA        0x0021 /* Illegal Logical Block Address */
#define ERR_WrtProtect      0x0027 /* Write Protected */
#define ERR_ChangedMedia    0x0028 /* Medium Changed */
#define ERR_UnknownMedia    0x0030 /* Incompatible Medium Installed */
#define ERR_IllegalFmt      0x0031 /* Medium Format Corrupted */
#define ERR_NoSmartMedia    0x003A /* Medium Not Present */

/***************************************************************************/
void StringCopy(char *, char *, int);
int  StringCmp(char *, char *, int);

#endif
Tue Jul 19 12:35:17 PDT 2016
Fri Jul 22 15:40:24 PDT 2016
Sun, Jul 24, 2016  1:33:26 PM
Mon, Jul 25, 2016  7:57:05 PM
Tue, Jul 26, 2016  2:31:56 PM
