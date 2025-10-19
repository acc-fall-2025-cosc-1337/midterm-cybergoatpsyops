#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("get_fib_number returns 5 for input 5")
{
	REQUIRE(get_fib_number(5) == 5);
}

TEST_CASE("get_fib_number returns 13 for input 7")
{
	REQUIRE(get_fib_number(7) == 13);
}

TEST_CASE("get_fib_number returns 55 for input 10")
{
	REQUIRE(get_fib_number(10) == 55);
}

TEST_CASE("get_fib_number returns 144 for input 12")
{
	REQUIRE(get_fib_number(12) == 144);
}
