#!/bin/bash

#
# Top level configuration and build for soraCore
#
# The script is insensitive from where it is run.
# Run with -h to get all the options.
#
# This configuration script allow to specify some parameters when
# the build needs to be configured in a non-standard way.

# This script also allows to define where to locate the following
# packages: ACE/TAO and Miro.

# It is possible to specify an installation directory and "build name" for
# specific out of source build. Note that when invoking the script with 
# different build names, the previous build will not be affected, not the
# CMakeCache.txt cleared, even with the -c option
#
# The script behavior is the following:
# 0. Locate where the script is and extract the rapidCollection root
# 1. Initialize some variables
# 2. Parse the command line arguments
# 3. Define the cmake flags based on these command line arguments
# 4. Create/update the top level makfile using Makefile.top
# 5. For each rapidCollection modules do:
# 5.1 create the build tree if necessary
# 5.2 wipe out the CMake cache if specified (-c)
# 5.3 configure the build with cmake, only if target=install
# 5.4 build invoking make target
#
# The script maintains consistency of the path for all the modules
# composing rapidCollection. This is very important when one need to use a
# packages not installed in the default path.
#
# However, this consistency maintained with the script is only a
# temporarily solution because it is not scalable at all. The real answer
# to guaranty consistency of the dependant packages as well of the build
# options across the rapidCollection modules is to use the "cmake.package" system
# described in the Cmake book, chapter 6.7
#
# Lorenzo Flueckiger -- May 2008
#
# Notes:
# 
# - This script configure rapidCollection from the top level as a single
# project. To build individual module like irgUtil, kn, knDds or knRapid, use
# directly cmake of these individual moduless.
#
# - This script only accept a limited number of options, more more control
# use the cmake of the individual modules.
#
# - For now, the script simply hard-code all the options for the paths. If
# we need to include more paths, then we should reuse something like the
# packages.sh from lmakes.
#
# - The script extract the canonical path for ace/tao, claraty and
# plexil. This functionality should be move to Cmake for ALL the path to
# avoid serious issues when symlinks are changed.
#

#
# First identify more or less where we are (absolute or relative ok)
#
callcmd=$0
workdir=`pwd`
confdir=`dirname $callcmd`
scriptname=${0##*/}
rootdir=$confdir
rootpath=`cd $rootdir; pwd`

# Hack some archname following the IRG convention
irg_arch_string="`uname -m`_`uname -s`_gcc`gcc -dumpversion | cut -f-2 -d .`"
archname=`echo $irg_arch_string | awk '{ print tolower( $0 ) }'`

# prefix for installation path
prefix=""

# build name (if used, build under rapidCollection/build/$buildname)
buildname=""

# Path to ACE/TAO
acetao_dir=""

## Force cache cleaning
#clean_cache=0
# mallan 02/22/2010: clean cache by default to reduce user error
clean_cache=1

# Build target
target="install"

usage_string="$0 [-h] [-p install_path] [-b buildname] [-a acetao_path] [-m miro_path][-c <clean cache>] [-t make_target]"

optstring="hp:b:a:t:cC"

# Print the help message (list all the options)
print_help()
{
    echo -n `basename $0 .sh`
    echo " usage:"
    echo $usage_string
    echo -e "\t-p install_path specify the installation directory"
    echo -e "\t   default=${rootpath}/${archname}"
    echo -e "\t-b buildname   specify a alternate build name"
    echo -e "\t   default=none -> ${rootpath}/build"
    echo -e "\t-a acetao_path  specify the ACE/TAO path to use"
    echo -r "\t-m miro_path  specify the Miro path to use"
    #echo -e "\t-c delete the cmake cache before for every modules"
    #echo -e "\t   (necessary when re-running buildall with different options)"
    echo -e "\t-C do not automatically delete the cmake cache when configure is run"
    echo -e "\t-t make_target  define the make build target"
    echo -e "\t   default (when ommited) is 'install'"
    echo -e "\t   when -t is specified, the configure processs is skipped!"
    echo
    echo "Warning: -p and -b, unlike the other flags that are sticky (because"
    echo "cmake cache them), need to be re-issued at each invocation of the"
    echo "script. Otherwise the default values will be used instead."
    echo
}

# Print the script usage
print_usage()
{
    echo $usage_string
}

# Parse the command line arguments
parse_args()
{
    while getopts $optstring opt $@
    do
	case $opt in
	    "h") print_help
		exit 0
		;;
	    "?") print_usage
		exit 1
		;;
	    "p") prefix=$OPTARG
		;;
	    "b") buildname=$OPTARG
		;;
	    "a") acetao_dir=$OPTARG
		;;
	    "m") miro_dir=$OPTARG
		;;
	    "t") target=$OPTARG
		;;
	    "c") clean_cache=1
		;;
	    "C") clean_cache=0
		;;
	    *) print_usage
		exit 1
		;;
	esac
    done
    
}

build_module()
{
    module=$1
    flags=$2

    module_src_path=${rapidCollection_path}/${module}
    module_build_path=${build_path}/${module}
    if [ ! -d ${module_build_path} ] ; then
	mkdir ${module_build_path}
    fi
    module_upper=`echo ${module} | tr 'a-z' 'A-Z'`
    install_flag="-D${module_upper}_INSTALL_PREFIX:PATH=${install_path}"
    cd ${module_build_path}
    
    if [ ${clean_cache} -eq 1 ] ; then
	echo
	echo "=== Remove the CMake Cache for ${module}"
	rm -f CMakeCache.txt
    fi

    # Configuration stage
    if [ "${target}" = "install" ] ; then
	echo
	echo "=== Configure ${module}..."
	cmake ${install_flag} ${flags} ${module_src_path}
	if [ $? -eq 0 ] ; then
	    echo
	    echo "=== Configuration of $module completed."
	else
	    echo
	    echo "*** Configuration of $module failed!"
	    exit 1
	fi
    else
	echo 
	echo "=== Skip configuration..."
    fi

    # Build stage
    echo
    echo "=== Building ${module}..."
    make ${MAKEOPTS} ${target}
    if [ $? -eq 0 ] ; then
	echo
	echo "=== Build of $module completed."
    else
	echo
	echo "*** Build of $module failed!"
	exit 1
    fi

    cd -
}

# Return the full canonical path of a file
# Arguments:
#   1 -> path to canonicalize
# Return:
#   0 if the path exist, 1 if the path does not exist
#   prints a string with the canonical path + store it in $canonical_path
canonicalize()
{
    freepath=$1
    os_name=`uname -s`
    case $os_name in
	Linux)
	    # just use readlink :-)
	    canonical_path=`readlink -f $freepath`
	    readl_ret=$?
	    echo $canonical_path
	    if [ $readl_ret == 1 ] ; then
		return 1
	    else
		return 0
	    fi
	    ;;
	Darwin | SunOS)
	    # BSD systems do not support readlink :-(
	    if [ -d $freepath ] ; then
		# the argument is a directory
		canonical_path=`cd $freepath && pwd -P`
	    else
		if [ -f $freepath ] ; then
		    # the argument is a file
		    freedir=`dirname $freepath`
		    freefile=`basename $freepath`
		    if [ -L $freepath ] ; then
			canfile=`cd $freedir && stat -f "%Y" $freefile`
		    else
			canfile=$freefile
		    fi
		    candir=`cd $freedir && pwd -P`
		    canonical_path="${candir}/${canfile}"
		else	    
		    # given path does not exsit
		    # since readlink does not return any string for this
		    # scenario, just lets do the same and return an error
		    canonical_path=""
		    return 1
		fi
	    fi
	    echo $canonical_path
	    return 0
	    ;;
	*)
	    # echo platform not supported yet
	    echo "/${os_name}/is/not/yet/supported/by/canonicalize"
	    return 1
	    ;;
    esac
}

# Start the real work here...
parse_args $@

# Define the paths to use
rapidCollection_path=`canonicalize ${rootpath}`

if [ -z ${prefix} ] ; then
    install_path=${rapidCollection_path}/${archname}
else
    install_path=${prefix}
fi

if [ ! -d ${install_path} ] ; then
    mkdir -p $install_path
fi

if [ -z ${buildname} ] ; then
    build_path=${rapidCollection_path}/build
else
    build_path=${rapidCollection_path}/build/${buildname}
fi

if [ ! -d ${build_path} ] ; then
    mkdir -p ${build_path}
fi

if [ -z ${acetao_dir} ] ; then
    acetao_flag=""
else
    acetao_canonical=`canonicalize ${acetao_dir}`
    acetao_flag="-DACE_ROOT_DIR:PATH=${acetao_canonical} -DTAO_ROOT_DIR:PATH=${acetao_canonical}/TAO"
fi


echo "=== ${0} flags:"
echo "      prefix:  $install_path"
echo "      build:   $build_path"
echo "      ace/tao: $acetao_flag"
echo "      miro flag: $miro_flag"
echo ""

# Create the top level makefile
top_makefile=${build_path}/Makefile
if [ -f ${top_makefile} ] ; then 
    if [ ${rapidCollection_path}/Makefile.top -nt ${top_makefile} ] ; then
	echo "=== Update ${top_makefile}"
	cp -f ${rapidCollection_path}/Makefile.top ${top_makefile}
    else
	diffs=`diff -b -q ${rapidCollection_path}/Makefile.top ${top_makefile}`
	if [ ${diffs:+1} ] ; then
	    echo "=== Warning: ${top_makefile} has been modified!"
	else
	    echo "=== ${top_makefile} is up-to-date."
	fi
    fi
else
    echo "=== Create ${top_makefile}"
    cp ${rapidCollection_path}/Makefile.top ${top_makefile}
fi

BUILD_TYPE="-DCMAKE_BUILD_TYPE=RelWithDebInfo"

##
## This list of modules should match the 
## SUBDIRS list in Makefile.top
##
###############################################
build_module "irgUtil" "${BUILD_TYPE} " 

build_module "kn"    "${BUILD_TYPE} \
                      ${acetao_flag}"

build_module "knDds"  "${BUILD_TYPE} -DMIRO_ROOT_DIR:PATH=${install_path}\
			          ${acetao_flag}"

build_module "knRapid" "${BUILD_TYPE} \
                      -DMIRO_ROOT_DIR:PATH=${install_path}\
                      ${acetao_flag}"

echo
echo "=== Initial soraCore Configuration and Build Completed."
echo 
echo "    Later builds can also be performed using:"
echo "      make [install clean]"
echo "    from the build tree:"
echo "      ${build_path}"
echo
echo "=== Enjoy soraCore !"
echo
