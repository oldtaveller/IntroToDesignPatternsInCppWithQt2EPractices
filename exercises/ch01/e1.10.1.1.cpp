// 2015-05-27T16:15+08:00
// P33: Exercise 1.10.1.1
// Based on example 1.11

// g++ -Wall e1.10.1.cpp
// g++ -Wall -DQ2 e1.10.1.cpp

#include <cstdio>
#include <fstream>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>

int main()
{
    std::ostringstream strbuf;

    int lucky = 7;
    float pi = 3.14f;
    double e = 2.71;

    std::cout << "An in-memory stream" << std::endl;
    strbuf << "luckynumber: " << lucky << std::endl
           << "pi: " << pi << std::endl
           << "e: " << e << std::endl;

    // Converts the stringstream to string
    std::string strval = strbuf.str();
    std::cout << strval;

    // Gets the file name from the user
    std::string fileName;
    while (true) {
        std::cout << "Input target file name: ";
        std::getline(std::cin, fileName);

        std::ifstream inf(fileName.c_str());
        if (inf) {
            inf.close();
            
            std::string order;
            do {
                std::cout << "File \"" << fileName << "\" does already exist. Do you want to overwrite it(Y/n)? ";
                std::cin >> order;
            } while (order != "Y" && order != "n");

            if (order == "Y") {
                break;
            }
        } else {
            break;
        }

#if 0
        while (std::cin && std::cin.get() != '\n') {}
#else
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
#endif
    }

    std::ofstream outf; // An output file stream
    // Since C++11, ifstream and ofstream has an overloaded form of `open` method
    // that accepts a STL string object as the file name.
    // So, in C++11, it's unnecessary to call `c_str()` any more.  
    outf.open(fileName.c_str()); // Creates (or overwrites) a disk file for output 
    outf << strval;
    outf.close();

    std::cout << "Read data from the file - watch for errors." << std::endl;

    std::string newstr;
    std::ifstream inf; // An input file stream
    
    inf.open(fileName.c_str());
    if (inf) { // Make sure the file exists before attempting to read
        int lucky2;
        inf >> newstr >> lucky2;
        if (lucky != lucky2) {
            std::cerr << "ERROR! Wrong " << newstr << lucky2 << std::endl;
        } else {
            std::cout << newstr << " OK" << std::endl;
        }

#ifdef Q2
        int pi2;
#else
        float pi2;
#endif
        inf >> newstr >> pi2;
        if (pi2 != pi) {
            std::cerr << "ERROR! Wrong " << newstr << pi2 << std::endl;
        } else {
            std::cout << newstr << " OK" << std::endl;
        }

#ifdef Q2
        int e2;
#else
        double e2;
#endif
        inf >> newstr >> e2;
        if (e2 != e) {
            std::cerr << "ERROR! Wrong " << newstr << e2 << std::endl;
        } else {
            std::cout << newstr << " OK" << std::endl;
        }

        inf.close();
    }

    std::cout << "Read from file line-by-line" << std::endl;
    inf.open(fileName.c_str());
    if (inf) {
        while (!inf.eof()) {
            std::getline(inf, newstr);
            std::cout << newstr << std::endl;
        }

        inf.close();
    }

    //std::remove(fileName.c_str());

    return 0; 
}