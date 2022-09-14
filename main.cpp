#include <iostream>

int Sum(const int& number1, const int& number2)
{    
    return number1 + number2;
}

int main()
{
    int num1 {1};    
    int num2 {2};
    int sum { num1 + num2 };
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << sum << std::endl;
    num1 = int {2};    
    std::cout << Sum(num1, num2) << std::endl;
}