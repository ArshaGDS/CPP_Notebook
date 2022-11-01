#include <iostream>
#include <string>

int main()
{
    std::string Message;
    {
        using namespace std::string_literals;
        Message = "Heyyy it's old school string in modern std string"s + " :D ";
    }

    std::string Message2{"UE" + 5};
    std::string Message3{"UE " + std::to_string(5)};
    std::cout << Message  << std::endl;
    std::cout << Message2 << std::endl;
    std::cout << Message3 << std::endl;
}