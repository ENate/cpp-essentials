int additionNumber(int number) {
    return number + number * 2;
}

#include <iomanip>
#include <iostream>
#include <typeinfo>

int main() {
    // initialize variables for dNum
    double dNum {12.567};
    // Conversion implicit
    std::cout << "The solution via int conversion is: " << additionNumber(dNum) << '\n';
    // Use static cast to avoid warning messages
    std::cout << "The solution via static cast is: " << additionNumber(static_cast<int>(dNum)) << '\n';
    // For floating with loss of precision for converting from large to small values
    float f = 0.123456789;
    std::cout << "The solution from large to small is: " << std::setprecision(9) << f << '\n';
    // check type conversion
    int aNum{4};
    int bNum{3};
    // show the solution type
    std::cout << "The variable names is: " << typeid(aNum + bNum).name() << " is " << (aNum + bNum) << '\n';
    return 0;
}