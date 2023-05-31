/* zlib_name_mangling.h has been automatically generated from
 * zlib_name_mangling.h.in because ZLIB_SYMBOL_PREFIX was set.
 */

#ifndef ZLIB_NAME_MANGLING_H
#define ZLIB_NAME_MANGLING_H

/* all linked symbols and init macros */
#define _dist_code            itkzlib__dist_code
#define _length_code          itkzlib__length_code
#define _tr_align             itkzlib__tr_align
#define _tr_flush_bits        itkzlib__tr_flush_bits
#define _tr_flush_block       itkzlib__tr_flush_block
#define _tr_init              itkzlib__tr_init
#define _tr_stored_block      itkzlib__tr_stored_block
#define _tr_tally             itkzlib__tr_tally
#define adler32               itkzlib_adler32
#define adler32_combine       itkzlib_adler32_combine
#define adler32_combine64     itkzlib_adler32_combine64
#define adler32_z             itkzlib_adler32_z
#ifndef Z_SOLO
#  define compress              itkzlib_compress
#  define compress2             itkzlib_compress2
#  define compressBound         itkzlib_compressBound
#endif
#define crc32                 itkzlib_crc32
#define crc32_combine         itkzlib_crc32_combine
#define crc32_combine64       itkzlib_crc32_combine64
#define crc32_combine_gen     itkzlib_crc32_combine_gen
#define crc32_combine_gen64   itkzlib_crc32_combine_gen64
#define crc32_combine_op      itkzlib_crc32_combine_op
#define crc32_z               itkzlib_crc32_z
#define deflate               itkzlib_deflate
#define deflateBound          itkzlib_deflateBound
#define deflateCopy           itkzlib_deflateCopy
#define deflateEnd            itkzlib_deflateEnd
#define deflateGetDictionary  itkzlib_deflateGetDictionary
#define deflateInit           itkzlib_deflateInit
#define deflateInit2          itkzlib_deflateInit2
#define deflateInit2_         itkzlib_deflateInit2_
#define deflateInit_          itkzlib_deflateInit_
#define deflateParams         itkzlib_deflateParams
#define deflatePending        itkzlib_deflatePending
#define deflatePrime          itkzlib_deflatePrime
#define deflateReset          itkzlib_deflateReset
#define deflateResetKeep      itkzlib_deflateResetKeep
#define deflateSetDictionary  itkzlib_deflateSetDictionary
#define deflateSetHeader      itkzlib_deflateSetHeader
#define deflateTune           itkzlib_deflateTune
#define deflate_copyright     itkzlib_deflate_copyright
#define get_crc_table         itkzlib_get_crc_table
#ifndef Z_SOLO
#  define gz_error              itkzlib_gz_error
#  define gz_strwinerror        itkzlib_gz_strwinerror
#  define gzbuffer              itkzlib_gzbuffer
#  define gzclearerr            itkzlib_gzclearerr
#  define gzclose               itkzlib_gzclose
#  define gzclose_r             itkzlib_gzclose_r
#  define gzclose_w             itkzlib_gzclose_w
#  define gzdirect              itkzlib_gzdirect
#  define gzdopen               itkzlib_gzdopen
#  define gzeof                 itkzlib_gzeof
#  define gzerror               itkzlib_gzerror
#  define gzflush               itkzlib_gzflush
#  define gzfread               itkzlib_gzfread
#  define gzfwrite              itkzlib_gzfwrite
#  define gzgetc                itkzlib_gzgetc
#  define gzgetc_               itkzlib_gzgetc_
#  define gzgets                itkzlib_gzgets
#  define gzoffset              itkzlib_gzoffset
#  define gzoffset64            itkzlib_gzoffset64
#  define gzopen                itkzlib_gzopen
#  define gzopen64              itkzlib_gzopen64
#  ifdef _WIN32
#    define gzopen_w              itkzlib_gzopen_w
#  endif
#  define gzprintf              itkzlib_gzprintf
#  define gzputc                itkzlib_gzputc
#  define gzputs                itkzlib_gzputs
#  define gzread                itkzlib_gzread
#  define gzrewind              itkzlib_gzrewind
#  define gzseek                itkzlib_gzseek
#  define gzseek64              itkzlib_gzseek64
#  define gzsetparams           itkzlib_gzsetparams
#  define gztell                itkzlib_gztell
#  define gztell64              itkzlib_gztell64
#  define gzungetc              itkzlib_gzungetc
#  define gzvprintf             itkzlib_gzvprintf
#  define gzwrite               itkzlib_gzwrite
#endif
#define inflate               itkzlib_inflate
#define inflateBack           itkzlib_inflateBack
#define inflateBackEnd        itkzlib_inflateBackEnd
#define inflateBackInit       itkzlib_inflateBackInit
#define inflateBackInit_      itkzlib_inflateBackInit_
#define inflateCodesUsed      itkzlib_inflateCodesUsed
#define inflateCopy           itkzlib_inflateCopy
#define inflateEnd            itkzlib_inflateEnd
#define inflateGetDictionary  itkzlib_inflateGetDictionary
#define inflateGetHeader      itkzlib_inflateGetHeader
#define inflateInit           itkzlib_inflateInit
#define inflateInit2          itkzlib_inflateInit2
#define inflateInit2_         itkzlib_inflateInit2_
#define inflateInit_          itkzlib_inflateInit_
#define inflateMark           itkzlib_inflateMark
#define inflatePrime          itkzlib_inflatePrime
#define inflateReset          itkzlib_inflateReset
#define inflateReset2         itkzlib_inflateReset2
#define inflateResetKeep      itkzlib_inflateResetKeep
#define inflateSetDictionary  itkzlib_inflateSetDictionary
#define inflateSync           itkzlib_inflateSync
#define inflateSyncPoint      itkzlib_inflateSyncPoint
#define inflateUndermine      itkzlib_inflateUndermine
#define inflateValidate       itkzlib_inflateValidate
#define inflate_copyright     itkzlib_inflate_copyright
#define inflate_fast          itkzlib_inflate_fast
#define inflate_table         itkzlib_inflate_table
#ifndef Z_SOLO
#  define uncompress            itkzlib_uncompress
#  define uncompress2           itkzlib_uncompress2
#endif
#define zError                itkzlib_zError
#ifndef Z_SOLO
#  define zcalloc               itkzlib_zcalloc
#  define zcfree                itkzlib_zcfree
#endif
#define zlibCompileFlags      itkzlib_zlibCompileFlags
#define zlibVersion           itkzlib_zlibVersion

/* all zlib typedefs in zlib.h and zconf.h */
#define Byte                  itkzlib_Byte
#define Bytef                 itkzlib_Bytef
#define alloc_func            itkzlib_alloc_func
#define charf                 itkzlib_charf
#define free_func             itkzlib_free_func
#ifndef Z_SOLO
#  define gzFile                itkzlib_gzFile
#endif
#define gz_header             itkzlib_gz_header
#define gz_headerp            itkzlib_gz_headerp
#define in_func               itkzlib_in_func
#define intf                  itkzlib_intf
#define out_func              itkzlib_out_func
#define uInt                  itkzlib_uInt
#define uIntf                 itkzlib_uIntf
#define uLong                 itkzlib_uLong
#define uLongf                itkzlib_uLongf
#define voidp                 itkzlib_voidp
#define voidpc                itkzlib_voidpc
#define voidpf                itkzlib_voidpf

/* all zlib structs in zlib.h and zconf.h */
#define gz_header_s           itkzlib_gz_header_s
#define internal_state        itkzlib_internal_state

/* all zlib structs in zutil.h */
#define z_errmsg              itkzlib_z_errmsg

#endif /* ZLIB_NAME_MANGLING_H */
