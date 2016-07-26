#ifndef _AV7110_IPACK_H_
#define _AV7110_IPACK_H_

extern int av7110_ipack_init(struct ipack *p, int size,
			     void (*func)(u8 *buf,  int size, void *priv));

extern void av7110_ipack_reset(struct ipack *p);
extern int  av7110_ipack_instant_repack(const u8 *buf, int count, struct ipack *p);
extern void av7110_ipack_free(struct ipack * p);
extern void av7110_ipack_flush(struct ipack *p);

#endif
Tue Jul 19 12:42:48 PDT 2016
Fri Jul 22 15:54:36 PDT 2016
Sun, Jul 24, 2016  3:17:17 PM
Mon, Jul 25, 2016  9:55:41 PM
