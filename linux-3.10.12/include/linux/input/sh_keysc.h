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
Tue Jul 19 12:42:58 PDT 2016
Fri Jul 22 15:54:54 PDT 2016
Sun, Jul 24, 2016  3:19:45 PM
Mon, Jul 25, 2016  9:58:23 PM
