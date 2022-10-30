#include <iostream>
#include <cctype>
#include <cstring>

int main()
{
    const char* MessageStr {"Hello World :D"};
    const char* MessageStr2{"Hello World :D"};
    const char* MessageStr3{"Hello World"};

    std::cout << "std::strcmp(MessageStr, MessageStr2)      : " << std::strcmp(MessageStr, MessageStr2) << std::endl;
    std::cout << "std::strcmp(MessageStr, MessageStr3)      : " << std::strcmp(MessageStr, MessageStr3) << std::endl;

    size_t n{3};
    std::cout << "std::strncmp(MessageStr2, MessageStr3, n) : " << std::strncmp(MessageStr2, MessageStr3, n) << std::endl;

    const char* result{MessageStr};
    char target{'l'};
    std::cout << std::strchr(MessageStr, target) << std::endl;
}