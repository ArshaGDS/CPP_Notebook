#include <iostream>
#include <iomanip>
#include <bitset>

int main()
{            
    constexpr unsigned short int WIDTH{21}; 

    unsigned short int var{3}; // 0011
    std::cout << std::left;
    std::cout << std::setw(WIDTH) << "original var: " << std::setw(WIDTH) << std::bitset<sizeof(var) * 8>(var) << std::endl;
    std::cout << std::setw(WIDTH) << "shifting left var: " << std::setw(WIDTH) << std::bitset<sizeof(var) * 8>(var << 1) << std::endl;
    std::cout << std::setw(WIDTH) << "after shift var: " << std::setw(WIDTH) << std::bitset<sizeof(var) * 8>(var) << std::endl;
    std::cout << std::setw(WIDTH) << "shift and store var: " << std::setw(WIDTH) << std::bitset<sizeof(var) * 8>(var <<= 1) << std::endl;
    std::cout << std::setw(WIDTH) << "var after shift: " << std::setw(WIDTH) << std::bitset<sizeof(var) * 8>(var) << std::endl;
}
