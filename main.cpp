#include <iostream>

int main()
{
    unsigned int One(1);
    signed int NagativeOne(1);

    short ShortVar(10);
    short int ShortIntVar(10);
    unsigned short int UnsignedShotInt(10);

    long int LongInt(10);
    unsigned long int UnsignedLongInt(10);

    std::cout << sizeof(One) << std::endl;
    std::cout << sizeof(NagativeOne) << std::endl;
    std::cout << sizeof(ShortVar) << std::endl;
    std::cout << sizeof(ShortIntVar) << std::endl;
    std::cout << sizeof(UnsignedShotInt) << std::endl;
    std::cout << sizeof(LongInt) << std::endl;
    std::cout << sizeof(UnsignedLongInt) << std::endl;
}