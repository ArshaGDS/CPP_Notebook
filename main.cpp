#include <iostream>
#include <bitset>

int main()
{                  
    short int Number = 3;

    // Shifting right, divides by 2^n
    short int Right = static_cast<short int>(Number >> 1);
    std::cout << "Right (Dec): " << Right << " (Bin): " << std::bitset<16>(Right) << std::endl;

    // Shifting left, multiplies by 2^n
    short int Left = static_cast<short int>(Number << 1);
    std::cout << "Left  (Dec): " << Left << " (Bin): " << std::bitset<16>(Left) << std::endl;

    return 0;
}