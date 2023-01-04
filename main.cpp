#include <iostream>

int main()
{
    auto func = [](auto A, auto B) {
        return A + B;
    };

    // C++20
    auto funcV20 = []<typename T0, typename T1>(T0 A, T1 B) {
        return A + B;
    };

    int a{20};
    double b{20.5};

    std::cout << "Sum: " << func(a, b) << std::endl;
    std::cout << "Sum: " << funcV20(a, b) << std::endl;
}