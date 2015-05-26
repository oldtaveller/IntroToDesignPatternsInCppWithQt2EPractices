// 2015-05-26T11:26+08:00
// P25: Example 1.7
// Demonstrates basic usage of STL strings.
#include <iostream>
#include <string>

int main()
{
    std::string s1("This "), s2("is a"), s3("string.");

    s1 += s2; // string concatenation
    std::string s4 = s1 + s3;
    std::string s5("The length of that string is: ");
    
    std::cout << s5 << s4.length() << " characters." << std::endl;

    std::cout << "Enter a sentence: " << std::endl;
    std::getline(std::cin, s2); // get the entire line

    std::cout << "Here is your sentence: \n" << s2 << std::endl;
    std::cout << "The length of your sentence is: " << s2.length() << std::endl;
    
    return 0;
}