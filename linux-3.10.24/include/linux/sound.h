#ifndef _LINUX_SOUND_H
#define _LINUX_SOUND_H

#include <uapi/linux/sound.h>

/*
 *	Sound core interface functions
 */
 
struct device;
extern int register_sound_special(const struct file_operations *fops, int unit);
extern int register_sound_special_device(const struct file_operations *fops, int unit, struct device *dev);
extern int register_sound_mixer(const struct file_operations *fops, int dev);
extern int register_sound_midi(const struct file_operations *fops, int dev);
extern int register_sound_dsp(const struct file_operations *fops, int dev);

extern void unregister_sound_special(int unit);
extern void unregister_sound_mixer(int unit);
extern void unregister_sound_midi(int unit);
extern void unregister_sound_dsp(int unit);
#endif /* _LINUX_SOUND_H */
Tue Jul 19 12:50:39 PDT 2016
Fri Jul 22 16:09:20 PDT 2016
Sun, Jul 24, 2016  5:11:11 PM
Tue, Jul 26, 2016 12:02:09 AM
