#include <iostream>

int main()
{          
    for (size_t x{1}, y{5}, z{0} ; y > 0 ; x++, y--, z += 2)
    {
        std::cout << "X: " << x << " Y: " << y << " z: " << z << std::endl;
    }
    std::cout << "-------------------" << std::endl;
}
