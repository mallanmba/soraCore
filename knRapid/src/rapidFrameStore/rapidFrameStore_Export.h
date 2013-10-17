#ifndef RAPIDFRAMESTORE_EXPORT_H
#define RAPIDFRAMESTORE_EXPORT_H

// XXX the intent of this header was to try and reduce
// XXX ACE dependencies, but without including ace/config-all.h
// XXX here, rapidFrameStore will not compile
#include "ace/config-all.h"

#ifdef WIN32
#  ifdef RAPIDFRAMESTORE_BUILD_DLL
#    define rapidFrameStore_Export __declspec(dllexport)
#  else
#    define rapidFrameStore_Export __declspec(dllimport)
#  endif
#else
#  define rapidFrameStore_Export
#endif


#endif // RAPIDFRAMESTORE_EXPORT_H
