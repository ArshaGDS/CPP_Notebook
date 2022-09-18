#include <iostream>
#include <iomanip>
#include <bitset>

constexpr unsigned short int WIDTH{20};

constexpr unsigned int red_mask   {0xFF000000};
constexpr unsigned int green_mask {0x00FF0000};
constexpr unsigned int blue_mask  {0x0000FF00};
constexpr unsigned int alpha_mask {0x000000FF};

void SetColor(unsigned int Color)
{
    std::cout << std::left;
    std::cout << std::setw(WIDTH) << ((Color & red_mask) >> 24) << std::endl; 
    std::cout << std::setw(WIDTH) << ((Color & green_mask) >> 16) << std::endl; 
    std::cout << std::setw(WIDTH) << ((Color & blue_mask) >> 8) << std::endl; 
    std::cout << std::setw(WIDTH) << ((Color & alpha_mask) >> 0) << std::endl; 
}

int main()
{            
   SetColor(red_mask | alpha_mask);
}
