typedef struct vmidi_devc {
	   int dev;

	/* State variables */
	   int opened;
	   spinlock_t lock;

	/* MIDI fields */
	   int my_mididev;
	   int pair_mididev;
	   int input_opened;
	   int intr_active;
	   void (*midi_input_intr) (int dev, unsigned char data);
	} vmidi_devc;
Tue Jul 19 12:52:02 PDT 2016
Fri Jul 22 16:12:02 PDT 2016
Sun, Jul 24, 2016  5:31:03 PM
Tue, Jul 26, 2016 12:24:05 AM
