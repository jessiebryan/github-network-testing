#ifndef __CPUPOWER_BITMASK__
#define __CPUPOWER_BITMASK__

/* Taken over from libbitmask, a project initiated from sgi:
 * Url:            http://oss.sgi.com/projects/cpusets/
 * Unfortunately it's not very widespread, therefore relevant parts are
 * pasted here.
 */

struct bitmask {
	unsigned int size;
	unsigned long *maskp;
};

struct bitmask *bitmask_alloc(unsigned int n);
void bitmask_free(struct bitmask *bmp);

struct bitmask *bitmask_setbit(struct bitmask *bmp, unsigned int i);
struct bitmask *bitmask_setall(struct bitmask *bmp);
struct bitmask *bitmask_clearall(struct bitmask *bmp);

unsigned int bitmask_first(const struct bitmask *bmp);
unsigned int bitmask_next(const struct bitmask *bmp, unsigned int i);
unsigned int bitmask_last(const struct bitmask *bmp);
int bitmask_isallclear(const struct bitmask *bmp);
int bitmask_isbitset(const struct bitmask *bmp, unsigned int i);

int bitmask_parselist(const char *buf, struct bitmask *bmp);
int bitmask_displaylist(char *buf, int len, const struct bitmask *bmp);



#endif /*__CPUPOWER_BITMASK__ */
Tue Jul 19 12:51:25 PDT 2016
Fri Jul 22 16:10:47 PDT 2016
Sun, Jul 24, 2016  5:22:02 PM
Tue, Jul 26, 2016 12:14:07 AM
