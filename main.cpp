#include <iostream>
#include <bitset>

int main()
{              
    unsigned short int data {8};
    std::cout << std::bitset<16>(data) << std::endl;

    return 0;
}