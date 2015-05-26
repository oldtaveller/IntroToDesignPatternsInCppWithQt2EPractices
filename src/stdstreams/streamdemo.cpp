// 2015-05-26T12:05+08:00
// P27: Example 1.9
// Demonstrates the use of manipulators applied to the console output stream.
#include <iostream>

int main()
{
    int num1(1234), num2(2345);

    std::cout << std::oct << num2 << '\t'
              << std::hex << num2 << '\t'
              << std::dec << num2 << std::endl;

    std::cout << (num1 < num2) << std::endl;
    std::cout << std::boolalpha << (num1 < num2) << std::endl;

    double dub(1357);

    std::cout << dub << '\t'
              << std::showpos << dub << '\t'
              << std::showpoint << dub << std::endl;

    dub = 1234.5678;
    std::cout << dub << '\t'
              << std::fixed << dub << '\t'
              << std::scientific << dub << '\t'
              << std::noshowpos << dub << std::endl;
                  
    return 0;
}
