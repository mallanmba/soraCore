#ifndef IRGSHA1_EXPORT_H
#define IRGSHA1_EXPORT_H

#if !defined (IRGSHA1_HAS_DLL) && (defined(_WIN32) || defined (__CYGWIN__))
#  define IRGSHA1_HAS_DLL 1
#endif // IRGSHA1_HAS_DLL

#if defined(IRGSHA1_HAS_DLL) && (IRGSHA1_HAS_DLL == 1)
#    if defined(_WIN32) || defined (__CYGWIN__)
#      ifdef IRGSHA1_BUILD_DLL
#        define irgSha1_Export __declspec(dllexport)
#        define irgSha1_Extern
#      else
#        define irgSha1_Export __declspec(dllimport)
#        define irgSha1_Extern extern
#      endif //IRGSHA1_BUILD_DLL
#    elif defined(__GNUC__) && (__GNUC__ >= 4)
#      define irgSha1_Export __attribute__ ((visibility("default")))
#    endif
#endif // IRGSHA1_HAS_DLL

#ifndef irgSha1_Export
#  define irgSha1_Export
#endif

#ifndef irgSha1_Extern
#  define irgSha1_Extern
#endif

#endif //IRGSHA1_EXPORT_H

