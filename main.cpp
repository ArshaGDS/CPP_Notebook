#include <iostream>

int main()
{              
    int array[5];
    std::srand(time(0));
    for (int index = 0; index < std::size(array); index++)
    {
        array[index] = std::rand() % 11;
    }
    
    for (int index = 0; index < std::size(array); index++)
    {
        std::cout << *(array + index) << std::endl;
    }    
}
