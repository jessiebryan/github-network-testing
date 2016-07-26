#ifndef __XFS_MESSAGE_H
#define __XFS_MESSAGE_H 1

struct xfs_mount;

extern void xfs_emerg(const struct xfs_mount *mp, const char *fmt, ...)
        __attribute__ ((format (printf, 2, 3)));
extern void xfs_alert(const struct xfs_mount *mp, const char *fmt, ...)
        __attribute__ ((format (printf, 2, 3)));
extern void xfs_alert_tag(const struct xfs_mount *mp, int tag,
			 const char *fmt, ...)
        __attribute__ ((format (printf, 3, 4)));
extern void xfs_crit(const struct xfs_mount *mp, const char *fmt, ...)
        __attribute__ ((format (printf, 2, 3)));
extern void xfs_err(const struct xfs_mount *mp, const char *fmt, ...)
        __attribute__ ((format (printf, 2, 3)));
extern void xfs_warn(const struct xfs_mount *mp, const char *fmt, ...)
        __attribute__ ((format (printf, 2, 3)));
extern void xfs_notice(const struct xfs_mount *mp, const char *fmt, ...)
        __attribute__ ((format (printf, 2, 3)));
extern void xfs_info(const struct xfs_mount *mp, const char *fmt, ...)
        __attribute__ ((format (printf, 2, 3)));

#ifdef DEBUG
extern void xfs_debug(const struct xfs_mount *mp, const char *fmt, ...)
        __attribute__ ((format (printf, 2, 3)));
#else
static inline void
__attribute__ ((format (printf, 2, 3)))
xfs_debug(const struct xfs_mount *mp, const char *fmt, ...)
{
}
#endif

extern void assfail(char *expr, char *f, int l);

extern void xfs_hex_dump(void *p, int length);

#endif	/* __XFS_MESSAGE_H */
Tue Jul 19 12:35:55 PDT 2016
Fri Jul 22 15:41:38 PDT 2016
Sun, Jul 24, 2016  1:42:26 PM
Mon, Jul 25, 2016  8:07:42 PM
