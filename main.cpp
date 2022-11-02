#include <iostream>
#include <string>

int main()
{
    std::string Empty;
    std::string Initialized{};
    std::string Str{"Str"};
    std::string Str2{"Str"};
    std::string Str3{"StringStringStringStringStringStringStringString"};

    std::cout << std::boolalpha << Empty.empty() << std::endl;
    std::cout << std::boolalpha << Initialized.empty() << std::endl;
    std::cout << std::boolalpha << Str.empty() << std::endl;

    std::cout << Empty.capacity() << std::endl;
    std::cout << Initialized.capacity() << std::endl;
    std::cout << Str.capacity() << std::endl;
    std::cout << Str2.capacity() << std::endl; 
    std::cout << Str3.capacity() << std::endl;

    std::string Str4{"Str"};
    Str4.reserve(100);
    std::cout << Str4.capacity() << std::endl;
    Str4.shrink_to_fit();
    std::cout << Str4.capacity() << std::endl;
}