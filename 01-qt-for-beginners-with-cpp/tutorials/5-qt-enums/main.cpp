/*!
 *
 * Enums in C C++
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


    enum BaudRate
    {
        BAUD_1200    = 1200,
        BAUD_2400    = 2400,
        BAUD_4800    = 4800,
        BAUD_9600    = 9600,
        BAUD_19200   = 19200,
        BAUD_38400   = 38400,
        BAUD_57600   = 57600,
        BAUD_115200  = 115200,
        BAUD_230400  = 230400,
        BAUD_460800  = 460800,
        BAUD_921600  = 921600
    };

    BaudRate baud_rate = BaudRate::BAUD_115200;

    qInfo() << "BaudRate:" << baud_rate; //! prints => BaudRate: 115200

    return a.exec();
}
