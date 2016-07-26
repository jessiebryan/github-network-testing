
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
Tue Jul 19 12:47:40 PDT 2016
Fri Jul 22 16:03:43 PDT 2016
Sun, Jul 24, 2016  4:28:12 PM
Mon, Jul 25, 2016 11:14:28 PM
