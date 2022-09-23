#include <iostream>

int main()
{              
    int number1{10};
    int number2{20};
    int number3{25};
    int result{ (number1 *= ++number2, number3 - number2) };
    std::cout << number1 << std::endl; // 210
    std::cout << number2 << std::endl; // 21
    std::cout << number3 << std::endl; // 25
    std::cout << result  << std::endl; // 4 -> number3 - number2 -> 25 - 21
}
