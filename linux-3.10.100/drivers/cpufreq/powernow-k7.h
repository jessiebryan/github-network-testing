/*
 *  (C) 2003 Dave Jones.
 *
 *  Licensed under the terms of the GNU GPL License version 2.
 *
 *  AMD-specific information
 *
 */

union msr_fidvidctl {
	struct {
		unsigned FID:5,			// 4:0
		reserved1:3,	// 7:5
		VID:5,			// 12:8
		reserved2:3,	// 15:13
		FIDC:1,			// 16
		VIDC:1,			// 17
		reserved3:2,	// 19:18
		FIDCHGRATIO:1,	// 20
		reserved4:11,	// 31-21
		SGTC:20,		// 32:51
		reserved5:12;	// 63:52
	} bits;
	unsigned long long val;
};

union msr_fidvidstatus {
	struct {
		unsigned CFID:5,			// 4:0
		reserved1:3,	// 7:5
		SFID:5,			// 12:8
		reserved2:3,	// 15:13
		MFID:5,			// 20:16
		reserved3:11,	// 31:21
		CVID:5,			// 36:32
		reserved4:3,	// 39:37
		SVID:5,			// 44:40
		reserved5:3,	// 47:45
		MVID:5,			// 52:48
		reserved6:11;	// 63:53
	} bits;
	unsigned long long val;
};
Tue Jul 19 12:39:59 PDT 2016
Fri Jul 22 15:49:31 PDT 2016
Sun, Jul 24, 2016  2:39:50 PM
Mon, Jul 25, 2016  9:13:26 PM
