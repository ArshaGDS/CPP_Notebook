#include <iostream>

int main()
{          
    constexpr unsigned short int Pen{10};
    constexpr unsigned short int Eraser{11};
    constexpr unsigned short int Pencil{12};

    if(float Number{1.2f}; Pen < Pencil)
    {
        std::cout << "Float number is: " << Number << std::endl;
    }

    constexpr unsigned short int Tool{Eraser};
    switch (short int Number{-15}; Tool)
    {
    case Pen:
        /* code */
        break;
    case Eraser:
        /* code */
        break;
    case Pencil:
        /* code */
        break;
    default:
        break;
    }
}
