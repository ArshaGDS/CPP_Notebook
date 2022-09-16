#include <iostream>
#include <iomanip>

// Can modify and initialized in compile time
constinit int num2(5);

int main()
{
    // Can't modify
    const int num1(15);
    const float PI(3.141516);
    // Can't modify and initialized in compile time
    constexpr int num3(3);

    std::cout << std::fixed; // show fix float value
    std::cout << PI << std::endl;    
    std::cout << num2 << std::endl;    
    num2 = PI;
    std::cout << num2 << std::endl;    

}