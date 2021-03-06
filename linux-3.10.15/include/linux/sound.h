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
Tue Jul 19 12:44:57 PDT 2016
Fri Jul 22 15:58:32 PDT 2016
Sun, Jul 24, 2016  3:48:00 PM
Mon, Jul 25, 2016 10:29:47 PM
