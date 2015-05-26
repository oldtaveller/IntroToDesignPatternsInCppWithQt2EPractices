:: 2015-05-26T11:46+08:00
qmake -project "CONFIG += console" -o qstringdemo.pro
qmake
make

release\qstringdemo.exe

del Makefile.Debug Makefile.release Makefile qstringdemo.pro
del /F /S /Q debug release
rmdir debug release
