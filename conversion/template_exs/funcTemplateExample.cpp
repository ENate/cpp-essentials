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
// using two types of template parameters
// use for an auto return type -- we’ll let the compiler deduce what the return type should be from the 
// return statemenuse for an auto return type -- we’ll let the compiler 
// deduce what the return type should be from the return statemen
template<typename T, typename U>
auto compareNumbers(T aNumber1, U aNumber2)
{
    return (aNumber1 > aNumber2) ? aNumber1 : aNumber2;
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
    // calling template function with 2 different types of arguments
    std::cout << "Resulting comparison: " << addNumbers( aNumber, static_cast<int>(gNumber)) <<'\n';
    // Calling template function with 2 different types of arguments
    std::cout << "Resulting comparison for different types: " << compareNumbers(aNumber, fNumber) <<'\n';

    return 0;
}