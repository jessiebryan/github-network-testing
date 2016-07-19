/* Bit used for the pseudo-hwcap for non-negative segments.  We use
   bit 1 to avoid bugs in some versions of glibc when bit 0 is
   used; the choice is otherwise arbitrary. */
#define VDSO_NOTE_NONEGSEG_BIT	1
Tue Jul 19 12:45:54 PDT 2016
