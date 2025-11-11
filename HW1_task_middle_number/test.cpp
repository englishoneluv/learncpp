#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "middle_number.h"


TEST_CASE("Test 1 2 3") {
    CHECK(MiddleNumber(1, 2, 3) == 2);
}

TEST_CASE("Test 3 2 1") {
    CHECK(MiddleNumber(3, 2, 1) == 2);
}

TEST_CASE("Test 2 1 3") {
    CHECK(MiddleNumber(2, 1, 3) == 2);
}

TEST_CASE("Test 3 1 2") {
    CHECK(MiddleNumber(3, 1, 2) == 2);
}

TEST_CASE("Test 1 3 2") {
    CHECK(MiddleNumber(1, 3, 2) == 2);
}

TEST_CASE("Test 2 3 1") {
    CHECK(MiddleNumber(2, 3, 1) == 2);
}

TEST_CASE("Test All Equal") {
    CHECK(MiddleNumber(1, 1, 1) == 2);
}