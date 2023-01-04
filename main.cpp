#include <iostream>

auto func_add(auto A, auto B)
{
    return A + B;
}

int main()
{
    int Num1{5};
    double Num2{10};
    auto Result = func_add(Num1, Num2);
    std::cout << "Size: " << sizeof(Result) << std::endl;
}