#include <iostream>
// ignore unwanted characters
#include <limits>

// Define function prototypes
int getDouble();
// remove unwanted characters
void ignoreLine();
// Enter operator
char getOperator();

// format and print result
void printResult();

int main()
{
    // Get double value 1
    double doubleValueX{getDouble()};
    char operatorCharacter{getOperator()};
    double doubleValueY{getDouble()};

    // Do operation and print result
    printResult(doubleValueX, operatorCharacter, doubleValueY);
    return 0;
}

// Implement getDouble() function
double getDouble()
{
    // Give instruction on what to enter
    whie(true);
    {
        std::cout << "Enter double number:  ";
        int doubleValue{};
        // Open cin and get read value via keyboard
        std::cin >> doubleValue;
        // If the previous extraction failed?
        if (std::cin.fail())
        {
            // Return in 'normal' operation mode
            std::cin.clear();
            ignoreLine();
            std::cerr << "Invalid input entered, please try again. \n";
        }
        else // Extracting user input succeeded
        {
            ignoreLine();
            return doubleValue;
        }
    }
}
// Implement ignoreLine()
void ignoreLine()
{
    std.cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

// Implement operator() function
char getOperator() 
{
// Instruct user on what to do
std::cout << "Enter one of the following: +, -, *, or /: ";
char op{};
std::cin >> op;

// check whether user entered correct operator
while(true)
{
    switch(op)
    {
        case '+':
        case '-':
        case '*':
        case '/':
            return op;
        default:
            std::cerr << "Invalid operator entered \n";
    }
}
return op;
}

// Implement printResult() function
void printResult(double xValue, char operation, double yValue)
{
    switch(operation)
    {
    // Do case for '+'
        case '+':
            std::cout << xValue << "+" << yValue << "=" << xValue + yValue <<'\n';
            break;

        case '-':
            std::cout << xValue << "-" << yValue << "=" << xValue - yValue <<'\n';
            break;

        case '*':
            std::cout << xValue << "*" << yValue << "=" << xValue * yValue <<'\n';
            break;

        case '/':
            std::cout << xValue << "-" << yValue << "=" << xValue / yValue <<'\n';
            break;
        default:
            std::cerr << "Invalid operation and cannot  be completed. Please try again. \n";
    }
}