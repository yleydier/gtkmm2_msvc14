@echo OFF
echo "Reading VS macros"
call "%VS140COMNTOOLS%..\..\VC\vcvarsall.bat" x86_amd64
echo "Creating Makefile"
cd buildvc14
rem cmake -G "NMake Makefiles" -DCMAKE_BUILD_TYPE=Release -DCMAKE_VERBOSE_MAKEFILE=on ..
cmake -G "NMake Makefiles" -DCMAKE_BUILD_TYPE=Release ..
echo "Building"
cmake --build . --config Release
echo "Packaging"
cpack -G ZIP
cd ..
pause
