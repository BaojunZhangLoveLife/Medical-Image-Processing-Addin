/* 
 * Here is where system computed values get stored.
 * These values should only change when the target compile platform changes.
 */

#define VTK_VMTK_BUILD_SHARED_LIBS
#ifndef VTK_VMTK_BUILD_SHARED_LIBS
#define VTK_VMTK_STATIC
#endif

#if defined(_MSC_VER) && !defined(VTK_VMTK_STATIC)
#pragma warning ( disable : 4275 )
#endif

#define VMTK_VERSION "1.5.0"
