#include <iostream>
#include <iomanip>

int main()
{
    float number1 (1.123456789f);
    double number2 (1.123456789);
    long double number3 (1.123456789);

    std::cout << std::setprecision(10); // Set print decimal number in std::cout

    std::cout << "Number1: " << number1 << " Size: " << sizeof(number1) << std::endl;
    std::cout << "Number2: " << number2 << " Size: " << sizeof(number2) << std::endl;
    std::cout << "Number3: " << number3 << " Size: " << sizeof(number3) << std::endl;

    double number4 (1.222e8); // Multiply with 10 to the power of 8
    std::cout << "Number4: " << number4 << " Size: " << sizeof(number4) << std::endl;

    double number5 (1.222e-8); // Multiply with 10 to the power of -8
    std::cout << "Number5: " << number5 << " Size: " << sizeof(number5) << std::endl;

}