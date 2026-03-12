/*!
 *
 * Data types in C C++
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

    int motor_speed = 2250; //! create integer type variable named motor_speed and assign value as 2250
    double controller_temp = 45.6; //! create double type variable named controller_temp and assign value as 45.6
    signed int motor_temp = -10; //! create signed integer type variable named motor_temp and assign value as -10

    qInfo() << "Motor Speed:" << motor_speed; //! print => Motor Speed: 2250
    qInfo() << "Controller Temperature:" << controller_temp; //!print => Controller Temperature: 45.6
    qInfo() << "Motor Temperature:" << motor_temp; //!print => Motor Temperature: -10

    qInfo() << "size of motor_speed:" << sizeof(motor_speed); //!print => size of motor_speed: 4
    qInfo() << "size of controller_temp:" << sizeof(controller_temp); //!print => size of controller_temp: 8
    qInfo() << "size of motor_temp:" << sizeof(motor_temp); //!print => size of motor_temp: 4

    return a.exec();
}
