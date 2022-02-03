#include <iostream>
#include <string>

template<typename T>
void sayHelloName(T myName)
{
    std::cout << " hello " << myName << '\n';
}

int main()
{
    std::string name{"Satroed"};
    // name variable is expensively copied into name in sayHelloName function
    sayHelloName(name);

    return 0;
}