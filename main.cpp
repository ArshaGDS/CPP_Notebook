#include <iostream>
#include <string>

int main()
{          
    std::string SoldierCharacter{"Soldier"};
    unsigned short int SoldierHealth{100};

    std::string EnemyCharacter{"Enemy"};
    unsigned short int EnemyHealth{200};

    std::string CharacterType{SoldierCharacter};
    unsigned short int MaximumHealth{ CharacterType == SoldierCharacter ? SoldierHealth : EnemyHealth };
    unsigned short int Health{16};
    unsigned short int AppliedDamage{10};
    unsigned short int Medkit{150};

    // Take damage
    Health -= AppliedDamage > Health ? Health : AppliedDamage;
    std::cout << "Take damagem" << std::endl << "Current health: " << Health << std::endl;
    // Take damage
    Health -= AppliedDamage > Health ? Health : AppliedDamage;
    std::cout << "Take damagem" << std::endl << "Current health: " << Health << std::endl;
    // Healing
    Health += Medkit > MaximumHealth ? MaximumHealth : Medkit;
    std::cout << "Healing..." << std::endl << "Current health: " << Health << std::endl;
    std::cout << std::endl;

    //---------------------------------------------------------------------------------------

    int NormalInt{1};       // 4 Bytes
    short int ShortInt{1};  // 2 Bytes
    long int LongInt{1};    // 8 Bytes

    auto val1 { 1 > 2 ? ShortInt : NormalInt };
    std::cout << sizeof(val1) << std::endl; // 4 Bytes

    auto val2 { 1 < 2 ? ShortInt : NormalInt };
    std::cout << sizeof(val2) << std::endl; // 2 Bytes

    auto val3 { 1 > 2 ? NormalInt : LongInt };
    std::cout << sizeof(val3) << std::endl; // 8 Bytes

    auto val4 { 1 < 2 ? NormalInt : LongInt };
    std::cout << sizeof(val4) << std::endl; // 2 Bytes
}
