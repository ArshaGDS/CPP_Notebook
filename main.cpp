#include <iostream>

int main()
{
    double num1 = 1.1, num2 = 2.2;
    auto sum = static_cast<int>(num1 + num2);
    std::cout << "Sum: " << sum << " Size: " << sizeof(sum) << std::endl;

    //----------------------------------

    // not safe and old style (C style) cast
    double PI {3.14};
    int IntPI { (int)PI };
    std::cout << "Int PI: " << IntPI << " Size: " << sizeof(IntPI) << std::endl;
}