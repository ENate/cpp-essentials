#include <iostream>

int main()
{
    // type definition with data type double
    using gravityValue_t = double;

    // using the neyly defined type
    gravityValue_t gravityValue{ 9.8 };
    std::cout <<"The gravity value is: " << gravityValue << " m/s \n";
    return 0;
}