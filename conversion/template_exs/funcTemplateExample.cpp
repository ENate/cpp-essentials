// Start with a template parameter  declaration
#include <iostream>

template<typename T>
T addNumbers(T aNumber, T bNumber)
{
    return (aNumber < bNumber) ? aNumber : bNumber;
}

int main()
{
    // Initialize the parameters
    int aNumber {23};
    int bNumber {11};
    std::cout << "Adding both integers: " << addNumbers<int>(aNumber, bNumber) << '\n';
    // Declare floating parameters
    float fNumber{2.003};
    float  gNumber{1.111};
    std::cout << "adding floating point: " << addNumbers<float>(fNumber, gNumber) <<'\n';
    std::cout << "Calling with normal functions " << addNumbers(fNumber, gNumber) <<'\n';

    return 0;
}