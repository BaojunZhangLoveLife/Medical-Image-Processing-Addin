/*=========================================================================
 *
 *  Copyright NumFOCUS
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         https://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/
#ifndef itkConfigure_h
#define itkConfigure_h

/*
 * here is where system computed values get stored these values should only
 * change when the target compile platform changes
 */

/* what byte order */
/* All compilers that support Mac OS X define either __BIG_ENDIAN__ or
   __LITTLE_ENDIAN__ to match the endianness of the architecture being
   compiled for. This is not necessarily the same as the architecture of
   the machine doing the building. In order to support Universal Binaries on
   Mac OS X, we prefer those defines to decide the endianness.
   Elsewhere use the platform check result.  */
#if !defined(__APPLE__)
/* #undef CMAKE_WORDS_BIGENDIAN */
  #ifdef CMAKE_WORDS_BIGENDIAN
    #define ITK_WORDS_BIGENDIAN
  #endif
#elif defined(__BIG_ENDIAN__)
  #define CMAKE_WORDS_BIGENDIAN
  #define ITK_WORDS_BIGENDIAN
#endif

#define ITK_SIZEOF_VOID_P 8

/* The CXX standard version used when ITK was built */
#define ITK_COMPILED_CXX_STANDARD_VERSION 1

/* Test external applications to ensure that compatible compiler C++ standard API are used
 * by assuming that compiler standards are backwards (but not forwards) compatible with each
 * other. Strange behaviors may occur if external applications do not use the same compiler
 * and compiler language features (i.e. compiler flags).
 * The warning is disabled for NVCC (NVidia CUDA) for use of ITK macros with CUDA versions
 * prior to v7. */
#if !defined(__CUDACC__)
  #if ITK_COMPILED_CXX_STANDARD_VERSION > __cplusplus
    #warning "WARNING:  The current project is configured to use a C++ standard version older than the C++ standard used for this build of ITK"
  #endif
#endif

/* what threading system are we using */
/* #undef ITK_USE_PTHREADS */
/* #undef ITK_HP_PTHREADS */
#define ITK_USE_WIN32_THREADS

/* #undef ITK_WINDOWS_EXPORT_ALL_SYMBOLS */
/* #undef ITK_BUILD_SHARED_LIBS */
#ifdef ITK_BUILD_SHARED_LIBS
#define ITKDLL
#else
#define ITKSTATIC
#endif
#define ITK_DYNAMIC_LOADING

/* #undef ITKV4_COMPATIBILITY */
/* #undef ITK_LEGACY_REMOVE */
/* #undef ITK_LEGACY_SILENT */
/* #undef ITK_FUTURE_LEGACY_REMOVE */
#define ITK_USE_CONCEPT_CHECKING
/* #undef ITK_USE_FFTWF */
/* #undef ITK_USE_FFTWD */
/* #undef ITK_USE_CUFFTW */
#define ITK_USE_64BITS_IDS
/* #undef ITK_USE_GPU */
/* #undef ITK_TEMPLATE_VISIBILITY_DEFAULT */
/* #undef USE_COMPILER_HIDDEN_VISIBILITY */
/* #undef ITK_USE_TBB */
#define ITK_DEFAULT_MAX_THREADS 128

// Provide conditional compilation support when building wrapped languages
/* #undef ITK_WRAPPING */

// C++11 should be assumed now, defines always true for C++11 will be
// removed in the future.
#ifndef ITK_LEGACY_REMOVE
// defined if std type traits are with C++11
# define ITK_HAS_CPP11_TYPETRAITS
#endif

// defined if the compiler support GNU's __attribute__(( aligned(x) )) extension
/* #undef ITK_HAS_GNU_ATTRIBUTE_ALIGNED */

// defined if the C library as the mallinfo struct
/* #undef ITK_HAS_MALLINFO */
// defined if the C library as the mallinfo2 struct
/* #undef ITK_HAS_MALLINFO2 */
// defined if feenableexcept is available
/* #undef ITK_HAS_FEENABLEEXCEPT */

// defined if the spacing/origin/direction parameters in
// itk::ImageBase are float instead of double
/* #undef ITK_USE_FLOAT_SPACE_PRECISION */

/*
 * Every exception may define a string with the function name for each
 * instantiated template. This can add a substantial number of symbols
 * to the symbol table in a library. This feature is only enabled in
 * debug mode, and can be turned on by adding the definition to the
 * command line.
 */
#ifndef NDEBUG
  #define ITK_CPP_FUNCTION
#endif

// defines if compiler and standard C++ run-time library supports
// dynamic_cast-ing of a private (hidden) Run-Time-Type-Information
// (RTTI). See Modules/Code/Common/CMake/itkCheckPrivateDynamicCast.cmake
#define ITK_PRIVATE_DYNAMIC_CAST

/*
 * The  gets replaced with "1" or "", this define is
 * to remap these values to 0 and 1
 */
#define ITK_CMAKEDEFINE_VAR_1 1
#define ITK_CMAKEDEFINE_VAR_ 0

/*
 * Check Include files defines. We use the CMake standard names in the
 * cmake files to reduce extra calls for checking header, but then
 * conditionally defined them here with an ITK_ prefix to prevent
 * collisions and re defined warnings.
 */
#if ITK_CMAKEDEFINE_VAR_1
# define ITK_HAVE_FENV_H
#endif /* HAVE_FENV_H */
#if ITK_CMAKEDEFINE_VAR_
# define ITK_HAVE_UNISTD_H
#endif /* HAVE_UNISTD_H */


#undef ITK_CMAKEDEFINE_VAR_1
#undef ITK_CMAKEDEFINE_VAR_


#define ITK_VERSION_MAJOR 5
#define ITK_VERSION_MINOR 3
#define ITK_VERSION_PATCH 0
#define ITK_VERSION_STRING "5.3"

#if defined(ITK_USE_PTHREADS) || defined(ITK_USE_WIN32_THREADS)
#define ITK_USE_POOL_MULTI_THREADER 1
#endif


#define ITK_DEFAULT_THREADER Auto
// A single define concatenated with the CMake value at configuration time.
#define ITK_DEFAULT_THREADER_Auto

#ifdef ITK_DEFAULT_THREADER_Auto
#  undef ITK_DEFAULT_THREADER
#  if defined(ITK_USE_TBB)
#    define ITK_DEFAULT_THREADER TBB
#  elif defined(ITK_USE_POOL_MULTI_THREADER)
#    define ITK_DEFAULT_THREADER Pool
#  else
#    define ITK_DEFAULT_THREADER Platform
#  endif
#endif

#define ITK_DEFAULT_THREADER_Auto

// Most compilers define __SSEn__ macros, but not MSVC.
// For 32 bit Intel with MSVC, check _M_IX86_FP.
// 64 bit Intel x86 always supports both 32 and 64 bit SSE2.

#if defined(__SSE2__) || defined(__x86_64__) || defined(_M_X64) || defined(__amd64)
#  define ITK_COMPILER_SUPPORTS_SSE2_64
#endif

#if defined(ITK_COMPILER_SUPPORTS_SSE2_64) || \
    (defined(_M_IX86_FP) && (_M_IX86_FP >= 2))
#  define ITK_COMPILER_SUPPORTS_SSE2_32
#endif

#endif //itkConfigure_h
