/*!
 *
 * Flow Control in C C++
 *
 * Flow control - If, else if, else statement
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

    if (age > 18) {
        qInfo() << "You are over 18 years old!";
    } else if(age < 12) {
        qInfo() << "You are not even a teen yet!";
    } else {
        qInfo() << "You are not over 18 years old!";
    }

    return a.exec();
}
