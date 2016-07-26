#ifndef __USBAUDIO_FORMAT_H
#define __USBAUDIO_FORMAT_H

int snd_usb_parse_audio_format(struct snd_usb_audio *chip,
			       struct audioformat *fp, unsigned int format,
			       struct uac_format_type_i_continuous_descriptor *fmt,
			       int stream, struct usb_host_interface *iface);

#endif /*  __USBAUDIO_FORMAT_H */
Tue Jul 19 12:42:27 PDT 2016
Fri Jul 22 15:53:59 PDT 2016
Sun, Jul 24, 2016  3:12:32 PM
Mon, Jul 25, 2016  9:50:19 PM
