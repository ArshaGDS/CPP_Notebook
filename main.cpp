#include <iostream>
#include <limits>

int main()
{
    std::cout << "Short Min " << std::numeric_limits<short>::min()
        << " Short Max " << std::numeric_limits<short>::max() << std::endl; 

    std::cout << "Int Min " << std::numeric_limits<int>::min()
        << " Int Max " << std::numeric_limits<int>::max() << std::endl; 

    std::cout << "Unsigned Int Min " << std::numeric_limits<unsigned int>::min()
        << " Unsigned Int Max " << std::numeric_limits<unsigned int>::max() << std::endl; 

    std::cout << "Unsigned Short Int Min " << std::numeric_limits<unsigned short int>::min()
        << " Unsigned Short Int Max " << std::numeric_limits<unsigned short int>::max() << std::endl; 
}