include_directories("${PROJECT_SOURCE_DIR}/pangomm/pango")
include_directories("${PROJECT_SOURCE_DIR}/pangomm/MSVC_Net2008/pangomm")
include_directories("${PROJECT_SOURCE_DIR}/gtk-bundle/include/pango-1.0")
include_directories("${PROJECT_SOURCE_DIR}/gtk-bundle/include/pango-1.0/pango")

file(
	GLOB
	PANGOMM_HEADER
	pangomm/pango/*.h
	pangomm/pango/pangomm/*.h
	pangomm/pango/pangomm/private/*.h
	pangomm/MSVC_Net2010/pangomm/pangommconfig.h 
)

file(
	GLOB
	PANGOMM_SRC
	pangomm/pango/pangomm/*.cc
)

add_library(pangomm SHARED ${PANGOMM_SRC} ${PANGOMM_HEADER})
target_compile_definitions(pangomm PUBLIC WIN32 PANGOMM_BUILD _USRDLL _WINDLL _WINDOWS)
add_custom_command(TARGET pangomm PRE_LINK COMMAND gendef 
	${CMAKE_CURRENT_BINARY_DIR}/pangomm.def 
	$<TARGET_FILE_NAME:pangomm> 
	${CMAKE_CURRENT_BINARY_DIR}/$<$<BOOL:${CMAKE_BUILD_TYPE}>:${CMAKE_FILES_DIRECTORY}>/pangomm.dir/${CMAKE_CFG_INTDIR}/$<$<BOOL:${CMAKE_BUILD_TYPE}>:pangomm/pango/pangomm/>*.obj)
set_target_properties(pangomm PROPERTIES LINK_FLAGS "/DEF:\"pangomm.def\"")
target_link_libraries(pangomm sigc++ glibmm cairomm pango-1.0 pangocairo-1.0 glib-2.0 gobject-2.0 gmodule-2.0)

# install
install(TARGETS pangomm 
	RUNTIME DESTINATION "${RUNTIME_INSTALL_PATH}"
	LIBRARY DESTINATION "${LIBRARY_INSTALL_PATH}"
	ARCHIVE DESTINATION "${ARCHIVE_INSTALL_PATH}")
install(FILES pangomm/pango/pangomm.h DESTINATION "include")
install(DIRECTORY pangomm/pango/pangomm DESTINATION "include" FILES_MATCHING PATTERN "*.h" PATTERN "Pax*" EXCLUDE PATTERN "private*" EXCLUDE)
install(FILES pangomm/MSVC_Net2010/pangomm/pangommconfig.h DESTINATION "include")
