include_directories("${PROJECT_SOURCE_DIR}/atkmm/atk")
include_directories("${PROJECT_SOURCE_DIR}/atkmm/MSVC_Net2008/atkmm")
include_directories("${PROJECT_SOURCE_DIR}/gtk-bundle/include/atk-1.0")
include_directories("${PROJECT_SOURCE_DIR}/gtk-bundle/include/atk-1.0/atk")

file(
	GLOB
	ATKMM_HEADER
	atkmm/atk/*.h
	atkmm/atk/atkmm/*.h
	atkmm/atk/atkmm/private/*.h
	atkmm/MSVC_Net2010/atkmm/atkmmconfig.h 
)

file(
	GLOB
	ATKMM_SRC
	atkmm/atk/atkmm/*.cc
)

add_library(atkmm SHARED ${ATKMM_SRC} ${ATKMM_HEADER})
target_compile_definitions(atkmm PUBLIC WIN32 ATKMM_BUILD _USRDLL _WINDLL _WINDOWS)
add_custom_command(TARGET atkmm PRE_LINK COMMAND gendef 
	${CMAKE_CURRENT_BINARY_DIR}/atkmm.def 
	$<TARGET_FILE_NAME:atkmm> 
	${CMAKE_CURRENT_BINARY_DIR}/$<$<BOOL:${CMAKE_BUILD_TYPE}>:${CMAKE_FILES_DIRECTORY}>/atkmm.dir/${CMAKE_CFG_INTDIR}/$<$<BOOL:${CMAKE_BUILD_TYPE}>:atkmm/atk/atkmm/>*.obj)
set_target_properties(atkmm PROPERTIES LINK_FLAGS "/DEF:\"atkmm.def\"")
target_link_libraries(atkmm sigc++ glibmm atk-1.0 glib-2.0 gobject-2.0)

# install
install(TARGETS atkmm 
	RUNTIME DESTINATION "${RUNTIME_INSTALL_PATH}" COMPONENT bin 
	LIBRARY DESTINATION "${LIBRARY_INSTALL_PATH}" COMPONENT bin 
	ARCHIVE DESTINATION "${ARCHIVE_INSTALL_PATH}" COMPONENT bin)
install(FILES atkmm/atk/atkmm.h DESTINATION "include" COMPONENT dev)
install(DIRECTORY atkmm/atk/atkmm DESTINATION "include" COMPONENT dev FILES_MATCHING PATTERN "*.h")
install(FILES atkmm/MSVC_Net2010/atkmm/atkmmconfig.h DESTINATION "include" COMPONENT dev)
