#! /usr/bin/sh
# 2015-05-26T11:46+08:00
qmake -project "CONFIG += console" -o qstringdemo.pro
qmake
make
