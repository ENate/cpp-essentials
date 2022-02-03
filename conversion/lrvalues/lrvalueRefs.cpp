#include <iostream>

int main()
{
    int xValue{5}; // referent
    int& refXvalue{xValue}; // reference binding: not possible for constant values

    std::cout << "Printing ...\n";
    std::cout << xValue << refXvalue << '\n';
    // Assign another xValue
    xValue = 33;
    std::cout << xValue << refXvalue << '\n';
    return 0;
}