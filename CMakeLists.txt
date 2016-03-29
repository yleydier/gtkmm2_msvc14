# This is the CMake script for compiling gtkmm2 for VS2015
# Yann LEYDIER - March 2016

cmake_minimum_required(VERSION 2.8.9)
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

if (COMMAND cmake_policy)
	if(POLICY CMP0042)
		cmake_policy(SET CMP0042 NEW) # https://cmake.org/cmake/help/v3.0/policy/CMP0042.html
	endif(POLICY CMP0042)
endif (COMMAND cmake_policy)

set(DOC_DIR ${PROJECT_BINARY_DIR}/doc)

# project configuration
set(PRJ_NAME gtkmm2)

project(${PRJ_NAME})
set(CMAKE_INSTALL_PREFIX "install" CACHE STRING "install path" FORCE)

# set Release as default build target
#if (NOT CMAKE_BUILD_TYPE)
#set (CMAKE_BUILD_TYPE Release CACHE STRING
#"Choose the type of build, options are: Debug, Release."
#FORCE)
#endif ()
#message("Build type : ${CMAKE_BUILD_TYPE}")

set(RUNTIME_INSTALL_PATH "bin")
set(LIBRARY_INSTALL_PATH "lib")
set(ARCHIVE_INSTALL_PATH "lib")

#############################
#------------------------------------------------------------------------------
# MSVC
#------------------------------------------------------------------------------
# /MP for multiple compilation units (cl.exe) ; without any value, it is set automatically depending on your number of main threads
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /MP /D _MBCS")

# force same options on console and in IDE
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /Gd /Gm- /FS /GS /WX- /Zc:forScope /Zc:inline /Zc:wchar_t")

set_property(DIRECTORY APPEND PROPERTY COMPILE_DEFINITIONS _CRT_SECURE_NO_WARNINGS)
set_property(DIRECTORY APPEND PROPERTY COMPILE_DEFINITIONS _SCL_SECURE_NO_WARNINGS)

include_directories("${PROJECT_SOURCE_DIR}/gtk-bundle/include")
include_directories("${PROJECT_SOURCE_DIR}/src")
link_directories("${PROJECT_SOURCE_DIR}/gtk-bundle/lib")

include(gendef)
include(sigcpp)
include(cairomm)
include(glibmm)
include(giomm)
include(atkmm)
include(pangomm)
include(gdkmm)
include(gtkmm)

install(DIRECTORY gtk-bundle/bin DESTINATION ".")
install(DIRECTORY gtk-bundle/etc DESTINATION ".")
install(FILES gtkrc DESTINATION "etc/gtk-2.0")
install(DIRECTORY gtk-bundle/include DESTINATION ".")
install(FILES src/unistd.h DESTINATION "include")
install(DIRECTORY gtk-bundle/lib DESTINATION ".")
install(DIRECTORY gtk-bundle/share DESTINATION ".")

#####################################
# CPACK
#include(InstallRequiredSystemLibraries)
set(CPACK_PACKAGE_PACKAGE_NAME "gtkmm2formsvc14")
set(CPACK_PACKAGE_FILE_NAME "gtkmm2formsvc14")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "gtkmm2formsvc14")
set(CPACK_PACKAGE_VERSION_MAJOR "1")
set(CPACK_PACKAGE_VERSION_MINOR "0")
set(CPACK_PACKAGE_VERSION_PATCH "0")
set(CPACK_BINARY_ZIP "ON")
include(CPack)

