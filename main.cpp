#include <iostream>
#include <iomanip>

int main()
{              
    int array[] {1, 2, 3, 4, 5, 6};

    std::cout << "Index 0: " << array[0] << std::endl;
    std::cout << "Index 1: " << array[1] << std::endl;
    std::cout << "Index 2: " << array[2] << std::endl;
    array[2] = 5;
    std::cout << "Index 2: " << array[2] << std::endl;

    unsigned short int WIDTH{30};
    std::cout << std::left;
    std::cout << std::setw(WIDTH) << "Size of Index 0: " << std::setw(WIDTH) << sizeof(array[0]) << std::endl;
    std::cout << std::setw(WIDTH) << "Size of array: " << std::setw(WIDTH) << sizeof(array) << std::endl;
    std::cout << std::setw(WIDTH) << "Item count: " << std::setw(WIDTH) << (sizeof(array) / sizeof(array[0])) << std::endl;
    std::cout << std::setw(WIDTH) << "Item count with std library: "<< std::setw(WIDTH)  << std::size(array) << std::endl;

    for(auto index : array)
    {
        std:: cout << index;
    }

    std:: cout << std::endl;

    for (unsigned short int index = 0; index < std::size(array); index++)
    {
        std:: cout << array[index];
    }
    
}
