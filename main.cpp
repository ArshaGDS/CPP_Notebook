#include <iostream>
#include <string>

int main()
{
    std::string Str{"Arsha"};
    std::cout << Str.size() << std::endl;
    std::cout << Str.length() << std::endl;

    Str.at(2) = 'S';
    std::cout << "The third char of Str: " << Str.at(2) << std::endl;

    //---------------------------------------------------------

    char Front = Str.front();
    char Back  = Str.back();

    char& Front_Ref = Str.front();
    char& Back_Ref  = Str.back();

    std::cout << "Front: " << Front << " Back: " << Back << " Front_Ref: " << Front_Ref << " Back_Ref: " << Back_Ref << std::endl;

    Front = 'a';
    Back  = 'A';
    std::cout << "Str: " << Str << std::endl;

    Front_Ref = 'a';
    Back_Ref  = 'A';
    std::cout << "Str: " << Str << std::endl;

    std::cout << std::endl;

    std::string Str2{"Hello World"};
    std::string Str2_c_str{Str2.c_str()};
    std::string Str2_data{Str2.data()};

    std::cout << Str2.length() << std::endl;
    std::cout << Str2_c_str.length() << std::endl;
    std::cout << Str2_data.length() << std::endl;
    std::cout << std::endl;
}