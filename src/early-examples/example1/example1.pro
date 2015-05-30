# 2015-05-30T17:25+08:00
# P36: Example 1.16
QT += core widgets

# app: indicates that qmake should start with a templated Makefile suited for
#      building applications.
# lib: indicates that a Makefile library template should be used instead.
# A third possibility is that you might have your source code distributed
# among several subdirectories, each having its own project file. In such
# a case you might see TEMPLATE = subdirs in the project file located in
# the parent directory, which would cause a Makefile to be produced in the
# parent directory and in each subdirectory.
TEMPLATE = app

include (../../common.pri)
SOURCES += fac1.cpp
