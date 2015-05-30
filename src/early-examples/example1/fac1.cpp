// 2015-05-30T16:50+08:00
// P34: Example 1.15

// qmake -project "CONFIG += console" "QT += core widgets"
// qmake
// make

#include <QtWidgets> // for QApplication, QInputDialog

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QTextStream cout(stdout);

    // Declarations of variables
    QMessageBox::StandardButton answer = QMessageBox::Yes;

    do {
        // local variables to the loop:
        int factArg = 0;
        int fact(1);

        factArg = QInputDialog::getInt(0, "Factorial Calculator", 
            "Factorial of:", 1);
        cout << "User entered: " << factArg << endl;

        int i = 2;
        while (i <= factArg) {
            fact *= i;
            ++i;
        }

        QString response = QString("The factorial of %1 is %2.\n%3")
            .arg(factArg).arg(fact)
            .arg("Do you want to compute another factorial?");
        answer = QMessageBox::question(0, "Play again?", response, 
            QMessageBox::Yes | QMessageBox::No);
    } while (answer == QMessageBox::Yes);

    return 0;
}
