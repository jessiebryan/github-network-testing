#ifndef __USBAUDIO_QUIRKS_H
#define __USBAUDIO_QUIRKS_H

int snd_usb_create_quirk(struct snd_usb_audio *chip,
			 struct usb_interface *iface,
			 struct usb_driver *driver,
			 const struct snd_usb_audio_quirk *quirk);

int snd_usb_apply_interface_quirk(struct snd_usb_audio *chip,
				  int iface,
				  int altno);

int snd_usb_apply_boot_quirk(struct usb_device *dev,
			     struct usb_interface *intf,
			     const struct snd_usb_audio_quirk *quirk);

void snd_usb_set_format_quirk(struct snd_usb_substream *subs,
			      struct audioformat *fmt);

int snd_usb_is_big_endian_format(struct snd_usb_audio *chip,
				 struct audioformat *fp);

#endif /* __USBAUDIO_QUIRKS_H */
Tue Jul 19 12:36:02 PDT 2016
Fri Jul 22 15:41:53 PDT 2016
Sun, Jul 24, 2016  1:44:22 PM
Mon, Jul 25, 2016  8:09:59 PM
Tue, Jul 26, 2016  2:44:00 PM
