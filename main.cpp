#include <iostream>

int main()
{    
    []()
    {
        std::cout << "Hi, I'm lambda function :D" << std::endl;
    };

    auto fun2 = []()
    {
        std::cout << "Hi from fun2" << std::endl;
    };
    fun2();

    // Call lambda function directly after definition
    []()
    {
        std::cout << "Execute after definition" << std::endl;
    }();

    [](int Age, std::string Name)
    {
        std::cout << "Name: " << Name << " Age: " << Age << std::endl;
    }(23, std::string{"Arsha"});

    int IntSum = [](int A, int B)
    {
        return A + B;
    }(4, 2);

    // Input type: Int, Output type: Float
    float FloatSum = [](int A, int B) -> float
    {
        return A + B;
    }(4.f, 2.f);
}