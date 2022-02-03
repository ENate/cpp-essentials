#include <iostream>

int main()
{
    int xValue{5};
    int& refXvalue{xValue};

    std::cout << "Printing ...\n";
    std::cout << xValue << refXvalue << '\n';
    // Assign another xValue
    xValue = 33;
    std::cout << xValue << refXvalue << '\n';
    return 0;
}