/*!
 *
 * Constants in C C++
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

    int motor_speed = 2250;
    const int motor_forward = 1;
    const int motor_backward = 2;
    int motor_direction;

    if (motor_speed > 0){
        motor_direction = motor_forward;
    }
    else{
        motor_direction = motor_backward;
    }

    qInfo() << "Motor Speed:" << motor_speed;
    qInfo() << "Motor Direction" << motor_direction;

    return a.exec();
}
