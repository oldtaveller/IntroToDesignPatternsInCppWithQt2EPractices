// 2015-05-30T19:10+08:00
// P41: Example 1.18
// sizeof operator returns the number of char-sized memory cells that a given
// expression(value expression or type expression) requires for storage.
#include <QChar>
#include <QDate>
#include <QString>
#include <QTextStream>

#define STR_(expr) #expr
#define STR(expr) STR_(expr)

#define DUMP_SIZE(expr) \
    do { \
        cout << "sizeof(" << STR(expr) << ") = " << sizeof(expr) << endl; \
    } while (0)

int main()
{
    QTextStream cout(stdout);

    char array1[34] = "This is a dreaded C array of char";
    char array2[] = "if not for main, we could avoid it entirely.";

    char *charp = array1;

    QString qstring = "This is a unicode QString. Much preferred.";

    Q_ASSERT(sizeof(1) == sizeof(int));

    cout << "  c type sizes: \n";
    DUMP_SIZE(char);
    DUMP_SIZE(wchar_t);
    DUMP_SIZE(int);
    DUMP_SIZE(long);
    DUMP_SIZE(float);
    DUMP_SIZE(double);
    DUMP_SIZE(double *);
    DUMP_SIZE(array1);
    DUMP_SIZE(array2);
    cout << "sizeof(char *) = " << sizeof(charp) << endl;

    cout << "  qt type sizes: \n";
    DUMP_SIZE(QString);
    DUMP_SIZE(qint32);
    DUMP_SIZE(qint64);
    DUMP_SIZE(QChar);
    DUMP_SIZE(QDate);
    // QString::length: gets the number of QChar in QString.
    cout << "qstring.length() = " << qstring.length() << endl;

    return 0;
}

