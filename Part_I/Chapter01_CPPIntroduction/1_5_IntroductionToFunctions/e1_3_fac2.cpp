// 2015-05-18T19:46+08:00
#include <iostream>

long factorial(long n)
{
    long ans = 1;

    for (long i = 2; i <= n; ++i) {
        ans = ans * i;
        if (ans < 0) {
            return -1;
        }
    }

    return ans;
}

int main()
{
    std::cout << "Please enter n: " << std::flush;
    long n;
    std::cin >> n;

    if (n >= 0) {
        long nfact = factorial(n);
        if (nfact < 0) {
            std::cerr << "overflow error: "
                      << n << " is too big." << std::endl;
        } else {
            std::cout << "factorial(" << n << ") = "
                      << nfact << std::endl;
        }
    } else {
        std::cerr << "Undefined: "
                  << "factorial of a negative number: " << n << std::endl;
    }
    return 0;
}