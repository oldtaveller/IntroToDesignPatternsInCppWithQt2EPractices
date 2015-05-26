:: 2015-05-26T13:59+08:00
qmake -project "CONFIG += console" -o qtstreamdemo.pro
qmake
make

release\qtstreamdemo.exe

del Makefile.Debug Makefile.release Makefile qtstreamdemo.pro
del /F /S /Q debug release
rmdir debug release
