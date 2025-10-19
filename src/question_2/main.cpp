#include <iostream>
#include <string>

#include "question2.h"

int main()
{
    char choice = 'y';

    do
    {
        int number = 0;
        std::cout << "Enter a number between 1 and 10: ";
        std::cin >> number;

        while (number < 1 || number > 10)
        {
            std::cout << "Number must be between 1 and 10. Try again: ";
            std::cin >> number;
        }

        std::string result = get_factorial_sequence(number);
        std::cout << result << std::endl;

        std::cout << "Do you want to calculate another factorial sequence? (y/n): ";
        std::cin >> choice;
        std::cout << std::endl;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}