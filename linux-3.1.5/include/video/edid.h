#ifndef __linux_video_edid_h__
#define __linux_video_edid_h__

#if !defined(__KERNEL__) || defined(CONFIG_X86)

struct edid_info {
	unsigned char dummy[128];
};

#ifdef __KERNEL__
extern struct edid_info edid_info;
#endif /* __KERNEL__ */

#endif

#endif /* __linux_video_edid_h__ */
Tue Jul 19 12:36:35 PDT 2016
Fri Jul 22 15:42:58 PDT 2016
Sun, Jul 24, 2016  1:52:11 PM
Mon, Jul 25, 2016  8:19:12 PM
