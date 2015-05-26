#! /usr/bin/sh
ls
qmake -project "CONFIG += console" -o fac.pro
ls
cat fac.pro
qmake
ls
make
ls