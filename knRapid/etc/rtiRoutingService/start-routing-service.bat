@echo off
setlocal enableextensions
cls

@set CONFIG_FILE=RTI_ROUTING_SERVICE.xml
@set CONFIG_NAME=K10Routes

REM @set ROUTING_ROOT=C:\devel\RTI\RTI_Routing_Service_2.0.2
@set ROUTING_ROOT=C:\RTI\RTI_Routing_Service_2.0.2

@set "PATH=%ROUTING_ROOT%\scripts;%PATH%"

rtiroutingservice.bat -verbosity 4 -cfgFile %CONFIG_FILE% -cfgName %CONFIG_NAME%

