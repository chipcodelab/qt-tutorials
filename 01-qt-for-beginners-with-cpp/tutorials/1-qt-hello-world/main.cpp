/*!
 *
 * Console print application - Hello World
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
    qInfo() << "Hello World"; //! print Hello World
    return a.exec();
}

