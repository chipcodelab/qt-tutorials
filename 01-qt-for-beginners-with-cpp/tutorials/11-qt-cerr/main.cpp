/*!
 *
 * Operators in C C++
 *
 * Input and Output - cerr
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
     * C++ Standard out
     */

    cout << "Standard out" << endl;

    /*!
     * C++ Standard error
     */
    cerr << "Standard error" << endl;

    return a.exec();
}
