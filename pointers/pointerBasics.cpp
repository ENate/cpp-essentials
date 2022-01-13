#include <iostream>

int main()
{
    // Define and array
    int myArray[15] = {11, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    // initialize an integer pointer to myArray
    int *ptrMyArray = &myArray[0];
    for (int i = 0; i < 15; i++)
        {
            std::cout << "Value at" << " position " << i << " is " <<  *ptrMyArray << '\n';
            ptrMyArray++;
            std::cout << "Address at: " << " position " << i << " is " << (ptrMyArray + i) << '\n';
            // Printing array values
        }
        // using character pointers

    return 0;
}