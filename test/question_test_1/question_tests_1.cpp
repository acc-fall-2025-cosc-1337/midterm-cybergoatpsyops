#define CATCH_CONFIG_MAIN  
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test sales commission for 100 (5% range)")
{
	REQUIRE(get_sales_commission(100) == Approx(5.0));
}

TEST_CASE("Test sales commission for 750 (6% range)")
{
	REQUIRE(get_sales_commission(750) == Approx(45.0));
}

TEST_CASE("Test sales commission for 1100 (7% range)")
{
	REQUIRE(get_sales_commission(1100) == Approx(77.0));
}

TEST_CASE("Test sales commission for 1750 (8% range)")
{
	REQUIRE(get_sales_commission(1750) == Approx(140.0));
}

TEST_CASE("Test sales commission for negative value")
{
	REQUIRE(get_sales_commission(-100) == Approx(0.0));
}
