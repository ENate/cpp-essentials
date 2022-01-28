int additionNumber(int number) {
    return number + number * 2;
}

#include <iostream>


int main() {
    // initialize variables for dNum
    double dNum {12.567};
    // Conversion implicit
    std::cout << "The solution via int conversion is: " << additionNumber(dNum) << '\n';
    // Use static cast to avoid warning messages
    std::cout << "The solution via static cast is: " << additionNumber(static_cast<int>(dNum)) << '\n';
    return 0;
}