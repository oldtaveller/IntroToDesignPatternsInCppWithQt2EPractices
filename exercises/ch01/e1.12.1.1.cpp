// 2015-05-30T18:58+08:00
// P39: Exercise 1.12.1.1
// Based on example 1.17
#include <QTextStream>
#include <QString>

int main()
{
    QTextStream cout(stdout);
    
    cout << "GNU stands for \"GNU\'s Not UNIX\"." << endl;

    return 0;
}