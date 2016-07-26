/*
 * apple_bl exported symbols
 */

#ifndef _LINUX_APPLE_BL_H
#define _LINUX_APPLE_BL_H

#if defined(CONFIG_BACKLIGHT_APPLE) || defined(CONFIG_BACKLIGHT_APPLE_MODULE)

extern int apple_bl_register(void);
extern void apple_bl_unregister(void);

#else /* !CONFIG_BACKLIGHT_APPLE */

static inline int apple_bl_register(void)
{
	return 0;
}

static inline void apple_bl_unregister(void)
{
}

#endif /* !CONFIG_BACKLIGHT_APPLE */

#endif /* _LINUX_APPLE_BL_H */
Tue Jul 19 12:45:29 PDT 2016
Fri Jul 22 15:59:36 PDT 2016
Sun, Jul 24, 2016  3:56:21 PM
Mon, Jul 25, 2016 10:39:04 PM
