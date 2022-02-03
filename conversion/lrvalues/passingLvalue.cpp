#include <iostream>
#include <string>

template<typename T>
void sayHelloName(T myName)
{
    std::cout << " hello " << myName << '\n';
}

void displayAge(const int& age)
{
    std::cout << " age: " << age << '\n';
}

void passingWays(int a, double& value, const std::string& message)
{
    std::cout << "by Value: " << a << '\n';
    std::cout << "By reference: " << value << '\n';
    std::cout << "const by reference" << message << '\n';
}

int main()
{
    std::string name{"Satroed"};
    // name variable is expensively copied into name in sayHelloName function
    sayHelloName(name);

    // pass lvalue by reference
    int myAge{32};
    displayAge(myAge);

    // Pass fundamental types by value, and class (or struct) types by const reference.
    int aValue{12};
    double vals{23.332};
    const std::string msg{"By reference"};
    passingWays(aValue, vals, msg);
    return 0;
}