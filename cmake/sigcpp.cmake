include_directories("${PROJECT_SOURCE_DIR}/libsigc++")
include_directories("${PROJECT_SOURCE_DIR}/libsigc++/MSVC_Net2010")

file(
	GLOB_RECURSE
	SIGCPP_HEADER
	libsigc++/sigc++/*.h
	libsigc++/MSVC_Net2010/sigc++config.h 
)

file(
	GLOB_RECURSE
	SIGCPP_SRC
	libsigc++/sigc++/*.cc
)

add_library(sigc++ SHARED ${SIGCPP_SRC} ${SIGCPP_HEADER})
target_compile_definitions(sigc++ PUBLIC WIN32 _CONSOLE SIGC_BUILD _WINDLL)

# install
install(TARGETS sigc++ 
	RUNTIME DESTINATION "${RUNTIME_INSTALL_PATH}" COMPONENT bin 
	LIBRARY DESTINATION "${LIBRARY_INSTALL_PATH}" COMPONENT bin 
	ARCHIVE DESTINATION "${ARCHIVE_INSTALL_PATH}" COMPONENT bin)
install(DIRECTORY libsigc++/sigc++ DESTINATION "include" COMPONENT dev FILES_MATCHING PATTERN "*.h")
install(FILES libsigc++/MSVC_Net2010/sigc++config.h DESTINATION "include/sigc++" COMPONENT dev)

