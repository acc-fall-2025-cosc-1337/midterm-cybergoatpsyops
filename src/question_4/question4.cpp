#include "question4.h"

bool test_config()
{
    return true;
}

int get_fib_number(int number)
{
    if (number <= 0)
    {
        return 0;
    }

    if (number == 1)
    {
        return 1;
    }

    int previous = 0;
    int current = 1;

    for (int i = 2; i <= number; ++i)
    {
        int next = previous + current;
        previous = current;
        current = next;
    }

    return current;
}