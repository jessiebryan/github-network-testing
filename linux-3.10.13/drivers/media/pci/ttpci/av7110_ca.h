#ifndef _AV7110_CA_H_
#define _AV7110_CA_H_

struct av7110;

extern void CI_handle(struct av7110 *av7110, u8 *data, u16 len);
extern void ci_get_data(struct dvb_ringbuffer *cibuf, u8 *data, int len);

extern int av7110_ca_register(struct av7110 *av7110);
extern void av7110_ca_unregister(struct av7110 *av7110);
extern int av7110_ca_init(struct av7110* av7110);
extern void av7110_ca_exit(struct av7110* av7110);

#endif /* _AV7110_CA_H_ */
Tue Jul 19 12:43:26 PDT 2016
Fri Jul 22 15:55:46 PDT 2016
Sun, Jul 24, 2016  3:26:31 PM
Mon, Jul 25, 2016 10:05:54 PM
