
#ifndef _atari_stdma_h
#define _atari_stdma_h


#include <linux/interrupt.h>


/***************************** Prototypes *****************************/

void stdma_lock(irq_handler_t handler, void *data);
void stdma_release( void );
int stdma_others_waiting( void );
int stdma_islocked( void );
void *stdma_locked_by( void );
void stdma_init( void );

/************************* End of Prototypes **************************/



#endif  /* _atari_stdma_h */
Tue Jul 19 12:38:33 PDT 2016
Fri Jul 22 15:46:38 PDT 2016
Sun, Jul 24, 2016  2:19:10 PM
Mon, Jul 25, 2016  8:50:24 PM
