// 2015-05-16T22:53+08:00
// P5
// g++ -Wall -o fac.out e1_1_fac.cpp 

/* Computes and prints n! for a given n.
 * Uses several basic elements of C++.
 */

#include <iostream>

int main()
{
    // Declarations of variables
    int factArg = 0; // C style initialization syntax
    int fact(1); // C++ style initialization syntax

    do {
        // Uses insertion operator to insert data into the output stream.
        // It is the same as:
        //   std::cout.operator<<("Factorial of: ");
        // however, this one is the more elegant and readable infix syntax.
        std::cout << "Factorial of: ";
        std::cin >> factArg;

        if (factArg < 0) {
            std::cout << "No negative values, please!" << std::endl;
        }
    } while (factArg < 0);

    int i = 2;
    while (i <= factArg) {
        fact = fact * i;
        i = i + 1;
    }

    // The insertion operator can be chained.
    std::cout << "The Facorial of " << factArg << " is: " << fact << std::endl;
    return 0;
}