/*!
 *
 * Flow Control in C C++
 *
 * Flow control - If, else if, else statement combined in to single line. Ternary statement.
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
     * Ternary statement - if and else combine in to single line.
     */
    age > 0 && age <= 130 ? qInfo("You entered a valid age.") : qFatal("You did not enter a valid age!");

    return a.exec();
}
