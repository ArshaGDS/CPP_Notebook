#include <iostream>

int main()
{          
    unsigned short int Score{18};  
    switch(Score)
    {
        case 20 : {
            std::cout << "Good job" << std::endl;
        }
        break;
        case 15 : { std::cout << "Not bad" << std::endl; }
        break;
        case 13 :
        case 12 : {}
        case 11 :  std::cout << "Ridi" << std::endl; 
        break;
        default : {
            std::cout << "Khode khari" << std::endl;
        }
        break;
    }
}
