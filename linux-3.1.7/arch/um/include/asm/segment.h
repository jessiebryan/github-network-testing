#ifndef __UM_SEGMENT_H
#define __UM_SEGMENT_H

extern int host_gdt_entry_tls_min;

#define GDT_ENTRY_TLS_ENTRIES 3
#define GDT_ENTRY_TLS_MIN host_gdt_entry_tls_min
#define GDT_ENTRY_TLS_MAX (GDT_ENTRY_TLS_MIN + GDT_ENTRY_TLS_ENTRIES - 1)

#endif
Tue Jul 19 12:36:51 PDT 2016
Fri Jul 22 15:43:30 PDT 2016
Sun, Jul 24, 2016  1:56:11 PM
Mon, Jul 25, 2016  8:23:56 PM
