#include <iostream>
#include <string>

int main()
{
    std::string Str1{"Hello"};
    std::string Str2{"World"};

    std::string Message1{Str1 + Str2};
    std::string Message2{Str1 + " " + Str2};
    std::string Message3{Str1.append(" " + Str2)};
    std::string Message4{"Hello" " " "World"};

    std::string Text1{"BlaBlaBlaBla"};
    std::string Text2{Text1.append(5, '!')};
    std::string Text3{Str1.append(Text2, Text1.length() - 5, 2)};

    std::cout << Message1 << std::endl;
    std::cout << Message2 << std::endl;
    std::cout << Message3 << std::endl;
    std::cout << Message4 << std::endl;

    std::cout << Text2 << std::endl;
    std::cout << Text3 << std::endl;
}