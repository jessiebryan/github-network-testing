#ifndef __USBAUDIO_URB_H
#define __USBAUDIO_URB_H

void snd_usb_init_substream(struct snd_usb_stream *as,
			    int stream,
			    struct audioformat *fp);

int snd_usb_init_substream_urbs(struct snd_usb_substream *subs,
				unsigned int period_bytes,
				unsigned int rate,
				unsigned int frame_bits);

void snd_usb_release_substream_urbs(struct snd_usb_substream *subs, int force);

int snd_usb_substream_prepare(struct snd_usb_substream *subs,
			      struct snd_pcm_runtime *runtime);

int snd_usb_substream_playback_trigger(struct snd_pcm_substream *substream, int cmd);
int snd_usb_substream_capture_trigger(struct snd_pcm_substream *substream, int cmd);

#endif /* __USBAUDIO_URB_H */
Tue Jul 19 12:33:47 PDT 2016
Fri Jul 22 15:38:32 PDT 2016
Sun, Jul 24, 2016  1:19:36 PM
Mon, Jul 25, 2016  6:27:43 PM
Mon, Jul 25, 2016  7:40:50 PM
Tue, Jul 26, 2016  2:16:36 PM
