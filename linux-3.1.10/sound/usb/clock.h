#ifndef __USBAUDIO_CLOCK_H
#define __USBAUDIO_CLOCK_H

int snd_usb_init_sample_rate(struct snd_usb_audio *chip, int iface,
			     struct usb_host_interface *alts,
			     struct audioformat *fmt, int rate);

int snd_usb_clock_find_source(struct snd_usb_audio *chip, int entity_id);

#endif /* __USBAUDIO_CLOCK_H */
Tue Jul 19 12:33:47 PDT 2016
Fri Jul 22 15:38:32 PDT 2016
Sun, Jul 24, 2016  1:19:35 PM
Mon, Jul 25, 2016  6:27:42 PM
Mon, Jul 25, 2016  7:40:49 PM
Tue, Jul 26, 2016  2:16:35 PM
