#include <iostream>

int main()
{
    auto Var1 (10);    // integer
    auto Var2 (10.1f); // float
    auto Var3 (10.1);  // double
    auto Var4 (10l);   // long
    auto Var5 (10ul);  // unsigned long
    auto Var6 (10ll);  // long long
    auto Var7 (true);  // boolean
    auto Var8 ("true");// string
    auto Var9 ('t');   // char

    std::cout << sizeof(Var1) << std::endl;
    std::cout << sizeof(Var2) << std::endl;
    std::cout << sizeof(Var3) << std::endl;
    std::cout << sizeof(Var4) << std::endl;
    std::cout << sizeof(Var5) << std::endl;
    std::cout << sizeof(Var6) << std::endl;
    std::cout << sizeof(Var7) << std::endl;
    std::cout << sizeof(Var8) << std::endl;
    std::cout << sizeof(Var9) << std::endl;
}