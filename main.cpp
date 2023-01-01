#include <iostream>

template <typename T>
T Maximum(T a, T b)
{
    return (a > b) ? a : b;
}

template <typename T0, typename T1>
T0 Sum(T0 a, T1 b)
{
    return a + b;
}


int main()
{    
    int a{5}, b{10};
    double c{1.5}, d{1.8};
    std::cout << Maximum(a, b) << std::endl;
    std::cout << Maximum(c, d) << std::endl;

    std::cout << Sum(a, d) << std::endl;
    std::cout << Sum<double>(a, b) << std::endl;
}