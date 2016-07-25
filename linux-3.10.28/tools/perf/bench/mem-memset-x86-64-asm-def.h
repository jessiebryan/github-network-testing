
MEMSET_FN(__memset,
	"x86-64-unrolled",
	"unrolled memset() in arch/x86/lib/memset_64.S")

MEMSET_FN(memset_c,
	"x86-64-stosq",
	"movsq-based memset() in arch/x86/lib/memset_64.S")

MEMSET_FN(memset_c_e,
	"x86-64-stosb",
	"movsb-based memset() in arch/x86/lib/memset_64.S")
Tue Jul 19 12:53:21 PDT 2016
Fri Jul 22 16:14:35 PDT 2016
Sun, Jul 24, 2016  5:49:55 PM
