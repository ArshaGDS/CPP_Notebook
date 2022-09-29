#include <iostream>
#include <iomanip>

int main()
{              
    // Wrong way, because the answer is always the same
    std::cout << "RAND_MAX: " << RAND_MAX << std::endl; // 32767 in GCC compiler and 64bit system

    int randomNumber1 = std::rand(); // between 0 and RAND_MAX
    std::cout << "randomNumber1: " << randomNumber1 << std::endl;

    int randomNumber2 = std::rand() % 11; // between 0 and 10
    std::cout << "randomNumber2: " << randomNumber2 << std::endl;

    int randomNumber3 = (std::rand() % 11) + 1; // between 1 and 10
    std::cout << "randomNumber3: " << randomNumber3 << std::endl;

    //-----------------------------------------------------------------

    
    std::srand(std::time(0));
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << std::rand() % 20 << " . ";
    }
    std::cout << std::endl;

}
