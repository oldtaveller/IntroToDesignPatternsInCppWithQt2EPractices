// 2015-05-30T19:34+08:00
// P43: Example 1.19
// ./clargs spam eggs "space wars" 123
#include <cstdlib>
#include <iostream>

// argv: the argument vector, is an array that contains all the command-line
//       strings.
// argc: the argument count, is the number of char arrays in argv.
// In *nix systems, the return value of a process is called its exit status.
// Presumably, the parent process can use the exit status to decide what
// to do next.
//int main(int argc, char *argv[])
int main(int argc, char * const argv[])
{
    std::cout << "argc = " << argc << std::endl;

    for (int i = 0; i < argc; ++i) {
        std::cout << "argv #" << i << " is " << argv[i] << std::endl;
    }

    int num = std::atoi(argv[argc - 1]);
    std::cout << num * 2 << std::endl;

    // If there is no return statement in the main() block, 0 will be returned
    // by default when the closing brace } is reached.
    return 0;
}
