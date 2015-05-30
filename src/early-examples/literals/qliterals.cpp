// 2015-05-30T17:59+08:00
// P38: Example 1.17
// String literals are special in C++, due to its historical roots in the C
// language. 
// This example shows how certain characters need to be escaped inside double-
// quoted string delimiters.
#include <QTextStream>
#include <QString>

int main()
{
    const char *charstr = "this is one very long string "
                          " so I will continue it on the next line";

    QTextStream cout(stdout);

    QString str = charstr;
    cout << str << endl;
    
    cout << "\nA\tb\\c\'d\"" << endl;

    return 0;
}