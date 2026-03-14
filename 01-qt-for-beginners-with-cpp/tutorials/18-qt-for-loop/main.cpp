/*!
 *
 * Flow Control in C C++
 *
 * Flow control - for loop
 *
 */

#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include <array>

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

    int max = 0;
    qInfo() << "Please enter a max";
    cin >> max;

    if(max <= 0) qFatal("Please enter a valid number next time!");

    /*!
     * for loop example 1
     */

    qInfo() << "For loop example 1";

    for(int i = 0; i < max; i++) {
        qInfo() << "i = " << i;
    }

    /*!
     * for loop example 2
     */

    qInfo() << "For loop example 2";

    array<int, 4> ages = {12, 34, 58, 44}; //! zero based indexed array

    for(int i = 0; i < ages.size(); i++) {
        qInfo() << "ages[" << i << "] =" << ages.at(i);
    }

    return a.exec();
}
