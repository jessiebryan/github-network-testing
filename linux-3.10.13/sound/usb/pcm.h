#ifndef __USBAUDIO_PCM_H
#define __USBAUDIO_PCM_H

snd_pcm_uframes_t snd_usb_pcm_delay(struct snd_usb_substream *subs,
				    unsigned int rate);

void snd_usb_set_pcm_ops(struct snd_pcm *pcm, int stream);

int snd_usb_init_pitch(struct snd_usb_audio *chip, int iface,
		       struct usb_host_interface *alts,
		       struct audioformat *fmt);


#endif /* __USBAUDIO_PCM_H */
Tue Jul 19 12:43:45 PDT 2016
Fri Jul 22 15:56:20 PDT 2016
Sun, Jul 24, 2016  3:30:58 PM
Mon, Jul 25, 2016 10:10:52 PM
