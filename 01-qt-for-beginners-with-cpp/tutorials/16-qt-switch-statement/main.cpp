/*!
 *
 * Flow Control in C C++
 *
 * Flow control - switch statement.
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

    /*!
     * Switch statement
     */

    switch (age) {
    case 0:
        qFatal("You did not enter a valid age");
        break;
    case 16:
        qInfo() << "You can drive";
        break;
    case 18:
        qInfo() << "You can vote";
        break;
    case 21:
        qInfo() << "You can drink";
        break;
    case 67:
        qInfo() << "You can retire";
        break;
    default:
        qInfo() << "You entered your age as a " << age << ".";
        break;
    }

    return a.exec();
}
