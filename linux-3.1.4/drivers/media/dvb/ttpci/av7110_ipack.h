#ifndef _AV7110_IPACK_H_
#define _AV7110_IPACK_H_

extern int av7110_ipack_init(struct ipack *p, int size,
			     void (*func)(u8 *buf,  int size, void *priv));

extern void av7110_ipack_reset(struct ipack *p);
extern int  av7110_ipack_instant_repack(const u8 *buf, int count, struct ipack *p);
extern void av7110_ipack_free(struct ipack * p);
extern void av7110_ipack_flush(struct ipack *p);

#endif
Tue Jul 19 12:35:47 PDT 2016
Fri Jul 22 15:41:23 PDT 2016
Sun, Jul 24, 2016  1:40:34 PM
Mon, Jul 25, 2016  8:05:31 PM
Tue, Jul 26, 2016  2:39:51 PM
