#include <iostream>

#define cout std::cout
#define endl std::endl

struct Vector3
{
    float X;
    float Y;
    float Z;
};

int main()
{
    Vector3 vector{200.f, 15.f, 10.f};
    auto [a, b, c] = vector;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}