#ifndef __SH_KEYSC_H__
#define __SH_KEYSC_H__

#define SH_KEYSC_MAXKEYS 64

struct sh_keysc_info {
	enum { SH_KEYSC_MODE_1, SH_KEYSC_MODE_2, SH_KEYSC_MODE_3,
	       SH_KEYSC_MODE_4, SH_KEYSC_MODE_5, SH_KEYSC_MODE_6 } mode;
	int scan_timing; /* 0 -> 7, see KYCR1, SCN[2:0] */
	int delay;
	int kycr2_delay;
	int keycodes[SH_KEYSC_MAXKEYS]; /* KEYIN * KEYOUT */
};

#endif /* __SH_KEYSC_H__ */
Tue Jul 19 12:34:25 PDT 2016
Fri Jul 22 15:39:26 PDT 2016
Sun, Jul 24, 2016  1:26:26 PM
Mon, Jul 25, 2016  6:35:54 PM
Mon, Jul 25, 2016  7:48:50 PM
Tue, Jul 26, 2016  2:24:11 PM
