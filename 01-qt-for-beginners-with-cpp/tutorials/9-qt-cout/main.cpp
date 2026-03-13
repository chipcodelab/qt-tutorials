/*!
 *
 * Operators in C C++
 *
 * Input and Output - cout
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

    /*!
     * C++ Way
     */

    cout << "Hello" << endl;

    int age = 34;
    cout << age;
    cout << endl;
    cout << flush;

    /*!
     * Qt Way (For Qt projects, this is much better way to use)
     */

    qInfo() << "Hello";


    return a.exec();
}
