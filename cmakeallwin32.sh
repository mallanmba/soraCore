#!/bin/sh

DEBUG=Debug
RELEASE=RelWithDebInfo

function build()
{
    MODULE=$1
    MODULE_UPPER=`echo $1 | tr 'a-z' 'A-Z'`
    
    # by default, don't specify an install path (use CMakeLists file default)
    # if you want to specify a path, do it here:
    INSTALL_PREFIX=""
    BUILD_TYPE=$2
    USER_DEFINES=$3
    
    DELETE_CACHE=""
    #DELETE_CACHE="rm -f CMakeCache.txt;"    
    
    CWD=`pwd`
    MODULE_DIR=${CWD}/${MODULE}
    MODULE_CYG=`cygpath -w ${MODULE_DIR}`

    BUILD_DIR=${CWD}/build/${MODULE}-nmake-${BUILD_TYPE}
    mkdir -p ${BUILD_DIR}
    
    echo "-- ${MODULE}: ${BUILD_TYPE}"
    echo "=========================================================="
    
    pushd ${BUILD_DIR}
    
    ${DELETE_CACHE}
    cmake -G "NMake Makefiles" ${INSTALL_PREFIX} \
          -DCMAKE_BUILD_TYPE=${BUILD_TYPE} \
           ${USER_DEFINES} ${MODULE_CYG}; \
    nmake install
    RETURNCODE=$?
    
    if (test ${RETURNCODE} -ne 0); then 
      echo "--------------------------------------------------------"
      echo "ERROR: ${MODULE} (${BUILD_TYPE}) build failed, return code = ${RETURNCODE}"
      exit ${RETURNCODE}
    fi  
  
    popd
    
    echo "=========================================================="
}


function build_debug() 
{
  echo "##########################################"
  echo "### "
  echo "### Build ${DEBUG}"
  echo "### "
  echo "##########################################"
  build irgUtil ${DEBUG}
  build kn      ${DEBUG}
  build knDds   ${DEBUG}
  build knRapid ${DEBUG}   "-DRAPID_BUILD_examples=OFF"
}

function build_release() 
{
  echo "##########################################"
  echo "### "
  echo "### Build ${RELEASE}"
  echo "### "
  echo "##########################################"
  build irgUtil ${RELEASE} ""
  build kn      ${RELEASE} ""
  build knDds   ${RELEASE} ""
  build knRapid ${RELEASE} ""
}

function build_both() 
{
  echo "##########################################"
  echo "### "
  echo "### Build ${DEBUG} and ${RELEASE} "
  echo "### "
  echo "##########################################"
  
  build irgUtil ${DEBUG}   ""
  build irgUtil ${RELEASE} ""

  build kn      ${DEBUG}   ""
  build kn      ${RELEASE} ""

  build knDds  ${DEBUG}   ""
  build knDds  ${RELEASE} ""

  build knRapid   ${DEBUG}   ""
  build knRapid   ${RELEASE} ""
}

##==========================================================
if [ "${1}" == "release" ];then 
  build_release
elif [ "${1}" == "debug" ];then
  build_debug
elif [ "${1}" == "both" ];then
  build_both
else
  #build_release
  build_both
fi
