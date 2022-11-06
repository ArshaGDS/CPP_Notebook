#include <iostream>
#include <string>

int main()
{
    std::string Str{"Hello World!"};
    std::string_view StrView{Str};
    std::string_view StrView2{StrView};

    std::cout << "Str: " << Str << std::endl;
    std::cout << "StrView: " << StrView << std::endl;

    StrView.remove_prefix(5);
    std::cout << StrView << std::endl;

    StrView2.remove_suffix(6);
    std::cout << StrView2 << std::endl;
}