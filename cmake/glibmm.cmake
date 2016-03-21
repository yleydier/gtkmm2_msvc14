include_directories("${PROJECT_SOURCE_DIR}/glibmm/glib")
include_directories("${PROJECT_SOURCE_DIR}/glibmm/MSVC_Net2008/glibmm")
include_directories("${PROJECT_SOURCE_DIR}/gtk-bundle/include/glib-2.0")
include_directories("${PROJECT_SOURCE_DIR}/gtk-bundle/lib/glib-2.0/include")

file(
	GLOB
	GLIBMM_HEADER
	glibmm/glib/*.h
	glibmm/glib/glibmm/*.h
	glibmm/glib/glibmm/private/*.h
	glibmm/MSVC_Net2008/glibmm/glibmmconfig.h 
)

file(
	GLOB
	GLIBMM_SRC
	glibmm/glib/glibmm/*.cc
)

add_library(glibmm SHARED ${GLIBMM_SRC} ${GLIBMM_HEADER})
target_compile_definitions(glibmm PUBLIC WIN32 GLIBMM_BUILD _USRDLL _WINDLL _WINDOWS)
add_custom_command(TARGET glibmm PRE_LINK COMMAND gendef 
	${CMAKE_CURRENT_BINARY_DIR}/glibmm.def 
	$<TARGET_FILE_NAME:glibmm> 
	${CMAKE_CURRENT_BINARY_DIR}/$<$<BOOL:${CMAKE_BUILD_TYPE}>:${CMAKE_FILES_DIRECTORY}>/glibmm.dir/${CMAKE_CFG_INTDIR}/$<$<BOOL:${CMAKE_BUILD_TYPE}>:glibmm/glib/glibmm/>*.obj)
set_target_properties(glibmm PROPERTIES LINK_FLAGS "/DEF:\"glibmm.def\"")
target_link_libraries(glibmm sigc++ glib-2.0 gobject-2.0 gmodule-2.0)

# install
install(TARGETS glibmm 
	RUNTIME DESTINATION "${RUNTIME_INSTALL_PATH}"
	LIBRARY DESTINATION "${LIBRARY_INSTALL_PATH}"
	ARCHIVE DESTINATION "${ARCHIVE_INSTALL_PATH}")
install(FILES glibmm/glib/glibmm.h DESTINATION "include")
install(DIRECTORY glibmm/glib/glibmm/ DESTINATION "include/glibmm-2.4" FILES_MATCHING PATTERN "*.h" PATTERN "Pax*" EXCLUDE PATTERN "private*" EXCLUDE)
install(FILES glibmm/MSVC_Net2008/glibmm/glibmmconfig.h DESTINATION "include")
