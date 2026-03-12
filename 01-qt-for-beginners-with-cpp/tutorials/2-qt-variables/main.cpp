/*!
 *
 * Variables in Qt
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

    bool LightSwitch = false; //! Initialize boolean type variable named LightSwtich and assign value false
    qInfo() << "Is light switch on?" << LightSwitch; //! will print => false

    LightSwitch = true; //! change LightSwitch variable to true
    qInfo() << "Is light swtich on?" << LightSwitch; //! will print => true

    return a.exec();
}
