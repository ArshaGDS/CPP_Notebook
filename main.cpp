#include <iostream>

int main()
{          
    for (/* Initialize with zero */unsigned int i{} ; i < /*Hard code*/10; i++)
    {
        std::cout << "I Love C++" << std::endl;
    }
    std::cout << "-------------------" << std::endl;

    //------------------------------------------------------

    /*
        size_t size is different in compilers
    */

    for (size_t i{} ; i < 10; i++)
    {
        std::cout << "I Love C++" << std::endl;
    }
    std::cout << "-------------------" << std::endl;

    //------------------------------------------------------

    // Without hard code
    const unsigned int COUNT{10};
    for (unsigned int i{} ; i < COUNT; i++)
    {
        std::cout << "I Love C++" << std::endl;
    }
    std::cout << "-------------------" << std::endl;
}
