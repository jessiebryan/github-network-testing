#ifndef _AV7110_AV_H_
#define _AV7110_AV_H_

struct av7110;

extern int av7110_set_vidmode(struct av7110 *av7110,
			      enum av7110_video_mode mode);

extern int av7110_record_cb(struct dvb_filter_pes2ts *p2t, u8 *buf, size_t len);
extern int av7110_pes_play(void *dest, struct dvb_ringbuffer *buf, int dlen);
extern int av7110_write_to_decoder(struct dvb_demux_feed *feed, const u8 *buf, size_t len);

extern int av7110_set_volume(struct av7110 *av7110, int volleft, int volright);
extern int av7110_av_stop(struct av7110 *av7110, int av);
extern int av7110_av_start_record(struct av7110 *av7110, int av,
			  struct dvb_demux_feed *dvbdmxfeed);
extern int av7110_av_start_play(struct av7110 *av7110, int av);

extern void dvb_video_add_event(struct av7110 *av7110, struct video_event *event);

extern void av7110_p2t_init(struct av7110_p2t *p, struct dvb_demux_feed *feed);
extern void av7110_p2t_write(u8 const *buf, long int length, u16 pid, struct av7110_p2t *p);

extern int av7110_av_register(struct av7110 *av7110);
extern void av7110_av_unregister(struct av7110 *av7110);
extern int av7110_av_init(struct av7110 *av7110);
extern void av7110_av_exit(struct av7110 *av7110);


#endif /* _AV7110_AV_H_ */
Tue Jul 19 12:53:02 PDT 2016
Fri Jul 22 16:13:59 PDT 2016
Sun, Jul 24, 2016  5:45:23 PM
Tue, Jul 26, 2016 12:39:53 AM
