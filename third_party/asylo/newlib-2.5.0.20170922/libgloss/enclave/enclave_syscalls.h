#ifndef THIRD_PARTY_LINUX_SGX_BSP_CALLTABLE_H_
#define THIRD_PARTY_LINUX_SGX_BSP_CALLTABLE_H_

#include <stdint.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/times.h>

#if defined(__cplusplus)
extern "C" {
#endif

void enclave_exit(int rc);
int enclave_close(int fildes);
int enclave_execve(char *name, char **argv, char **env);
int enclave_fcntl(int fd, int cmd, int64_t arg);
int enclave_fork();
int enclave_fstat(int fildes, struct stat *st);
int enclave_getpid();
int enclave_gettimeofday(struct timeval *ptimeval, void *ptimezone);
int enclave_isatty(int file);
int enclave_kill(int pid, int sig);
int enclave_link(char *existing, char *new_link);
int enclave_lseek(int file, int ptr, int dir);
int enclave_open(char *file, int flags, int mode);
int enclave_read(int file, char *ptr, int len);
void *enclave_sbrk(int incr);
int enclave_stat(const char *file, struct stat *st);
int enclave_times(struct tms *buf);
int enclave_unlink(char *name);
int enclave_wait(int *status);
int enclave_write(int file, char *ptr, int len);

#if defined(__cplusplus)
}
#endif

#endif // THIRD_PARTY_LINUX_SGX_BSP_CALLTABLE_H_
