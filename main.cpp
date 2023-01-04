#include <iostream>

template <typename T0, typename T1>
auto Maximum(T0 A, T1 B) -> decltype(( A > B) ? A : B); // Trailing return type

int main()
{
    int i{5};
    char c{10};
    auto Max1 = Maximum(c, i);
    std::cout << sizeof(Max1) << std::endl;
}

template <typename T0, typename T1>
auto Maximum(T0 A, T1 B) -> decltype((A > B) ? A : B)
{
    return (A > B) ? A : B;
}