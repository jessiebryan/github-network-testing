
/*	From pas_card.c	*/
int pas_set_intr(int mask);
int pas_remove_intr(int mask);
unsigned char pas_read(int ioaddr);
void pas_write(unsigned char data, int ioaddr);

/*	From pas_audio.c */
void pas_pcm_interrupt(unsigned char status, int cause);
void pas_pcm_init(struct address_info *hw_config);

/*	From pas_mixer.c */
int pas_init_mixer(void);

/*	From pas_midi.c */
void pas_midi_init(void);
void pas_midi_interrupt(void);
Tue Jul 19 12:53:59 PDT 2016
Fri Jul 22 16:15:49 PDT 2016
Sun, Jul 24, 2016  5:59:00 PM
Tue, Jul 26, 2016 12:54:55 AM
