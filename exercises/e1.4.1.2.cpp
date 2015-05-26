// 2015-05-18T19:34+08:00
// P10: Exercise 1.4.1.2
#include <iostream>
#include <string>

int main()
{
    const int THISYEAR = 2015;
    std::string yourName;
    int birthYear;

    std::cout << "What is your name? " << std::flush;

    // Q1: What's the differences in behavior between cin >> and getline?
    std::cin >> yourName;
    std::getline(std::cin, yourName);

    std::cout << "What year were you born? ";
    // Q2: What happens if you enter a non-numeric value for the birth year?
    // A: ISO C++11 22.4.2.1.2
    std::cin >> birthYear;
    if (!std::cin) {
      std::cerr << "Invalid input for birth year. We got: " << birthYear << std::endl;
    } else {
        std::cout << "Your name is " << yourName
                  << " and you are approximately "
                  << (THISYEAR - birthYear)
                  << " years old. " << std::endl;
    }

    return 0;
}