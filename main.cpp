#include <iostream>
#include <type_traits>

#define cout std::cout
#define endl std::endl

template<typename T>
void func(T n)
{
   if constexpr (std::is_integral_v<T>)
   {
        cout << "Integral" << endl;
   }
   else if constexpr (std::is_floating_point_v<T>)
   {
        cout << "Foating point" << endl;        
   }
   else
   {
       static_assert(std::is_integral_v<T> || std::is_floating_point_v<T>, "Argument must be integral or floating point.");                      
   }
}


int main()
{
    //func(2);
    func(2.5);
}