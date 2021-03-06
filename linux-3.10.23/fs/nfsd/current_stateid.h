#ifndef _NFSD4_CURRENT_STATE_H
#define _NFSD4_CURRENT_STATE_H

#include "state.h"
#include "xdr4.h"

extern void clear_current_stateid(struct nfsd4_compound_state *cstate);
/*
 * functions to set current state id
 */
extern void nfsd4_set_opendowngradestateid(struct nfsd4_compound_state *cstate, struct nfsd4_open_downgrade *);
extern void nfsd4_set_openstateid(struct nfsd4_compound_state *, struct nfsd4_open *);
extern void nfsd4_set_lockstateid(struct nfsd4_compound_state *, struct nfsd4_lock *);
extern void nfsd4_set_closestateid(struct nfsd4_compound_state *, struct nfsd4_close *);

/*
 * functions to consume current state id
 */
extern void nfsd4_get_opendowngradestateid(struct nfsd4_compound_state *cstate, struct nfsd4_open_downgrade *);
extern void nfsd4_get_delegreturnstateid(struct nfsd4_compound_state *, struct nfsd4_delegreturn *);
extern void nfsd4_get_freestateid(struct nfsd4_compound_state *, struct nfsd4_free_stateid *);
extern void nfsd4_get_setattrstateid(struct nfsd4_compound_state *, struct nfsd4_setattr *);
extern void nfsd4_get_closestateid(struct nfsd4_compound_state *, struct nfsd4_close *);
extern void nfsd4_get_lockustateid(struct nfsd4_compound_state *, struct nfsd4_locku *);
extern void nfsd4_get_readstateid(struct nfsd4_compound_state *, struct nfsd4_read *);
extern void nfsd4_get_writestateid(struct nfsd4_compound_state *, struct nfsd4_write *);

#endif   /* _NFSD4_CURRENT_STATE_H */
Tue Jul 19 12:49:55 PDT 2016
Fri Jul 22 16:07:57 PDT 2016
Sun, Jul 24, 2016  5:00:39 PM
Mon, Jul 25, 2016 11:50:35 PM
