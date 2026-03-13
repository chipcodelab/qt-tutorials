/*!
 *
 * Operators in C C++
 *
 * Input and Output - qdebug
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
    qInfo() << "You are" << age << "Years old";

    qInfo() << "Information";
    qDebug() << "Debug";
    qWarning() << "Warning";
    qCritical() << "Critical";
    qFatal("Test Crash !!!!");

    return a.exec();
}
