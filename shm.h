
extern int shmfd;
extern long shmid;
extern char *shmptr;
extern unsigned long long shmlen;
extern mode_t shmmode;
extern unsigned long long shmoffset;
extern int shmflags;

extern void dump_shm(void);
extern void attach_shared(char *);
extern void attach_sysvshm(char *);
extern void verify_shm(int policy, struct bitmask *);

/* in numactl.c */
extern int exitcode;
