#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

TEST_CASE("Check That Catch works : 2 + 2 = 4")
{
	REQUIRE(2 + 2 == 4);
}