#include <iostream>
#include <cctype>
#define Log(x) std::cout << (x) << std::endl

int main()
{
    // Check is character is alphanumeric
    // If char is A-Z, a-z, 0-9 return none zero number
    // If Char is !@#$%^&*()=-+_ return zero
    std::cout << "isalnum" << std::endl;
    std::cout << std::isalnum('4') << std::endl;
    std::cout << std::isalnum('f') << std::endl;
    std::cout << std::isalnum('D') << std::endl;
    std::cout << std::isalnum('=') << std::endl;
    std::cout << std::isalnum('@') << std::endl;
    std::cout << std::isalnum('%') << std::endl;
    //============================================
    // Check if character is alphbetic
    // If char is A-Z, a-z, return none zero number else return zero
    std::cout << "isalpha" << std::endl;
    std::cout << std::isalpha('4') << std::endl;
    std::cout << std::isalpha('f') << std::endl;
    std::cout << std::isalpha('D') << std::endl;
    //============================================
    // Check if character is blank
    // If char is black, return none zero number else return zero
    std::cout << "isblank" << std::endl;
    std::cout << std::isblank(' ') << std::endl;
    std::cout << std::isblank('f') << std::endl;
    std::cout << std::isblank('D') << std::endl;
    //============================================
    // Check if character is lowercase / uppercase
    // If char is lowercase / uppercase, return none zero number else return zero
    std::cout << "islower" << std::endl;
    std::cout << std::islower('f') << std::endl;
    std::cout << std::islower('F') << std::endl;
    std::cout << "isupper" << std::endl;
    std::cout << std::isupper('f') << std::endl;
    std::cout << std::isupper('F') << std::endl;
    //============================================
    // Check if character is digit
    // If char is digit, return none zero number else return zero
    std::cout << "isidigit" << std::endl;
    std::cout << std::isdigit('3') << std::endl;
    std::cout << std::isdigit('F') << std::endl;
    //============================================
}