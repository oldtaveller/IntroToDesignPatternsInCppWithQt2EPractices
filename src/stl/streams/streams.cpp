// 2015-05-26T17:27+08:00
// P29: Example 1.11 1.12 1.13
// This example creates some strings from characters and numerics and writes
// them to a file.
#include <ciso646>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main()
{
    // ---- Example 1.11
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

    std::ofstream outf; // An output file stream
    outf.open("mydata"); // Creates (or overwrites) a disk file for output 
    outf << strval;
    outf.close();

    std::cout << "Read data from the file - watch for errors." << std::endl;

    // ---- Example 1.12
    std::string newstr;
    std::ifstream inf; // An input file stream
    
    inf.open("mydata");
    if (inf) { // Make sure the file exists before attempting to read
        int lucky2;
        inf >> newstr >> lucky2;
        if (lucky != lucky2) {
            std::cerr << "ERROR! Wrong " << newstr << lucky2 << std::endl;
        } else {
            std::cout << newstr << " OK" << std::endl;
        }

        float pi2;
        inf >> newstr >> pi2;
        if (pi2 != pi) {
            std::cerr << "ERROR! Wrong " << newstr << pi2 << std::endl;
        } else {
            std::cout << newstr << " OK" << std::endl;
        }

        double e2;
        inf >> newstr >> e2;
        if (e2 != e) {
            std::cerr << "ERROR! Wrong " << newstr << e2 << std::endl;
        } else {
            std::cout << newstr << " OK" << std::endl;
        }

        inf.close();
    }

    // ---- Example 1.13
    std::cout << "Read from file line-by-line" << std::endl;
    inf.open("mydata");
    if (inf) {
        while (not inf.eof()) {
            std::getline(inf, newstr);
            std::cout << newstr << std::endl;
        }

        inf.close();
    }

    std::remove("mydata");

    return 0; 
}