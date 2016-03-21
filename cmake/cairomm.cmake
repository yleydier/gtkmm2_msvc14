include_directories("${PROJECT_SOURCE_DIR}/cairomm")
include_directories("${PROJECT_SOURCE_DIR}/cairomm/MSVC_Net2010/cairomm")
include_directories("${PROJECT_SOURCE_DIR}/gtk-bundle/include/cairo")
include_directories("${PROJECT_SOURCE_DIR}/gtk-bundle/include/freetype2")

file(
	GLOB
	CAIROMM_HEADER
	cairomm/cairomm/*.h
	cairomm/MSVC_Net2010/cairomm/cairommconfig.h 
)

file(
	GLOB
	CAIROMM_SRC
	cairomm/cairomm/*.cc
)

add_library(cairomm SHARED ${CAIROMM_SRC} ${CAIROMM_HEADER})
target_compile_definitions(cairomm PUBLIC WIN32 CAIROMM_BUILD _WINDLL _USRDLL _WINDOWS)
add_custom_command(TARGET cairomm PRE_LINK COMMAND 
	gendef ${CMAKE_CURRENT_BINARY_DIR}/cairomm.def 
	$<TARGET_FILE_NAME:cairomm> 
	${CMAKE_CURRENT_BINARY_DIR}/$<$<BOOL:${CMAKE_BUILD_TYPE}>:${CMAKE_FILES_DIRECTORY}>/cairomm.dir/${CMAKE_CFG_INTDIR}/$<$<BOOL:${CMAKE_BUILD_TYPE}>:cairomm/cairomm/>*.obj)
set_target_properties(cairomm PROPERTIES LINK_FLAGS "/DEF:\"cairomm.def\"")
target_link_libraries(cairomm sigc++ cairo)

# install
install(TARGETS cairomm 
	RUNTIME DESTINATION "${RUNTIME_INSTALL_PATH}"
	LIBRARY DESTINATION "${LIBRARY_INSTALL_PATH}"
	ARCHIVE DESTINATION "${ARCHIVE_INSTALL_PATH}")
install(DIRECTORY cairomm/cairomm/ DESTINATION "include/cairomm-1.0" FILES_MATCHING PATTERN "*.h" PATTERN "Pax*" EXCLUDE PATTERN "private*" EXCLUDE)
install(FILES cairomm/MSVC_Net2010/cairomm/cairommconfig.h DESTINATION "include")

