// 2015-05-26T13:53+08:00
// P28: Example 1.10
#include <QDebug>
#include <QTextStream>

QTextStream cin(stdin);
QTextStream cout(stdout);
QTextStream cerr(stderr);

int main()
{
    int num1(1234), num2(2345);

    cout << oct << num2 << '\t'
         << hex << num2 << '\t'
         << dec << num2 << endl;

    double dub(1357);

    cout << dub << '\t'
         << forcesign << dub << '\t'
         << forcepoint << dub << endl;

    dub = 1234.5678;

    cout << dub << '\t'
         << fixed << dub << '\t'
         << scientific << dub << '\t'
         << noforcesign << dub << endl;

    qDebug() << "Here is a debug message with " << dub << " in it.";
    qDebug("Here is one with the number %d in it.", num1);
    
    return 0;
}