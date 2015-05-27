// 2015-05-25T16:01+08:00
// P17: Exercise 1.5.1.2
#include <iostream>
#include <limits>

// C = 5 / 9 *(F - 32) = (F - 32) / 1.8
double toCelsius(double fahrenheitTemp)
{
    return (fahrenheitTemp - 32.0) / 1.8;
}

// F = 9/5*C + 32 = 32 + C * 1.8
double toFahrenheit(double celsiusTemp)
{
    return 32.0 + celsiusTemp * 1.8;
}

int main()
{
    double temp;
    char unit;

    while (true) {
        do {
            std::cout << "Input the temperature to be converted(\"1 F\",\"20 C\", for example): ";

            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');            
            std::cin >> temp >> unit;
            
            if (!std::cin) {
                std::cerr << "Invalid input format!\n";
            }
        } while (!std::cin);

        switch (unit) {
          case 'C': {
            std::cout << temp << "C == " << toFahrenheit(temp) << "F" << std::endl;
            break;
          } 
          case 'F': {
            std::cout << temp << "F == " << toCelsius(temp) << "C" << std::endl;
            break;
          }
          default: {
            std::cerr << "Invalid unit(The unit should be \"C\" or \"F\").\n";
            break;
          }
        }
    }

    return 0;
}
