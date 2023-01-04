#include <iostream>
#include <type_traits>

template<typename T>
void PrintNumber(T n)
{
    static_assert(std::is_integral_v<T>, "PrintNumber can only be called with integral types");
    std::cout << n << std::endl;
}


int main()
{
   PrintNumber(5);
   // PrintNumber(5.5); Compile error
}