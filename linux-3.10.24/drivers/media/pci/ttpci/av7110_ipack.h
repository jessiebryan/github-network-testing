#ifndef _AV7110_IPACK_H_
#define _AV7110_IPACK_H_

extern int av7110_ipack_init(struct ipack *p, int size,
			     void (*func)(u8 *buf,  int size, void *priv));

extern void av7110_ipack_reset(struct ipack *p);
extern int  av7110_ipack_instant_repack(const u8 *buf, int count, struct ipack *p);
extern void av7110_ipack_free(struct ipack * p);
extern void av7110_ipack_flush(struct ipack *p);

#endif
Tue Jul 19 12:50:26 PDT 2016
Fri Jul 22 16:08:56 PDT 2016
Sun, Jul 24, 2016  5:08:08 PM
Mon, Jul 25, 2016 11:58:48 PM
