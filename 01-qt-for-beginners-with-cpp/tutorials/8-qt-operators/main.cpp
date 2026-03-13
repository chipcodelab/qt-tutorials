/*!
 *
 * Operators in C C++
 *
 * Arithmetic Operators
 *
 */

#include <QCoreApplication>
#include <QDebug>

/*!
 * Function declarations
 */

void arithmeticOperators();
void assignmentOperators();
void comparisonOperators();
void logicalOperators();

/*!
 * \brief main - starting point
 * \param argc - argument count
 * \param argv - arguments
 * \return int - exit value of the application
 */
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    arithmeticOperators(); //! Call arithmeticOperators function
    assignmentOperators(); //! Call assignmentOperators function
    comparisonOperators(); //! Call comparisonOperators function
    logicalOperators(); //! Call logicalOperators function

    return a.exec();
}

/*!
 * \brief arithmeticOperators
 * Addition
 * Subtraction
 * Multiplication
 * Division
 * Modulus
 * Increment
 * Decrement
 */
void arithmeticOperators() {
    qInfo() << "Arithmetic Operators";
    qInfo() << "====================";

    int x = 50;
    int y = 30;

    qInfo() << "x = " << x;
    qInfo() << "y = " << y;


    int addition = x+y;
    qInfo() << "Addition x+y:" << addition;

    int subtraction = x-y;
    qInfo() << "Subtraction x-y:" << subtraction;

    int multiplication = x*y;
    qInfo() << "Multiplication x*y:" << multiplication;

    int division = x/y;
    qInfo() << "Division x/y:" << division;

    int modulus = x%y;
    qInfo() << "Modulus x%y:" << modulus;

    int increment = ++x;
    qInfo() << "Increment: x++:" << increment;

    int decrement = --y;
    qInfo() << "Decrement: y--:" << decrement;

    qInfo() << "";
}

/*!
 * \brief assignmentOperators
 *
 */
void assignmentOperators() {
    qInfo() << "Assignment Operators";
    qInfo() << "====================";

    int x = 5;
    qInfo() << "x = " << x;

    qInfo() << "Simple Assignment = " << x; //! Simple Assignment => x=5
    qInfo() << "Addition Assignment += " << (x+3); //! Addition Assignment => x = x + 3
    qInfo() << "Subtraction Assignment -= " << (x-3); //! Subtraction Assignment => x = x - 3
    qInfo() << "Multiplication Assignment *= " << (x*3); //! Multiplication Assignment => x = x * 3
    qInfo() << "Division Assignment /= " << (x/3); //! Division Assignment => x = x / 3
    qInfo() << "Modulus Assignment %= " << (x%3); //! Modulus Assignment => x = x % 3
    qInfo() << "Left Shift Assignment <<= " << (x<<3); //! Left Shift Assignment => x = x << 3
    qInfo() << "Right Shift Assignment >>= " << (x>>3); //! Right Shift Assignment => x = x >> 3
    qInfo() << "Bitwise AND Assignment &= " << (x&3); //! Bitwise AND Assignment => x = x & 3
    qInfo() << "Bitwise OR Assignment |= " << (x|3); //! Bitwise OR Assignment => x = x | 3
    qInfo() << "Bitwise XOR Assignment ^= " << (x^3); //! Bitwise XOR Assignment => x = x ^ 3
    qInfo() << "";
}

/*!
 * \brief comparisonOperators
 */
void comparisonOperators() {
    qInfo() << "Compairison Operators";
    qInfo() << "=====================";

    int x = 5;
    int y = 7;

    qInfo() << "x = " << x;
    qInfo() << "y = " << y;

    qInfo() << "x == y" << (x==y); //!Equal to
    qInfo() << "x != y" << (x!=y); //!Not equal
    qInfo() << "x > y" << (x > y); //!Greater than
    qInfo() << "x < y" << (x < y); //!Less than
    qInfo() << "x >= y" << (x >= y); //!Greater than or equal to
    qInfo() << "x <= y" << (x <= y); //!Less than or equal to

}

/*!
 * \brief logicalOperators
 */
void logicalOperators() {
    qInfo() << "Logical Operators";
    qInfo() << "=================";

    int x = 15;
    int y = 18;

    qInfo() << "x = " << x;
    qInfo() << "y = " << y;

    qInfo() << "(x > 10 &&  y > 12)" << (x > 10 &&  y > 12); //!Logical AND
    qInfo() << "(x > 30 ||  y > 12)" << (x > 30 ||  y > 12); //!Logical OR
    qInfo() << "!(x > 10 &&  y > 12)" << !(x > 10 &&  y > 12); //!Logical NOT
}
