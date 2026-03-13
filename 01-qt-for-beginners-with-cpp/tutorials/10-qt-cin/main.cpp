/*!
 *
 * Operators in C C++
 *
 * Input and Output - cin
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
    qInfo() << "Please enter an age:";
    cin >> age;
    qInfo() << "You entered:" << age;

    return a.exec();
}
