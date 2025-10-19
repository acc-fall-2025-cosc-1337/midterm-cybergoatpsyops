#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("roll_die returns values between 1 and 6 inclusive")
{
	std::srand(1);

	for (int i = 0; i < 20; ++i)
	{
		int value = roll_die();
		REQUIRE(value >= 1);
		REQUIRE(value <= 6);
	}
}
