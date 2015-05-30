// 2015-05-30T18:58+08:00
// P39: Exercise 1.12.1.2
// Based on example 1.17
#include <QTextStream>
#include <QString>

int main()
{
    QTextStream cout(stdout);
    
    cout << "\t\tTitle 1\t\t\"Cat Clothing\"\n"
            "\t\tTitle 2\t\t\"Dog Dancing\"" << endl;

    return 0;
}