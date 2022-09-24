#include <iostream>
#include <iomanip>

int main()
{              
    char message1[5] {'A', 'r', 's', 'h', 'a'};
    char message2[6] {'A', 'r', 's', 'h', 'a'}; // Index 6 is auto filled by compiler with null
    char message3[6] {'A', 'r', 's', 'h', 'a', '\0'}; 

    std::cout << "Message 1: " << message1 << std::endl;
    std::cout << "Message 2: " << message2 << std::endl;
    std::cout << "Message 3: " << message3 << std::endl;

    message2[4] = 'A';
    std::cout << "Message 2: " << message2 << std::endl;

    char message4[] {"Arsha"}; // Best way to init char array (Auto append null in end of string)

    for (auto index : message4)
    {
        std::cout << index;
    }
    std::cout << std::endl;
}
