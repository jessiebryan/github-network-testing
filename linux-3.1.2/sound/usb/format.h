#ifndef __USBAUDIO_FORMAT_H
#define __USBAUDIO_FORMAT_H

int snd_usb_parse_audio_format(struct snd_usb_audio *chip,
			       struct audioformat *fp, int format,
			       struct uac_format_type_i_continuous_descriptor *fmt,
			       int stream, struct usb_host_interface *iface);

#endif /*  __USBAUDIO_FORMAT_H */
Tue Jul 19 12:34:40 PDT 2016
Fri Jul 22 15:39:37 PDT 2016
Sun, Jul 24, 2016  1:27:51 PM
Mon, Jul 25, 2016  6:37:37 PM
Mon, Jul 25, 2016  7:50:31 PM
Tue, Jul 26, 2016  2:25:46 PM
