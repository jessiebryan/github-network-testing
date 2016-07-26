#ifdef CONFIG_FB_WMT_GE_ROPS

extern void wmt_ge_fillrect(struct fb_info *info,
			    const struct fb_fillrect *rect);
extern void wmt_ge_copyarea(struct fb_info *info,
			    const struct fb_copyarea *area);
extern int wmt_ge_sync(struct fb_info *info);

#else

static inline int wmt_ge_sync(struct fb_info *p)
{
	return 0;
}

static inline void wmt_ge_fillrect(struct fb_info *p,
				    const struct fb_fillrect *rect)
{
	sys_fillrect(p, rect);
}

static inline void wmt_ge_copyarea(struct fb_info *p,
				     const struct fb_copyarea *area)
{
	sys_copyarea(p, area);
}

#endif
Tue Jul 19 12:53:48 PDT 2016
Fri Jul 22 16:15:28 PDT 2016
Sun, Jul 24, 2016  5:56:24 PM
Tue, Jul 26, 2016 12:52:03 AM
