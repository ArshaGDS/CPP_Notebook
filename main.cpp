#include <iostream>
#include <iomanip>

int main()
{    
    int Num{123};
    int NumRef{Num};

    auto AutVar{Num};
    auto AutVar2{NumRef};

    int WIDTH{15};
    std::cout << std::left;
    std::cout << std::setw(WIDTH) << "Num:"     << Num     << std::endl;
    std::cout << std::setw(WIDTH) << "NumRef:"  << NumRef  << std::endl;
    std::cout << std::setw(WIDTH) << "AutVar:"  << AutVar  << std::endl;
    std::cout << std::setw(WIDTH) << "AutVar2:" << AutVar2 << std::endl;
    
    auto& AutRef{Num};
    auto& AutRef2{NumRef};

    std::cout << std::setw(WIDTH) << "AutRef:"  << AutRef  << std::endl;
    std::cout << std::setw(WIDTH) << "AutRef2:" << AutRef2 << std::endl;

    std::cout << "###################################################" << std::endl;

    AutVar++;
    std::cout << std::setw(WIDTH) << "Num:"     << Num     << std::endl;
    std::cout << std::setw(WIDTH) << "NumRef:"  << NumRef  << std::endl;
    std::cout << std::setw(WIDTH) << "AutVar:"  << AutVar  << std::endl;
    std::cout << std::setw(WIDTH) << "AutVar2:" << AutVar2 << std::endl;
    std::cout << std::setw(WIDTH) << "AutRef:"  << AutRef  << std::endl;
    std::cout << std::setw(WIDTH) << "AutRef2:" << AutRef2 << std::endl;
    AutVar--;

    std::cout << "###################################################" << std::endl;

    AutRef++;
    std::cout << std::setw(WIDTH) << "Num:"     << Num     << std::endl;
    std::cout << std::setw(WIDTH) << "NumRef:"  << NumRef  << std::endl;
    std::cout << std::setw(WIDTH) << "AutVar:"  << AutVar  << std::endl;
    std::cout << std::setw(WIDTH) << "AutVar2:" << AutVar2 << std::endl;
    std::cout << std::setw(WIDTH) << "AutRef:"  << AutRef  << std::endl;
    std::cout << std::setw(WIDTH) << "AutRef2:" << AutRef2 << std::endl;

    std::cout << "###################################################" << std::endl;
}