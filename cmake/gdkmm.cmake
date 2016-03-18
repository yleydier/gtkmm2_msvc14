include_directories("${PROJECT_SOURCE_DIR}/gtkmm/gdk")
include_directories("${PROJECT_SOURCE_DIR}/gtkmm/MSVC_Net2008/gdkmm")
include_directories("${PROJECT_SOURCE_DIR}/gtk-bundle/include/gtk-2.0")
include_directories("${PROJECT_SOURCE_DIR}/gtk-bundle/include/gdk-pixbuf-2.0")
include_directories("${PROJECT_SOURCE_DIR}/gtk-bundle/lib/gtk-2.0/include")

file(
	GLOB
	GDKMM_HEADER
	gtkmm/gdk/*.h
	gtkmm/gdk/gdkmm/*.h
	gtkmm/gdk/gdkmm/private/*.h
	gtkmm/MSVC_Net2008/gdkmm/gdkmmconfig.h 
)

file(
	GLOB
	GDKMM_SRC
	gtkmm/gdk/gdkmm/*.cc
)

add_library(gdkmm SHARED ${GDKMM_SRC} ${GDKMM_HEADER})
target_compile_definitions(gdkmm PUBLIC WIN32 GDKMM_BUILD _USRDLL _WINDLL _WINDOWS)
add_custom_command(TARGET gdkmm PRE_LINK COMMAND gendef 
	${CMAKE_CURRENT_BINARY_DIR}/gdkmm.def 
	$<TARGET_FILE_NAME:gdkmm> 
	${CMAKE_CURRENT_BINARY_DIR}/$<$<BOOL:${CMAKE_BUILD_TYPE}>:${CMAKE_FILES_DIRECTORY}>/gdkmm.dir/${CMAKE_CFG_INTDIR}/$<$<BOOL:${CMAKE_BUILD_TYPE}>:gdkmm/gdk/gdkmm/>*.obj)
set_target_properties(gdkmm PROPERTIES LINK_FLAGS "/DEF:\"gdkmm.def\"")
target_link_libraries(gdkmm sigc++ glibmm cairomm pangomm glib-2.0 gobject-2.0 gdk-win32-2.0 gdk_pixbuf-2.0 gtk-win32-2.0)

# install
install(TARGETS gdkmm 
	RUNTIME DESTINATION "${RUNTIME_INSTALL_PATH}" COMPONENT bin 
	LIBRARY DESTINATION "${LIBRARY_INSTALL_PATH}" COMPONENT bin 
	ARCHIVE DESTINATION "${ARCHIVE_INSTALL_PATH}" COMPONENT bin)
install(FILES gtkmm/gdk/gdkmm.h DESTINATION "include" COMPONENT dev)
install(DIRECTORY gtkmm/gdk/gdkmm DESTINATION "include" COMPONENT dev FILES_MATCHING PATTERN "*.h")
install(FILES gtkmm/MSVC_Net2008/gdkmm/gdkmmconfig.h DESTINATION "include/gdkmm" COMPONENT dev)
