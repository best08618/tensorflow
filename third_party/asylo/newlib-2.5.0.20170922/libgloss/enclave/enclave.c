#include <grp.h>
#include <stdint.h>
#include <sys/time.h>
#include <sys/times.h>
#include "enclave_syscalls.h"

void _exit(int rc)
{
  enclave_exit(rc);
}

int _close(int fildes)
{
  return enclave_close(fildes);
}

int _execve(char *name, char **argv, char **env)
{
  return enclave_execve(name, argv, env);
}

int _fcntl(int fd, int cmd, int64_t arg)
{
  return enclave_fcntl(fd, cmd, arg);
}

int _fork()
{
  return enclave_fork();
}

int _fstat(int fildes, struct stat *st)
{
  return enclave_fstat(fildes, st);
}

int _getpid()
{
  return enclave_getpid();
}

int _gettimeofday(struct timeval *ptimeval, void *ptimezone)
{
  return enclave_gettimeofday(ptimeval, ptimezone);
}

int _kill(int pid, int sig)
{
  return enclave_kill(pid, sig);
}

int _link(char *existing, char *new_link)
{
  return enclave_link(existing, new_link);
}

int _lseek(int file, int ptr, int dir)
{
  return enclave_lseek(file, ptr, dir);
}

int _open(char *file, int flags, int mode)
{
  return enclave_open(file, flags, mode);
}

int _read(int file, char *ptr, int len)
{
  return enclave_read(file, ptr, len);
}

void* _sbrk(int incr)
{
  return enclave_sbrk(incr);
}

int _stat(const char  *file, struct stat *st)
{
  return enclave_stat(file, st);
}

int _times(struct tms *buf)
{
  return enclave_times(buf);
}

int _unlink(char* name)
{
  return enclave_unlink(name);
}

int _wait(int *status)
{
  return enclave_wait(status);
}

int _write(int file, char *ptr, int len)
{
  return enclave_write(file, ptr, len);
}
