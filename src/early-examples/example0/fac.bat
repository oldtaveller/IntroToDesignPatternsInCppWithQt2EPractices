:: 2015-05-26T09:45+08:00
ls
::qmake -project -o fac.pro -after "CONFIG += console"
qmake -project "CONFIG += console" -o fac.pro
ls
cat fac.pro
qmake
ls
make
ls
"release\fac.exe"