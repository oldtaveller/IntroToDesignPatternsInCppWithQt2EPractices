// 2015-05-18T20:04+08:00
// P12: Example 1.4
#include <iostream>

void foo(int n)
{
    std::cout << n << " is a nice number." << std::endl;
}

#define FOO(f) std::cout << "before call: " << f << std::endl; foo(f)

int main()
{
    // Call the same function with three different numerical types.
    // In this case, automatic type conversions permit the function
    // to be called three times.
    FOO(5);
    FOO(6.7);
    FOO(true);

    return 0;
}