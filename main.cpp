#include <iostream>

int main()
{          
    int ItemCount{-3};
    if (ItemCount)
    {
        std::cout << "We have items in the bag" << std::endl;
    }
    else
    {
        std::cout << "We have no item in the bag" << std::endl;
    }
    std::cout << static_cast<bool>(ItemCount) << std::endl;
}
