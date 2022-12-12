#include <iostream>

int main()
{    

    int A = 10, B = 20;

    [A, B]()
    {
        // A++; Compiler error
        std::cout << "A: " << A << " B: " << B << std::endl;
    }();

    [&A, &B]()
    {
        A++;
        std::cout << "A: " << A << " B: " << B << std::endl;
    }();

    // Access by copy
    [=]()
    {
        // B++; Compiler error
        std::cout << "A: " << A << " B: " << B << std::endl;
    }();

    // Access by references
    [&]()
    {        
        B++;
        std::cout << "A: " << A << " B: " << B << std::endl;
    }();
}