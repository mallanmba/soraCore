
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SystemInfoSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#include "SystemInfoSampleSupport.h"
#include "SystemInfoSamplePlugin.h"



#ifdef __cplusplus  
    #ifndef dds_c_log_impl_h              
         #include "dds_c/dds_c_log_impl.h"                                
    #endif        
#endif        


namespace rapid{

namespace ext{



/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'BatteryInfoSample' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   BatteryInfoSampleTYPENAME

/* Defines */
#define TDataWriter BatteryInfoSampleDataWriter
#define TData       ::rapid::ext::BatteryInfoSample


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   BatteryInfoSampleTYPENAME

/* Defines */
#define TDataReader BatteryInfoSampleDataReader
#define TDataSeq    BatteryInfoSampleSeq
#define TData       ::rapid::ext::BatteryInfoSample


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    BatteryInfoSampleTYPENAME
#define TPlugin_new  ::rapid::ext::BatteryInfoSamplePlugin_new
#define TPlugin_delete  ::rapid::ext::BatteryInfoSamplePlugin_delete

/* Defines */
#define TTypeSupport BatteryInfoSampleTypeSupport
#define TData        ::rapid::ext::BatteryInfoSample
#define TDataReader  BatteryInfoSampleDataReader
#define TDataWriter  BatteryInfoSampleDataWriter
#ifdef __cplusplus



#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"



#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete





/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'CpuInfoSample' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   CpuInfoSampleTYPENAME

/* Defines */
#define TDataWriter CpuInfoSampleDataWriter
#define TData       ::rapid::ext::CpuInfoSample


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   CpuInfoSampleTYPENAME

/* Defines */
#define TDataReader CpuInfoSampleDataReader
#define TDataSeq    CpuInfoSampleSeq
#define TData       ::rapid::ext::CpuInfoSample


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    CpuInfoSampleTYPENAME
#define TPlugin_new  ::rapid::ext::CpuInfoSamplePlugin_new
#define TPlugin_delete  ::rapid::ext::CpuInfoSamplePlugin_delete

/* Defines */
#define TTypeSupport CpuInfoSampleTypeSupport
#define TData        ::rapid::ext::CpuInfoSample
#define TDataReader  CpuInfoSampleDataReader
#define TDataWriter  CpuInfoSampleDataWriter
#ifdef __cplusplus



#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"



#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete





/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'FilesystemInfoSample' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   FilesystemInfoSampleTYPENAME

/* Defines */
#define TDataWriter FilesystemInfoSampleDataWriter
#define TData       ::rapid::ext::FilesystemInfoSample


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   FilesystemInfoSampleTYPENAME

/* Defines */
#define TDataReader FilesystemInfoSampleDataReader
#define TDataSeq    FilesystemInfoSampleSeq
#define TData       ::rapid::ext::FilesystemInfoSample


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    FilesystemInfoSampleTYPENAME
#define TPlugin_new  ::rapid::ext::FilesystemInfoSamplePlugin_new
#define TPlugin_delete  ::rapid::ext::FilesystemInfoSamplePlugin_delete

/* Defines */
#define TTypeSupport FilesystemInfoSampleTypeSupport
#define TData        ::rapid::ext::FilesystemInfoSample
#define TDataReader  FilesystemInfoSampleDataReader
#define TDataWriter  FilesystemInfoSampleDataWriter
#ifdef __cplusplus



#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"



#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete





/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'MemoryInfoSample' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   MemoryInfoSampleTYPENAME

/* Defines */
#define TDataWriter MemoryInfoSampleDataWriter
#define TData       ::rapid::ext::MemoryInfoSample


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   MemoryInfoSampleTYPENAME

/* Defines */
#define TDataReader MemoryInfoSampleDataReader
#define TDataSeq    MemoryInfoSampleSeq
#define TData       ::rapid::ext::MemoryInfoSample


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    MemoryInfoSampleTYPENAME
#define TPlugin_new  ::rapid::ext::MemoryInfoSamplePlugin_new
#define TPlugin_delete  ::rapid::ext::MemoryInfoSamplePlugin_delete

/* Defines */
#define TTypeSupport MemoryInfoSampleTypeSupport
#define TData        ::rapid::ext::MemoryInfoSample
#define TDataReader  MemoryInfoSampleDataReader
#define TDataWriter  MemoryInfoSampleDataWriter
#ifdef __cplusplus



#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"



#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete





/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'ThermalInfoSample' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   ThermalInfoSampleTYPENAME

/* Defines */
#define TDataWriter ThermalInfoSampleDataWriter
#define TData       ::rapid::ext::ThermalInfoSample


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   ThermalInfoSampleTYPENAME

/* Defines */
#define TDataReader ThermalInfoSampleDataReader
#define TDataSeq    ThermalInfoSampleSeq
#define TData       ::rapid::ext::ThermalInfoSample


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    ThermalInfoSampleTYPENAME
#define TPlugin_new  ::rapid::ext::ThermalInfoSamplePlugin_new
#define TPlugin_delete  ::rapid::ext::ThermalInfoSamplePlugin_delete

/* Defines */
#define TTypeSupport ThermalInfoSampleTypeSupport
#define TData        ::rapid::ext::ThermalInfoSample
#define TDataReader  ThermalInfoSampleDataReader
#define TDataWriter  ThermalInfoSampleDataWriter
#ifdef __cplusplus



#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"



#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete





/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'NetTrafficInfoSample' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   NetTrafficInfoSampleTYPENAME

/* Defines */
#define TDataWriter NetTrafficInfoSampleDataWriter
#define TData       ::rapid::ext::NetTrafficInfoSample


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   NetTrafficInfoSampleTYPENAME

/* Defines */
#define TDataReader NetTrafficInfoSampleDataReader
#define TDataSeq    NetTrafficInfoSampleSeq
#define TData       ::rapid::ext::NetTrafficInfoSample


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    NetTrafficInfoSampleTYPENAME
#define TPlugin_new  ::rapid::ext::NetTrafficInfoSamplePlugin_new
#define TPlugin_delete  ::rapid::ext::NetTrafficInfoSamplePlugin_delete

/* Defines */
#define TTypeSupport NetTrafficInfoSampleTypeSupport
#define TData        ::rapid::ext::NetTrafficInfoSample
#define TDataReader  NetTrafficInfoSampleDataReader
#define TDataWriter  NetTrafficInfoSampleDataWriter
#ifdef __cplusplus



#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"



#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete





/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'WifiInfoSample' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   WifiInfoSampleTYPENAME

/* Defines */
#define TDataWriter WifiInfoSampleDataWriter
#define TData       ::rapid::ext::WifiInfoSample


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   WifiInfoSampleTYPENAME

/* Defines */
#define TDataReader WifiInfoSampleDataReader
#define TDataSeq    WifiInfoSampleSeq
#define TData       ::rapid::ext::WifiInfoSample


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    WifiInfoSampleTYPENAME
#define TPlugin_new  ::rapid::ext::WifiInfoSamplePlugin_new
#define TPlugin_delete  ::rapid::ext::WifiInfoSamplePlugin_delete

/* Defines */
#define TTypeSupport WifiInfoSampleTypeSupport
#define TData        ::rapid::ext::WifiInfoSample
#define TDataReader  WifiInfoSampleDataReader
#define TDataWriter  WifiInfoSampleDataWriter
#ifdef __cplusplus



#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"



#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete





/* ========================================================================= */
/**
   <<IMPLEMENTATION>>

   Defines:   TData,
              TDataWriter,
              TDataReader,
              TTypeSupport

   Configure and implement 'SystemInfoSample' support classes.

   Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   SystemInfoSampleTYPENAME

/* Defines */
#define TDataWriter SystemInfoSampleDataWriter
#define TData       ::rapid::ext::SystemInfoSample


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#else
#include "dds_c/generic/dds_c_data_TDataWriter.gen"
#endif


#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
  <<IMPLEMENTATION >>

   Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   SystemInfoSampleTYPENAME

/* Defines */
#define TDataReader SystemInfoSampleDataReader
#define TDataSeq    SystemInfoSampleSeq
#define TData       ::rapid::ext::SystemInfoSample


#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#else
#include "dds_c/generic/dds_c_data_TDataReader.gen"
#endif


#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

  <<IMPLEMENTATION >>

   Requires:  TTYPENAME,
              TPlugin_new
              TPlugin_delete
   Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    SystemInfoSampleTYPENAME
#define TPlugin_new  ::rapid::ext::SystemInfoSamplePlugin_new
#define TPlugin_delete  ::rapid::ext::SystemInfoSamplePlugin_delete

/* Defines */
#define TTypeSupport SystemInfoSampleTypeSupport
#define TData        ::rapid::ext::SystemInfoSample
#define TDataReader  SystemInfoSampleDataReader
#define TDataWriter  SystemInfoSampleDataWriter
#ifdef __cplusplus

#define RTI_VALUETYPE

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef RTI_VALUETYPE

#else
#include "dds_c/generic/dds_c_data_TTypeSupport.gen"
#endif
#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter

#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete



} /* namespace ext */

} /* namespace rapid */
