// 2015-05-30T19:50+08:00
// P45: Example 1.20
//
#include <QCoreApplication>
#include <QStringList>
#include <QTextStream>

int main(int argc, char *argv[])
{
    // Most applications that employ Qt types should define an object of type
    // QCoreApplication or QApplication as early as possible in main().
    // The reasons for this and the distinctions between those two types
    // are discussed in Section 8.3.
    QCoreApplication app(argc, argv);

    QTextStream cout(stdout);

    // Using higher-level data structures like these eliminates the need
    // to work with char arrays, which reduces the risk of memory corruption.
    QStringList argList = app.arguments();

    cout << "argc = " << argc << endl;
    for (int i = 0; i < argList.size(); ++i) {
        cout << QString("argv #%1 is %2").arg(i).arg(argList[i]) << endl;
    }

    int num = argList[argc - 1].toInt();
    cout << num * 2 << endl;

    return 0;
}