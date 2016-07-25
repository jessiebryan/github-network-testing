#ifndef __USBAUDIO_CLOCK_H
#define __USBAUDIO_CLOCK_H

int snd_usb_init_sample_rate(struct snd_usb_audio *chip, int iface,
			     struct usb_host_interface *alts,
			     struct audioformat *fmt, int rate);

int snd_usb_clock_find_source(struct snd_usb_audio *chip, int entity_id);

#endif /* __USBAUDIO_CLOCK_H */
Tue Jul 19 12:36:02 PDT 2016
Fri Jul 22 15:41:53 PDT 2016
Sun, Jul 24, 2016  1:44:21 PM
