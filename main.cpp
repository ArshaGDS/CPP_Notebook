#include <iostream>

int main()
{
    char A ('A');
    char B {'B'};
    char APrime (65);

    std::cout << "Size of char variable: " << sizeof(char) << std::endl;
    std::cout << A << " " << B << " " << APrime << std::endl;
    std::cout << static_cast<int>(APrime) << std::endl;
}