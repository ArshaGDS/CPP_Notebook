#include <iostream>
#include <string>

int main()
{
    std::string StrNum1{"1"};
    std::string StrNum2{"1.2f"};
    std::string StrNum3{"1.23456789"};

    int Num1 = std::stoi(StrNum1);
    int Num2 = std::stof(StrNum2);
    int Num3 = std::stod(StrNum3);

    std::cout << "Num1: " << sizeof(Num1) << std::endl;
    std::cout << "Num2: " << sizeof(Num2) << std::endl;
    std::cout << "Num3: " << sizeof(Num3) << std::endl;
}