#ifndef SND_USB_MIXER_QUIRKS_H
#define SND_USB_MIXER_QUIRKS_H

int snd_usb_mixer_apply_create_quirk(struct usb_mixer_interface *mixer);

void snd_emuusb_set_samplerate(struct snd_usb_audio *chip,
			       unsigned char samplerate_id);

void snd_usb_mixer_rc_memory_change(struct usb_mixer_interface *mixer,
				    int unitid);

#endif /* SND_USB_MIXER_QUIRKS_H */

Tue Jul 19 12:48:48 PDT 2016
Fri Jul 22 16:05:52 PDT 2016
Sun, Jul 24, 2016  4:44:48 PM
Mon, Jul 25, 2016 11:32:54 PM
