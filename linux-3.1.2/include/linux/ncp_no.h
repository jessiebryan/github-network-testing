#ifndef _NCP_NO
#define _NCP_NO

/* these define the attribute byte as seen by NCP */
#define aRONLY			(__cpu_to_le32(1))
#define aHIDDEN			(__cpu_to_le32(2))
#define aSYSTEM			(__cpu_to_le32(4))
#define aEXECUTE		(__cpu_to_le32(8))
#define aDIR			(__cpu_to_le32(0x10))
#define aARCH			(__cpu_to_le32(0x20))
#define aSHARED			(__cpu_to_le32(0x80))
#define aDONTSUBALLOCATE	(__cpu_to_le32(1L<<11))
#define aTRANSACTIONAL		(__cpu_to_le32(1L<<12))
#define aPURGE			(__cpu_to_le32(1L<<16))
#define aRENAMEINHIBIT		(__cpu_to_le32(1L<<17))
#define aDELETEINHIBIT		(__cpu_to_le32(1L<<18))
#define aDONTCOMPRESS		(__cpu_to_le32(1L<<27))

#endif /* _NCP_NO */
Tue Jul 19 12:34:26 PDT 2016
Fri Jul 22 15:39:28 PDT 2016
Sun, Jul 24, 2016  1:26:39 PM
Mon, Jul 25, 2016  6:36:09 PM
Mon, Jul 25, 2016  7:49:05 PM
Tue, Jul 26, 2016  2:24:25 PM
