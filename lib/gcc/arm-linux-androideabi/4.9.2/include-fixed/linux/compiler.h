/*  DO NOT EDIT THIS FILE.

    It has been auto-edited by fixincludes from:

	"/tmp/ndk-hieu/build/toolchain/prefix/sysroot/usr/include/linux/compiler.h"

    This had to be done to correct non-standard usages in the
    original, manufacturer supplied header file.  */

/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __LINUX_COMPILER_H
#define __LINUX_COMPILER_H

#ifndef __ASSEMBLY__

#define __user
#define __kernel
#define __safe
#define __force
#define __nocast
#define __iomem
#define __chk_user_ptr(x) (void)0
#define __chk_io_ptr(x) (void)0
/* __builtin_warning(x, y...) is obsolete */
#define __acquires(x)
#define __releases(x)
#define __acquire(x) (void)0
#define __release(x) (void)0
#define __cond_lock(x) (x)

#endif

#ifndef __attribute_const__
#define __attribute_const__  
#endif

#endif
