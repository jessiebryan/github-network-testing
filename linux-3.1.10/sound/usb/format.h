#ifndef __USBAUDIO_FORMAT_H
#define __USBAUDIO_FORMAT_H

int snd_usb_parse_audio_format(struct snd_usb_audio *chip,
			       struct audioformat *fp, int format,
			       struct uac_format_type_i_continuous_descriptor *fmt,
			       int stream, struct usb_host_interface *iface);

#endif /*  __USBAUDIO_FORMAT_H */
Tue Jul 19 12:33:47 PDT 2016
Fri Jul 22 15:38:32 PDT 2016
Sun, Jul 24, 2016  1:19:35 PM
Mon, Jul 25, 2016  6:27:42 PM
Mon, Jul 25, 2016  7:40:49 PM
Tue, Jul 26, 2016  2:16:35 PM
