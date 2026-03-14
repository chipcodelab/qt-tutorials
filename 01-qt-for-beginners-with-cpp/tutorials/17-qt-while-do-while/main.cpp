/*!
 *
 * Flow Control in C C++
 *
 * Flow control - while, do while loops.
 *
 */

#include <QCoreApplication>
#include <QDebug>

/*!
 * \brief main - starting point
 * \param argc - argument count
 * \param argv - arguments
 * \return int - exit value of the application
 */
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int start = 80;
    int max = 100;

    /*!
     * while loop - evaluate first
     */

    int i = start;
    while(i < max) {
        qInfo() << "While - " << i;
        i++;
    }

    qInfo("-------End While Loop-------");

    /*!
     * do while loop - evaluate last
     */

    i = start;
    do {
        qInfo() << "Do While - " << i;
        i++;
    } while(i < max);

    qInfo("-----End Do While Loop-----");



    return a.exec();
}
