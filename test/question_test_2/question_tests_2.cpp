#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("get_factorial_sequence returns 1x2x3=6 for input 3")
{
	REQUIRE(get_factorial_sequence(3) == "1x2x3=6");
}

TEST_CASE("get_factorial_sequence returns 1x2x3x4=24 for input 4")
{
	REQUIRE(get_factorial_sequence(4) == "1x2x3x4=24");
}

TEST_CASE("get_factorial_sequence returns 1x2x3x4x5=120 for input 5")
{
	REQUIRE(get_factorial_sequence(5) == "1x2x3x4x5=120");
}

TEST_CASE("get_factorial_sequence returns 1x2x3x4x5x6=720 for input 6")
{
	REQUIRE(get_factorial_sequence(6) == "1x2x3x4x5x6=720");
}
