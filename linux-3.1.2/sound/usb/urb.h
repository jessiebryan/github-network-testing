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
Tue Jul 19 12:34:40 PDT 2016
Fri Jul 22 15:39:37 PDT 2016
Sun, Jul 24, 2016  1:27:52 PM
Mon, Jul 25, 2016  6:37:37 PM
Mon, Jul 25, 2016  7:50:31 PM
Tue, Jul 26, 2016  2:25:46 PM
