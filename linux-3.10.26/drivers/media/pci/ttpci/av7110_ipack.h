#ifndef _AV7110_IPACK_H_
#define _AV7110_IPACK_H_

extern int av7110_ipack_init(struct ipack *p, int size,
			     void (*func)(u8 *buf,  int size, void *priv));

extern void av7110_ipack_reset(struct ipack *p);
extern int  av7110_ipack_instant_repack(const u8 *buf, int count, struct ipack *p);
extern void av7110_ipack_free(struct ipack * p);
extern void av7110_ipack_flush(struct ipack *p);

#endif
Tue Jul 19 12:51:45 PDT 2016
Fri Jul 22 16:11:26 PDT 2016
Sun, Jul 24, 2016  5:26:45 PM
Tue, Jul 26, 2016 12:19:20 AM
