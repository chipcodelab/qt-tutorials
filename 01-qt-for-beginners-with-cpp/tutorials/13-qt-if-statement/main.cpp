/*!
 *
 * Flow Control in C C++
 *
 * Flow control - If statement
 *
 */

#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

/*!
 * \brief main - starting point
 * \param argc - argument count
 * \param argv - arguments
 * \return int - exit value of the application
 */
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 0;
    qInfo() << "Enter your age:";
    cin >> age;

    if (age == 0) qFatal("Not a valid age!"); //! True or False

    qInfo() << "You entered:" << age;

    if (age < 18){ //! True, runs the code!
        qInfo() << "You are NOT an adult!";
        qInfo() << "Come back when you are older!!!";
    }

    if (age < 21 && age >= 18) qInfo() << "You are not REALY an adult yet!";

    if (age >=21) qInfo() << "You are an adult";

    if (age > 120) qCritical() << "How can you be that old!!!";

    qInfo() << "Done";


    return a.exec();
}
