// Start with a template parameter  declaration
#include <iostream>

template<typename T>
T addNumbers(T aNumber, T bNumber)
{
    return (aNumber < bNumber) ? aNumber : bNumber;
}
// template and non-template parameters
template<typename U>
U nonAndTemplateParameters(U jNumber, float kNumber)
{
    // std::cout << "second parameter: " << kNumber <<'\n';
    return (jNumber < kNumber) ? jNumber : kNumber;
}

int main()
{
    // Initialize the parameters
    int aNumber {23};
    int bNumber {11};
    std::cout << "Adding both integers: " << addNumbers<int>(aNumber, bNumber) << '\n';
    // Declare floating parameters
    float fNumber{2.003f};
    float  gNumber{1.111};
    std::cout << "adding floating point: " << addNumbers<float>(fNumber, gNumber) <<'\n';
    std::cout << "Calling with normal functions " << addNumbers(fNumber, gNumber) <<'\n';
    std::cout << "----------------------calling template and non-template parameters --------------------\n";
    std::cout << "Non-template and template parameters: " << nonAndTemplateParameters(aNumber, fNumber) <<'\n';

    return 0;
}