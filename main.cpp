#include <iostream>

int main()
{
    bool RedLight (true);
    bool GreenLight (false);

    if (RedLight)
    {
        std::cout << "STOP!" << std::endl;
    }

    std::cout << "Green light is: " << GreenLight << std::endl;
    std::cout << std::boolalpha; // Forces the output format to true / false
    std::cout << "Red light is: " << RedLight << std::endl;

    std::cout << "Size of boolean: " << sizeof(bool) << std::endl;
}