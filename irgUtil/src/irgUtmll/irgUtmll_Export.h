#ifndef IRGUTMLL_EXPORT_H
#define IRGUTMLL_EXPORT_H

#if !defined (IRGUTMLL_HAS_DLL) && (defined(_WIN32) || defined (__CYGWIN__))
#  define IRGUTMLL_HAS_DLL 1
#endif // IRGUTMLL_HAS_DLL

#if defined(IRGUTMLL_HAS_DLL) && (IRGUTMLL_HAS_DLL == 1)
#    if defined(_WIN32) || defined (__CYGWIN__)
#      ifdef IRGUTMLL_BUILD_DLL
#        define irgUtmll_Export __declspec(dllexport)
#        define irgUtmll_Extern
#      else
#        define irgUtmll_Export __declspec(dllimport)
#        define irgUtmll_Extern extern
#      endif //IRGUTMLL_BUILD_DLL
#    elif defined(__GNUC__) && (__GNUC__ >= 4)
#      define irgUtmll_Export __attribute__ ((visibility("default")))
#    endif
#endif // IRGUTMLL_HAS_DLL

#ifndef irgUtmll_Export
#  define irgUtmll_Export
#endif

#ifndef irgUtmll_Extern
#  define irgUtmll_Extern
#endif

#endif //IRGUTMLL_EXPORT_H

