include_directories("${PROJECT_SOURCE_DIR}/glibmm/gio")
include_directories("${PROJECT_SOURCE_DIR}/glibmm/MSVC_Net2008/giomm")

file(
	GLOB
	GIOMM_HEADER
	glibmm/gio/*.h
	glibmm/gio/giomm/*.h
	glibmm/gio/giomm/private/*.h
	glibmm/MSVC_Net2008/giomm/giommconfig.h 
)

set(GIOMM_SRC "glibmm/gio/giomm/appinfo.cc;glibmm/gio/giomm/asyncresult.cc;glibmm/gio/giomm/bufferedinputstream.cc;glibmm/gio/giomm/bufferedoutputstream.cc;glibmm/gio/giomm/cancellable.cc;glibmm/gio/giomm/contenttype.cc;glibmm/gio/giomm/datainputstream.cc;glibmm/gio/giomm/dataoutputstream.cc;glibmm/gio/giomm/drive.cc;glibmm/gio/giomm/emblem.cc;glibmm/gio/giomm/emblemedicon.cc;glibmm/gio/giomm/enums.cc;glibmm/gio/giomm/error.cc;glibmm/gio/giomm/file.cc;glibmm/gio/giomm/fileattributeinfo.cc;glibmm/gio/giomm/fileattributeinfolist.cc;glibmm/gio/giomm/fileenumerator.cc;glibmm/gio/giomm/fileicon.cc;glibmm/gio/giomm/fileinfo.cc;glibmm/gio/giomm/fileinputstream.cc;glibmm/gio/giomm/fileiostream.cc;glibmm/gio/giomm/filemonitor.cc;glibmm/gio/giomm/filenamecompleter.cc;glibmm/gio/giomm/fileoutputstream.cc;glibmm/gio/giomm/filterinputstream.cc;glibmm/gio/giomm/filteroutputstream.cc;glibmm/gio/giomm/icon.cc;glibmm/gio/giomm/inetaddress.cc;glibmm/gio/giomm/inetsocketaddress.cc;glibmm/gio/giomm/init.cc;glibmm/gio/giomm/initable.cc;glibmm/gio/giomm/inputstream.cc;glibmm/gio/giomm/iostream.cc;glibmm/gio/giomm/loadableicon.cc;glibmm/gio/giomm/memoryinputstream.cc;glibmm/gio/giomm/memoryoutputstream.cc;glibmm/gio/giomm/mount.cc;glibmm/gio/giomm/mountoperation.cc;glibmm/gio/giomm/networkaddress.cc;glibmm/gio/giomm/networkservice.cc;glibmm/gio/giomm/outputstream.cc;glibmm/gio/giomm/resolver.cc;glibmm/gio/giomm/seekable.cc;glibmm/gio/giomm/slot_async.cc;glibmm/gio/giomm/socket.cc;glibmm/gio/giomm/socketaddress.cc;glibmm/gio/giomm/socketaddressenumerator.cc;glibmm/gio/giomm/socketclient.cc;glibmm/gio/giomm/socketconnectable.cc;glibmm/gio/giomm/socketconnection.cc;glibmm/gio/giomm/socketlistener.cc;glibmm/gio/giomm/socketservice.cc;glibmm/gio/giomm/srvtarget.cc;glibmm/gio/giomm/tcpconnection.cc;glibmm/gio/giomm/themedicon.cc;glibmm/gio/giomm/threadedsocketservice.cc;glibmm/gio/giomm/volume.cc;glibmm/gio/giomm/volumemonitor.cc;glibmm/gio/giomm/wrap_init.cc")

add_library(giomm SHARED ${GIOMM_SRC} ${GIOMM_HEADER})
target_compile_definitions(giomm PUBLIC WIN32 GIOMM_BUILD _USRDLL _WINDLL _WINDOWS)
add_custom_command(TARGET giomm PRE_LINK COMMAND gendef 
	${CMAKE_CURRENT_BINARY_DIR}/giomm.def 
	$<TARGET_FILE_NAME:giomm> 
	${CMAKE_CURRENT_BINARY_DIR}/$<$<BOOL:${CMAKE_BUILD_TYPE}>:${CMAKE_FILES_DIRECTORY}>/giomm.dir/${CMAKE_CFG_INTDIR}/$<$<BOOL:${CMAKE_BUILD_TYPE}>:glibmm/gio/giomm/>*.obj)
set_target_properties(giomm PROPERTIES LINK_FLAGS "/DEF:\"giomm.def\"")
target_link_libraries(giomm sigc glibmm glib-2.0 gobject-2.0 gmodule-2.0 gio-2.0)

# install
install(TARGETS giomm 
	RUNTIME DESTINATION "${RUNTIME_INSTALL_PATH}"
	LIBRARY DESTINATION "${LIBRARY_INSTALL_PATH}"
	ARCHIVE DESTINATION "${ARCHIVE_INSTALL_PATH}")
install(FILES glibmm/gio/giomm.h DESTINATION "include/giomm-2.4")
install(DIRECTORY glibmm/gio/giomm DESTINATION "include/giomm-2.4" FILES_MATCHING PATTERN "*.h" PATTERN "Pax*" EXCLUDE PATTERN "private*" EXCLUDE)
install(FILES glibmm/MSVC_Net2008/giomm/giommconfig.h DESTINATION "include/giomm-2.4")

