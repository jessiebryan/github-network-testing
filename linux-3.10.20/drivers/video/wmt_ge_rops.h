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
Tue Jul 19 12:47:59 PDT 2016
Fri Jul 22 16:04:18 PDT 2016
Sun, Jul 24, 2016  4:32:47 PM
Mon, Jul 25, 2016 11:19:34 PM
