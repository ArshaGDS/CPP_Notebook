#include <iostream>

int main()
{              
    int array[]{0,1,2,3,4,5,6,7,8,9};
    for (int index : array)
    {
        std::cout << "Index: " << index << std::endl;
    }    
}
