#include <iostream>
#include <string>

int main()
{
    // Print a message
    std::cout << "Hello World :D" << std::endl;

    // Print a Error
    std::cerr << "This is a error message" << std::endl;

    // Print a Log
    std::clog << "This is a Log" << std::endl << std::endl;

    //-----------------------------------

   // Get input from user
    int Age;
    std::cout << "Please enter you'r age: ";
    std::cin >> Age;
    std::string Name, Family;
    std::cout << "Please enter you'r name and family: " << std::endl;
    /*
    If usere enter a string with space, The first part of the string is stored
    in the name and the second part of the string is stored in the family
    */
    std::cin >> Name >> Family;
    std::cout << "So you'r " << Name << " " << Family << ". Nice to meet you." << std::endl;

    //-----------------------------------

    std::string Address, City;
    /*
    In this method, even if there is a space inside the text,
    the text is completely stored in the variable
    */
    std::cout << "Please enter you'r address? " << std::endl;    
    // This code doesn't work! because we used std::cin before that! :C
    std::getline(std::cin, Address);
    std::cout << "The address: " << Address;
    std::cout << "Please enter you'r Ciry? " << std::endl;
    std::cin >> City;
    std::cout << "So you'r address is: " << City << " - " << Address << std::endl;
}