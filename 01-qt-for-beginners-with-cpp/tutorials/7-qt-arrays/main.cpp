/*!
 *
 * Arrays in C C++
 *
 */

#include <QCoreApplication>
#include <QDebug>

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

    //! Method 1
    int ages[4] = {23, 7, 34, 1000};
    ages[2] = 69;

    qInfo() << "Array Index 0:" << ages[0];
    qInfo() << "Array Index 1:" << ages[1];
    qInfo() << "Array Index 2:" << ages[2];
    qInfo() << "Array Index 3:" << ages[3];
    qInfo() << "Address of the ages[] array:" << ages;

    //! Method 2 (Need to inclue <array> and use namespace as std)
    array<int, 5> cars;
    cars[0] = 5;
    cars[1] = 67;
    cars[2] = 99;
    cars[3] = 238;
    cars[4] = 56;

    qInfo() << "Array Index 0:" << cars[0];
    qInfo() << "Array Index 1:" << cars[1];
    qInfo() << "Array Index 2:" << cars[2];
    qInfo() << "Array Index 3:" << cars[3];
    qInfo() << "Array Index 4:" << cars[4];

    qInfo() << "Size:" << cars.size();
    qInfo() << "Sizeof:" << sizeof(cars);
    qInfo() << "Last:" << cars[cars.size() - 1];

    return a.exec();
}
