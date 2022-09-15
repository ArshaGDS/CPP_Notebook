#include <iostream>
#include <cmath>

int main()
{
    double DoubleNumber (7.7);

    std::cout << "Rounded to floor: " << std::floor(DoubleNumber) << std::endl;
    std::cout << "Rounded to ceil: " << std::ceil(DoubleNumber) << std::endl;
    std::cout << "-----------------------------------" << std::endl;

    int IntNumber (-5000);
    
    std::cout << "abs of DoubleNumber: " << std::abs(DoubleNumber) << std::endl;
    std::cout << "abs of IntNumber: " << std::abs(IntNumber) << std::endl;
    std::cout << "-----------------------------------" << std::endl;

    // exp: f(x) = e ^ x, where e = 2.71828
    std::cout << "The exponential of 10 is: " << std::exp(10) << std::endl;
    std::cout << "-----------------------------------" << std::endl;

    std::cout << "3 ^ 4 is: " << std::pow(3, 4) << std::endl;
    std::cout << "-----------------------------------" << std::endl;
}