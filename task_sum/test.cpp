#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "sum.h"


TEST_CASE("Test positive inputs") {
    CHECK(Sum(1, 1) == 2);
}

TEST_CASE("Test negative inputs") {
    CHECK(Sum(-1, -1) == -2);
}

TEST_CASE("Test zero inputs") {
    CHECK(Sum(0, 0) == 0);
}

// Enable this test if you are brave enough!

// TEST_CASE("Test big numbers") {
//     int a = 3'000'000'000;
//     int b = 3'000'000'000;
//     int64_t correct_sum = 6'000'000'000;
//     CHECK(Sum(a, b) == correct_sum);
// }