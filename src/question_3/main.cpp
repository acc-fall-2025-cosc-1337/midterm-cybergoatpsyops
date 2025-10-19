#include <ctime>
#include <iostream>

#include "question3.h"

int main()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    char choice = 'Y';

    while (choice == 'Y' || choice == 'y')
    {
        int result = roll_die();
        std::cout << "You rolled: " << result << '\n';

        std::cout << "Roll again? (Y to continue): ";
        std::cin >> choice;
        std::cout << std::endl;
    }

    return 0;
}