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

    // referencing a constant value
    const double salary{12.000};
    const double& refSalary{salary};

    std::cout << "Referenced constant lvalue: \n";
    std::cout << '\n';
    std::cout << salary << " \nreference: " << refSalary << '\n';

    // references cannot be reseated
    int yValue{7};
    refXvalue =yValue;
    std::cout << "New reseated to yValue since ref represents xValue \n";
    std::cout <<refXvalue << '\n';
    return 0;
}