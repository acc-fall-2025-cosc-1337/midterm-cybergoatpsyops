#include <iostream>

#include "question4.h"

int main()
{
    char choice = 'y';

    do
    {
        int number = 0;
        std::cout << "Enter a number between 1 and 15: ";
        std::cin >> number;

        while (number < 1 || number > 15)
        {
            std::cout << "Number must be between 1 and 15. Try again: ";
            std::cin >> number;
        }

        int fib_value = get_fib_number(number);
        std::cout << "Fibonacci number at position " << number << " is " << fib_value << '\n';

        std::cout << "Find another Fibonacci number? (y/n): ";
        std::cin >> choice;
        std::cout << std::endl;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}