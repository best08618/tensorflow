#ifndef _MACHINE__TYPES_H
#define _MACHINE__TYPES_H

#include <machine/_default_types.h>

// Define some integer type aliases for enclaves. Enclaves delegate some libc
// functionality to a separate libc implementation, so we define these types
// here to be wide enough to hold values we anticipate supporting.
// The definitions here override those in newlib/libc/include/sys/types.h.

#ifndef __machine_uid_t_defined
#define __machine_uid_t_defined
typedef __uint32_t __uid_t;
#endif  // __machine_uid_t_defined

#ifndef __machine_gid_t_defined
#define __machine_gid_t_defined
typedef __uint32_t __gid_t;
#endif  // __machine_gid_t_defined

#ifndef __machine_dev_t_defined
#define __machine_dev_t_defined
typedef __uint64_t __dev_t;
#endif  // __machine_dev_t_defined

#ifndef __machine_ino_t_defined
#define __machine_ino_t_defined
typedef __uint64_t __ino_t;
#endif  // __machine_ino_t_defined

#ifndef __machine_nlink_t_defined
#define __machine_nlink_t_defined
typedef __uint64_t __nlink_t;
#endif  // __machine_nlink_t_defined

#endif  // _MACHINE__TYPES_H

