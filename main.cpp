#include <iostream>
#include <cstring>

template <typename T>
T Maximum(T a, T b)
{
    return (a > b) ? a : b;
}

template <typename T>
T* Maximum(T* a, T* b)
{
    return (*a > *b) ? a : b;
}

// Template specialization
template <>
const char* Maximum<const char*>(const char* a, const char* b)
{
    return (std::strcmp(a, b) > 0 ? a : b);
}

// Template return type deduction with auto
// --> Larger type is going to be deduced as return type <--
template <typename T0, typename T1>
auto Maximum(T0 a, T1 b)
{
    return (a > b) ? a : b;
}

// Multiple parameters
template <typename ReturnType, typename T0, typename T1>
ReturnType Sum(T0 a, T1 b)
{
    return a + b;
}
// Multiple parameters: Bad design!!!
// template <typename T0, typename T1>
// T0 Sum(T0 a, T1 b)
// {
//     return a + b;
// }

int main()
{    
    int a{5}, b{10};
    double c{1.5}, d{1.8};
    std::cout << Maximum(a, b) << std::endl;
    std::cout << Maximum(c, d) << std::endl;

    std::cout << Maximum(&a, &b) << " " << *Maximum(&a, &b) << std::endl;
    std::cout << Maximum(&c, &d) << " " << *Maximum(&c, &d) << std::endl;

    std::cout << Sum<int>(a, b) << std::endl;
    std::cout << Sum<double>(a, b) << std::endl;

    // Template specialization
    const char* A{"A"};
    const char* B{"B"};
    std::cout << Maximum(A, B) << std::endl;

    // Multiple parameters
    std::cout << Sum<double, int, int>(a, b) << std::endl;
    std::cout << Sum<double, int, double>(a, c) << std::endl;
    std::cout << Sum<int, int, double>(a, c) << std::endl;

    // Template return type deduction with auto
    {
        auto SumResult { Maximum(a, c) };
        std::cout << SumResult << " " << sizeof(SumResult) << std::endl;        
    }
    {
        auto SumResult { Maximum(c, a) };
        std::cout << SumResult << " " << sizeof(SumResult) << std::endl; 
    }
}