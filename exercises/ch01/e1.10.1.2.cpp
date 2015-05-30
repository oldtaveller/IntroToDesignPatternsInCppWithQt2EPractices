// 2015-05-28T09:00+08:00
// P33: Exercise 1.10.1.2
// Based on example 1.14
// QString: provides a powerful and flexible string representation.
// QFile: provides an interface for handling files.
#include <QFile>
#include <QString>
#include <QTextStream>

QTextStream cin(stdin);
QTextStream cout(stdout);
QTextStream cerr(stderr);

int main()
{
    QString str, newstr;
    QTextStream strbuf(&str);

    int lucky = 7;
    float pi = 3.14f;
    double e = 2.71;

    cout << "An in-memory stream" << endl;
    strbuf << "luckynumber: " << lucky << endl
           << "pi: " << pi << endl
           << "e: " << e << endl;
    cout << str << flush;

    QString fileName;
    while (true) {
        cout << "Input target file name: " << flush;
        fileName = cin.readLine();

        if (QFile::exists(fileName)) {
            QString order;

            do {
                cout << "File \"" << fileName << "\" does already exist. Do you want to overwrite it(Y/n)? "
                     << flush;
                cin >> order;
            } while (order != "Y" && order != "n");

            if (order == "Y") {
                break;
            }
        } else {
            break;
        }

        cin.readLine();
    }

    QFile data(fileName);
    data.open(QIODevice::WriteOnly);
    QTextStream out(&data);
    out << str;
    data.close();

    cout << "Read data from the file - watch for errors." << endl;
    if (data.open(QIODevice::ReadOnly)) {
        QTextStream in(&data);

        int lucky2;
        in >> newstr >> lucky2;
        if (lucky2 != lucky) {
            cerr << "ERROR! Wrong " << newstr << lucky2 << endl;
        } else {
            cout << newstr << " OK" << endl;
        }

#ifdef Q2
        int pi2;
#else
        float pi2;
#endif
        in >> newstr >> pi2;
        if (pi2 != pi) {
            cerr << "ERROR! Wrong " << newstr << pi2 << endl;
        } else {
            cout << newstr << " OK" << endl;
        }

#ifdef Q2
        int e2;
#else
        double e2;
#endif
        in >> newstr >> e2;
        if (e2 != e) {
            cerr << "ERROR! Wrong " << newstr << e2 << endl;
        } else {
            cout << newstr << " OK" << endl;
        }

        data.close();
    }

    cout << "Read from file line-by-line" << endl;
    if (data.open(QIODevice::ReadOnly)) {
        QTextStream in(&data);

        while (!in.atEnd()) {
            newstr = in.readLine();
            cout << newstr << endl;
        }

        data.close();
    }
    
    //QFile::remove(fileName);
    
    return 0;
}