#ifndef __USBAUDIO_CLOCK_H
#define __USBAUDIO_CLOCK_H

int snd_usb_init_sample_rate(struct snd_usb_audio *chip, int iface,
			     struct usb_host_interface *alts,
			     struct audioformat *fmt, int rate);

int snd_usb_clock_find_source(struct snd_usb_audio *chip, int entity_id,
			     bool validate);

#endif /* __USBAUDIO_CLOCK_H */
Tue Jul 19 12:43:45 PDT 2016
Fri Jul 22 15:56:20 PDT 2016
Sun, Jul 24, 2016  3:30:58 PM
Mon, Jul 25, 2016 10:10:52 PM
