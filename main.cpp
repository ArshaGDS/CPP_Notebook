#include <iostream>
#include <string>

enum class Month 
{
    Jan, January   = Jan,
    Feb, February  = Feb,
    Mar, March     = Mar,
    Apr, April     = Apr,
    May,
    Jun, June      = Jun,
    Aug, August    = Aug,
    Sep, September = Sep,
    Oct, October   = Oct,
    Nov, November  = Nov,
    Dec, December  = Dec
};

std::string_view MonthToString(Month month)
{
    switch (month)
    {
        using enum Month;
        case Jan : return "January";
        case Feb : return "February";
        case Mar : return "March";
        case Apr : return "April";
        // ...
        default  : return "Invalid input";
    }
}

int main()
{
    Month month {Month::Apr};
    std::cout << MonthToString(month) << std::endl;
}