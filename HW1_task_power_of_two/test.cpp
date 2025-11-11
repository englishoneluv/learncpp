#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "power_of_two.h"


TEST_CASE("Test Power of 0") {
    CHECK(PowerOfTwo(0) == 1);
}

TEST_CASE("Test Power of 1") {
    CHECK(PowerOfTwo(1) == 2);
}

TEST_CASE("Test Power of 2") {
    CHECK(PowerOfTwo(2) == 4);
}

TEST_CASE("Test Power of 3") {
    CHECK(PowerOfTwo(3) == 8);
}

TEST_CASE("Test Power of 10") {
    CHECK(PowerOfTwo(10) == 1024);
}
