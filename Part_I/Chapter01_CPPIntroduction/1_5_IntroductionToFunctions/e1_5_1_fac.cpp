// 2015-05-21T13:24+08:00
// P17
// g++ -Wall -std=c++11 -o fac.out e1_5_1_fac.cpp 

/* Computes and prints n! for a given n.
 * Uses several basic elements of C++.
 * Based on example 1.1.
 */

#include <iostream>
#include <limits>

int main()
{
    // Declarations of variables
#if 0
    int fact(1); // C++ style initialization syntax
#else
    // Q3: Change the program so that it can produce valid results for larger input values.
    long long fact(1); // C++ style initialization syntax
#endif
    decltype(fact) factArg = 0; // C style initialization syntax

    do {
        // Uses insertion operator to insert data into the output stream.
        // It is the same as:
        //   std::cout.operator<<("Factorial of: ");
        // however, this one is the more elegant and readable infix syntax.
        std::cout << "Factorial of: ";
        std::cin >> factArg;

        if (std::cin.fail() || std::cin.eof()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            factArg = -1;
            std::cout << "No numeric values, please!" << std::endl;
        } else if (factArg < 0) {
            std::cout << "No negative values, please!" << std::endl;
        }
    } while (factArg < 0);

    decltype(fact) i = 2;
    auto largest = fact;
    while (i <= factArg) {
        fact = fact * i;

        if (fact / i == largest) {
            largest = fact;
        } else {
            break;
        }

#ifndef NDEBUG
        std::cout << i << "! = " << fact << std::endl;
#endif

        i = i + 1;
    }

    // The insertion operator can be chained.
    if (largest != fact) {
        // Q2: Determine the largest input value that can produce a valid output.
        std::cout << i - 1 << "! = " << largest << std::endl;
    } else {
        std::cout << "The Facorial of " << factArg << " is: " << fact << std::endl;
    }

    return 0;
}
// References:
// https://github.com/myd7349/Ongoing-Study/blob/master/cpp/C%2B%2B11/integer_extraction_test/integer_extraction_test.cpp