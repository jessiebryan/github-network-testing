/*************************************
* 	Queue.h
**************************************/
#ifndef	__QUEUE_H__
#define	__QUEUE_H__



#define ENQUEUEPACKET(_Head, _Tail,_Packet)	\
do						\
{                                               \
    if (!_Head) {                           \
        	_Head = _Packet;                \
        } 					\
	else {                                  \
        	(_Tail)->next = _Packet; 	\
        }                                       \
   	(_Packet)->next = NULL;  		\
    _Tail = _Packet;                        \
}while(0)
#define DEQUEUEPACKET(Head, Tail )            	\
do						\
{   if(Head)			\
	{                                            \
        if (!Head->next) {                      \
        	Tail = NULL;                    \
        }                                       \
        Head = Head->next;                      \
	}		\
}while(0)
#endif	//__QUEUE_H__
Tue Jul 19 12:40:06 PDT 2016
Fri Jul 22 15:49:45 PDT 2016
Sun, Jul 24, 2016  2:41:30 PM
Mon, Jul 25, 2016  9:15:15 PM
