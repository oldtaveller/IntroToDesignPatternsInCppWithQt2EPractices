# 2015-05-26T09:47+08:00

# required if you want to see qDebug() messages
CONFIG += debug

# place auto-generated files in "invisible" subdirectories
win32 {
    MOC_DIR = _moc
    UI_DIR = _ui
    OBJECTS_DIR = _obj
} else {
    UI_DIR = .ui
    MOC_DIR = .moc
    OBJECTS_DIR = .obj
}

# rules below apply to TEMPLATE=app projects only:
app {
    # place executable in same folder:
    DESTDIR = $$OUT_PWD

    # don't place executables in an app bundle on mac os
    # this also permits console apps to work on the mac
    mac {
        # For console apps on the Mac, you can prevent the creation
        # of an "app bundle" that places your executable in a sub-
        # directory by adding this line in your project file. That
        # will also permit interactions with standard I/O. You can
        # then use the command line:
        #     qmake -spec macx-g++
        # to produce a Makefile. The command make> can then produce
        # a single executable for your app.
        CONFIG -= app_bundle
    }

    # Open a console for stdin, stdout and stderr Windows:
    win32 {
        # This line is only necessary on Windows platforms, tells
        # the compiler to build a "console" application, which can
        # interact with the user via standard input/output streams.
        # If you use VS, this is equivalent to selecting Project Properties
        # - Configuration Properties - Linker - System - Subsystem - Console.
        # Without this option, you will not see messages to
        # qDebug(), stdout, or stderr.
        CONFIG += console
    }
}


