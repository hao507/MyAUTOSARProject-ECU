/*
 * The purpose of this file is to make the implementation of memcpy & memset customizable to accommodate any project's needs.
 * Any changes made to this file will persist.
 * To return to the default implementation delete this file and regenerate the RTE.
 */
#ifndef RTE_UTILS_H_
#define RTE_UTILS_H_

#if defined(__GNUC__)

#ifndef MEMCPY
#define MEMCPY(_x,_y,_z)  (void) __builtin_memcpy(_x,_y,_z)
#endif /* MEMCPY */

#ifndef MEMSET
#define MEMSET(_x,_y,_z)	  __builtin_memset(_x,_y,_z)
#endif /* MEMSET */

#else
#include <string.h>

#ifndef MEMCPY
#define MEMCPY(_x,_y,_z)   (void) memcpy(_x,_y,_z)
#endif /* MEMCPY */

#ifndef MEMSET
#define MEMSET(_x,_y,_z)    memset(_x,_y,_z)
#endif /* MEMSET */

#endif /* __GNUC__ */

#endif /* RTE_UTILS_H_ */

