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
Tue Jul 19 12:35:26 PDT 2016
Fri Jul 22 15:40:42 PDT 2016
Sun, Jul 24, 2016  1:35:42 PM
Mon, Jul 25, 2016  7:59:45 PM
Tue, Jul 26, 2016  2:34:25 PM
