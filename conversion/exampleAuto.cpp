#include <iostream>
#include <typeinfo>

int main()
{
    auto xNum{7};
    auto yNum{3.4};
    std::cout << "xNum type: " << typeid(xNum).name() << xNum << '\n';
    std::cout << "yNum: " << yNum << '\n';
    return 0;
}