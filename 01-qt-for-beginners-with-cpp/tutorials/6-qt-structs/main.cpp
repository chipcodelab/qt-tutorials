/*!
 *
 * Structs in C C++
 *
 */

#include <QCoreApplication>
#include <QDebug>

enum Colours {black, red, green, blue};

//Precursor to classes
struct product{
    int weight;
    double value;
    Colours colour;
};

/*!
 * \brief main - starting point
 * \param argc - argument count
 * \param argv - arguments
 * \return int - exit value of the application
 */
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    product laptop; //! No assignment
    qInfo() << "Size of Struct" << sizeof(laptop); //! Prints => Size of Struct 24

    laptop.colour = Colours::green;
    laptop.value = 600.59;
    laptop.weight = 3;

    qInfo() << "Weight:" << laptop.weight; //! Prints => Weight 3
    qInfo() << "Value:" << laptop.value; //! Prints => Value 600.59
    qInfo() << "Colour" << laptop.colour; //! Prints => Colour 2

    return a.exec();
}
