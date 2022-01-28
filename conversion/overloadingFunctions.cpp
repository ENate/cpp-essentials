#include <iostream>
// Function to illustrate overloaded functions, default arguments etc...
// define overloaded functions for add

int add(int x, int y)
{
    return x + y;
}

double add(double x, double y)
{
    return x + y;
}
// Mixed overload functions
double add(double x, int y)
{
    return x * y;
}
// default arguments in functions
double add(double x, double y, double z=10.002)
{
    std::cout << "Default Argument: \n";
    return x + y * z;
}

int main()
{
    // initialize parameters
    // / call int addiction
    int dNum{ 12 };
    int eNum{ 10 };
    std::cout << "Adding integer values:  " << add(dNum, eNum) << '\n';
    // Initialize double data types
    double xNum{ 2.332 };
    double yNum{ 0.332 };
    // call add()
    std::cout << "Adding double: " << add(xNum, yNum) << '\n';
    // Do for mixed data types
    std::cout << "Calculating sum for mixed data types: " << add(xNum, eNum) << '\n';
    return 0;

    // case for default arguments
    std::cout << "For defualt arguments: " << add(xNum, yNum) << '\n';
}