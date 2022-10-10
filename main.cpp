#include <iostream>

int main()
{              
    int array[10];
    std::srand(time(0));
    for (int index = 0; index < std::size(array); index++)
    {
        array[index] = std::rand() % 11;
        //array[index] = index;
        std::cout << array[index] << (index + 1 < std::size(array) ? " . " : "");
    }
    std::cout << std::endl;
    
    int* arrayPtr {array};  
    std::cout << arrayPtr << ": " << *arrayPtr << std::endl;
    std::cout << (arrayPtr + 8) << ": " << *(arrayPtr + 8)  << std::endl;
}
