#ifndef __USBAUDIO_PCM_H
#define __USBAUDIO_PCM_H

void snd_usb_set_pcm_ops(struct snd_pcm *pcm, int stream);

int snd_usb_init_pitch(struct snd_usb_audio *chip, int iface,
		       struct usb_host_interface *alts,
		       struct audioformat *fmt);


#endif /* __USBAUDIO_PCM_H */
Tue Jul 19 12:33:47 PDT 2016
Fri Jul 22 15:38:32 PDT 2016
Sun, Jul 24, 2016  1:19:36 PM
Mon, Jul 25, 2016  6:27:43 PM
Mon, Jul 25, 2016  7:40:50 PM
