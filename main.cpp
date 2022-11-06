#include <iostream>
#include <string>

int main()
{
    // Raw string litterals
    std::string StrFileAddress { R"(D:\Videos\Tutorials\C++20)" };
    std::string StrMessage { R"---(The message was "(Stay out of this!)")---" };
    std::string StrMessage2 {
        R"(
        Multiline 
        String!
        )"
    };
    
    std::cout << "Address: " << StrFileAddress << std::endl;
    std::cout << StrMessage  << std::endl;
    std::cout << StrMessage2 << std::endl;
}