#include "question3.h"

bool test_config()
{
    return true;
}

int roll_die()
{
    // rand returns 0..RAND_MAX, modulus gives 0..5, add 1 to shift to 1..6
    return std::rand() % 6 + 1;
}