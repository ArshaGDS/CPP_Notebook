#include <iostream>
#include <string>

int main()
{    
    typedef unsigned int UInt; // Not recommended (Old way)
    using HugeInt = unsigned long long int; // Recommended in modern C++

    HugeInt HugeNume {18'446'744'073'709'551ull};
    std::cout << HugeNume << std::endl;   

    UInt uint {1234};
    std::cout << uint << std::endl;   
}