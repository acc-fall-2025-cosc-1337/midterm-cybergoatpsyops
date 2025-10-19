#include "question2.h"

bool test_config()
{
    return true;
}

std::string get_factorial_sequence(int number)
{
    if (number < 1)
    {
        return "Invalid input";
    }

    long long factorial = 1;
    std::string sequence = "1";

    for (int i = 2; i <= number; ++i)
    {
        factorial *= i;
        sequence += "x" + std::to_string(i);
    }

    sequence += "=" + std::to_string(factorial);
    return sequence;
}