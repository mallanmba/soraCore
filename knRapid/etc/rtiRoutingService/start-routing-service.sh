#!/bin/bash

CONFIG_FILE=RTI_ROUTING_SERVICE.xml
CONFIG_NAME=K10Routes

ROUTING_ROOT="/usr/local/irg/apps/RTI-5.0.0/RTI_Routing_Service_5.0.0"

export PATH="${ROUTING_ROOT}/scripts:${PATH}"

rtiroutingservice -verbosity 4 -cfgFile ${CONFIG_FILE} -cfgName ${CONFIG_NAME} 

