// 2015-05-17T22:58+08:00
// P9: Example 1.2
#include <iostream>
#include <string>

int main()
{
    const int THISYEAR = 2015;
    std::string yourName;
    int birthYear;

    std::cout << "What is your name? " << std::flush;
    std::cin >> yourName;

    std::cout << "What year were you born? ";
    std::cin >> birthYear;

    std::cout << "Your name is " << yourName
              << " and you are approximately "
              << (THISYEAR - birthYear)
              << " years old. " << std::endl;

    return 0;
}