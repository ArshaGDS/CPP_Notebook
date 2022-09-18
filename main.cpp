#include <iostream>
#include <iomanip>
#include <bitset>

int main()
{                  
    unsigned short int num1{2};
    unsigned short int num2{2};
    constexpr unsigned short int WIDTH{10};

    std::cout << "Num1: " << std::setw(WIDTH) << std::bitset<sizeof(num1) * 8>(num1) << std::endl;
    std::cout << "Num2: " << std::setw(WIDTH) << std::bitset<sizeof(num2) * 8>(num2) << std::endl;
    std::cout << "Sum : " << std::setw(WIDTH) << std::bitset<sizeof(num2) * 8>(num1 ^ num2) << std::endl;
}