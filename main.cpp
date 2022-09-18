#include <iostream>
#include <iomanip>
#include <bitset>

int main()
{            
    constexpr unsigned short int WIDTH{21}; 

    unsigned char var{0b00000000};

    constexpr unsigned char bit_1{0b00000001};
    constexpr unsigned char bit_2{0b00000010};
    constexpr unsigned char bit_3{0b00000100};
    constexpr unsigned char bit_4{0b00001000};
    constexpr unsigned char bit_5{0b00010000};
    constexpr unsigned char bit_6{0b00100000};
    constexpr unsigned char bit_7{0b01000000};
    constexpr unsigned char bit_8{0b10000000};    

    std::cout << std::left;
    std::cout << std::setw(WIDTH) << "var: " << std::setw(WIDTH) << std::bitset<sizeof(var) * 8>(var) << std::endl;
    std::cout << std::setw(WIDTH) << "var: " << std::setw(WIDTH) << static_cast<int>(var) << std::endl;
    
    var |= (bit_1 | bit_3 | bit_5);
    std::cout << std::setw(WIDTH) << "var: " << std::setw(WIDTH) << std::bitset<sizeof(var) * 8>(var) << std::endl;
    std::cout << std::setw(WIDTH) << "var: " << std::setw(WIDTH) << static_cast<int>(var) << std::endl;
    // Reset to default
    var &= ~(bit_1 | bit_3 | bit_5);
    std::cout << std::setw(WIDTH) << "var: " << std::setw(WIDTH) << std::bitset<sizeof(var) * 8>(var) << std::endl;
    std::cout << std::setw(WIDTH) << "var: " << std::setw(WIDTH) << static_cast<int>(var) << std::endl;

    //-------------------------------------------------------------------------------------------


}
