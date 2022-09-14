#include <iostream>

int main()
{
    int Zero{}; // Initializes to zero (by default)
    std::cout << Zero << std::endl; // Output: 0

    int One(1);
    std::cout << One << std::endl; // Output: 1

    int number(1.2); // Safe way
    // int number2{1.2}; Compiler error: narrowing conversion of '1.2e+0' from 'double' to 'int'
    std::cout << number << std::endl; // Output: 1, The decimal part will be removed

    // -----------------------------------------

    std::cout << "Size of int variable: " << sizeof(One) << std::endl;
}