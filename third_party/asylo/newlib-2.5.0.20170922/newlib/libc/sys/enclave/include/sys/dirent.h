#ifndef _SYS_DIRENT_H
#define _SYS_DIRENT_H

#include <sys/types.h>

typedef struct {
  int dd_fd;  /* directory file */
  int dd_loc; /* position in buffer */
  int dd_seek;
  char *dd_buf; /* buffer */
  int dd_len;   /* buffer length */
  int dd_size;  /* amount of data in buffer */
} DIR;

struct dirent {
  ino_t d_ino;    // file serial number
  off_t d_off;
  unsigned short d_reclen;
  char d_name[1];  // name of entry
};

int closedir(DIR *);

DIR *opendir(const char *);

struct dirent *readdir(DIR *);

int readdir_r(DIR *, struct dirent *, struct dirent **);

void rewinddir(DIR *);

void seekdir(DIR *, long int);

long int telldir(DIR *);

#endif  // _SYS_DIRENT_H
