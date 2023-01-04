#include <iostream>

template <typename T0, typename T1>
decltype(auto) Maximum(T0 A, T1 B)
{
    return (A > B) ? A : B;
}

int main()
{
    int i{5};
    char c{10};
    auto Max1 = Maximum(c, i);
    std::cout << sizeof(Max1) << std::endl;
}