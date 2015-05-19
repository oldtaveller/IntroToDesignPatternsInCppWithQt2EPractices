// 2015-05-18T20:11+08:00
#include <iostream>

void foo(int n)
{
    std::cout << n << " is a nice int." << std::endl;
}

void foo(double x)
{
    std::cout << x << " is a nice double." << std::endl;
}

void foo(bool b)
{
    std::cout << "Always be " << (b ? "true" : "false") << " to your bool." << std::endl;
}

int main()
{
    // With three overloaded versions of the function, no type conversions are
    // necessary.
    foo(5);
    foo(6.7);
    foo(true);

    return 0;
}